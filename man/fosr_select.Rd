% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/variable_selection_functions.R
\name{fosr_select}
\alias{fosr_select}
\title{Decoupling shrinkage and selection for function-on-scalars regression}
\usage{
fosr_select(
  X,
  post_alpha,
  post_trace_sigma_2,
  weighted = TRUE,
  alpha_level = 0.1,
  remove_int = TRUE,
  include_plot = TRUE
)
}
\arguments{
\item{X}{\code{n x p} matrix of predictors}

\item{post_alpha}{\code{Nsims x p x K} array of \code{Nsims} posterior draws
of the \code{p} predictors for each of \code{K} factors}

\item{post_trace_sigma_2}{\code{Nsims x 1} vector of posterior draws of the trace
of the (marginal) covariance (see below for details)}

\item{weighted}{logical; if TRUE, use weighted group lasso (recommended)}

\item{alpha_level}{coverage for the credible interval on the proportion of
variance explained}

\item{remove_int}{logical; if TRUE, remove the intercept term from model comparisons}

\item{include_plot}{logical; if TRUE, include a plot showing proportion of variability
explained against model size}
}
\value{
alpha_dss a \code{p x K} matrix of (sparse) regression coefficents
}
\description{
For a functional response and scalar predictors, construct a posterior
summary that balances predictive accuracy and sparsity. Given posterior
draws of regression coefficients (or coefficient functions) from a FOSR model,
use a suitably-defined loss function to select important variables for prediction.
}
\note{
This function is value for the regression functions (m-dimensional) as well as the
regression factors (K-dimensional). Since K << m, the latter is much faster.

The matrix of predictors, \code{X}, may be different from the given matrix
in the data; i.e., we may have a different set of design points for prediction.

\code{post_trace_sigma_2} is the (posterior samples of)
the trace of the error covariance matrix jointly across subjects i=1,...,n
and observations j=1,...,m, after marginalizing out the random effects \code{gamma_ik}.
This is given by \code{nm x sigma_e^2} + \code{sum_ik sigma_gamma_ik^2},
where the second term is necessary only when random effects are included in the model
AND integrated over in the predictive distribution.
}
\examples{
# Simulate some data:
sim_data = simulate_fosr(n = 100, m = 20, p_0 = 100, p_1 = 5)

# Data:
Y = sim_data$Y; X = sim_data$X; tau = sim_data$tau

# Dimensions:
n = nrow(Y); m = ncol(Y); p = ncol(X)

# Run the FOSR:
out = fosr(Y = Y, tau = tau, X = X, K = 6,
           mcmc_params = list("fk", "alpha", "Yhat", "sigma_e", "sigma_g"))

# Run the DSS:
alpha_dss = fosr_select(X = X,
                       post_alpha = out$alpha,
                       post_trace_sigma_2 = n*m*out$sigma_e^2 + apply(out$sigma_g^2, 1, sum))
# Variables selected:
(select_dss = which(apply(alpha_dss, 1, function(x) any(x != 0))))

}
