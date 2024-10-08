% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/helper_functions.R
\name{plot_flc}
\alias{plot_flc}
\title{Plot the factor loading curves}
\usage{
plot_flc(post_fk, tau = NULL)
}
\arguments{
\item{post_fk}{the \code{Nsims x m x K} array of \code{Nsims} draws from the posterior
distribution of the \code{m x K} matrix of FLCs, \code{fk}}

\item{tau}{\code{m x 1} vector of observation points}
}
\description{
Plot posterior mean of the factor loading curves together with the simultaneous
and pointwise 95\\% credible bands.
}
