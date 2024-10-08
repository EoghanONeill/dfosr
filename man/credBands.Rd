% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/helper_functions.R
\name{credBands}
\alias{credBands}
\title{Compute Simultaneous Credible Bands}
\usage{
credBands(sampFuns, alpha = 0.05)
}
\arguments{
\item{sampFuns}{\code{Nsims x m} matrix of \code{Nsims} MCMC samples and \code{m} points along the curve}

\item{alpha}{confidence level}
}
\value{
\code{m x 2} matrix of credible bands; the first column is the lower band, the second is the upper band
}
\description{
Compute (1-alpha)\\% credible BANDS for a function based on MCMC samples using Crainiceanu et al. (2007)
}
\note{
The input needs not be curves: the simultaneous credible "bands" may be computed
for vectors. The resulting credible intervals will provide joint coverage at the (1-alpha)\%
level across all components of the vector.
}
