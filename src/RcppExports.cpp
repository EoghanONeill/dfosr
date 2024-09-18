// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sampleFLC
arma::mat sampleFLC(arma::mat BtY, arma::mat Beta, arma::mat Psi, arma::mat BtB, arma::mat Omega, arma::vec lambda, arma::vec sigmat2);
RcppExport SEXP _dfosr_sampleFLC(SEXP BtYSEXP, SEXP BetaSEXP, SEXP PsiSEXP, SEXP BtBSEXP, SEXP OmegaSEXP, SEXP lambdaSEXP, SEXP sigmat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type BtY(BtYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Beta(BetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type BtB(BtBSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigmat2(sigmat2SEXP);
    rcpp_result_gen = Rcpp::wrap(sampleFLC(BtY, Beta, Psi, BtB, Omega, lambda, sigmat2));
    return rcpp_result_gen;
END_RCPP
}
// sampleFLC_orthog
arma::mat sampleFLC_orthog(arma::mat BtY, arma::mat Beta, arma::mat Psi, arma::mat Omega, arma::vec lambda, arma::vec sigmat2);
RcppExport SEXP _dfosr_sampleFLC_orthog(SEXP BtYSEXP, SEXP BetaSEXP, SEXP PsiSEXP, SEXP OmegaSEXP, SEXP lambdaSEXP, SEXP sigmat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type BtY(BtYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Beta(BetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigmat2(sigmat2SEXP);
    rcpp_result_gen = Rcpp::wrap(sampleFLC_orthog(BtY, Beta, Psi, Omega, lambda, sigmat2));
    return rcpp_result_gen;
END_RCPP
}
// sampleFLC_cons
arma::mat sampleFLC_cons(arma::mat BtY, arma::mat Beta, arma::mat Psi, arma::mat BtB, arma::mat Omega, arma::mat BtCon, arma::vec lambda, arma::vec sigmat2);
RcppExport SEXP _dfosr_sampleFLC_cons(SEXP BtYSEXP, SEXP BetaSEXP, SEXP PsiSEXP, SEXP BtBSEXP, SEXP OmegaSEXP, SEXP BtConSEXP, SEXP lambdaSEXP, SEXP sigmat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type BtY(BtYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Beta(BetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type BtB(BtBSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type BtCon(BtConSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigmat2(sigmat2SEXP);
    rcpp_result_gen = Rcpp::wrap(sampleFLC_cons(BtY, Beta, Psi, BtB, Omega, BtCon, lambda, sigmat2));
    return rcpp_result_gen;
END_RCPP
}
// sampleFLC_cons_1
arma::mat sampleFLC_cons_1(arma::mat BtY, arma::mat Beta, arma::mat Psi, arma::mat BtB, arma::mat Omega, arma::mat BtCon, arma::vec lambda, arma::vec sigmat2);
RcppExport SEXP _dfosr_sampleFLC_cons_1(SEXP BtYSEXP, SEXP BetaSEXP, SEXP PsiSEXP, SEXP BtBSEXP, SEXP OmegaSEXP, SEXP BtConSEXP, SEXP lambdaSEXP, SEXP sigmat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type BtY(BtYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Beta(BetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type BtB(BtBSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type BtCon(BtConSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigmat2(sigmat2SEXP);
    rcpp_result_gen = Rcpp::wrap(sampleFLC_cons_1(BtY, Beta, Psi, BtB, Omega, BtCon, lambda, sigmat2));
    return rcpp_result_gen;
END_RCPP
}
// sampleFLC_1
arma::mat sampleFLC_1(arma::mat BtY, arma::mat Beta, arma::mat Psi, arma::mat BtB, arma::mat Omega, arma::vec lambda, arma::vec sigmat2);
RcppExport SEXP _dfosr_sampleFLC_1(SEXP BtYSEXP, SEXP BetaSEXP, SEXP PsiSEXP, SEXP BtBSEXP, SEXP OmegaSEXP, SEXP lambdaSEXP, SEXP sigmat2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type BtY(BtYSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Beta(BetaSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Psi(PsiSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type BtB(BtBSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Omega(OmegaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type sigmat2(sigmat2SEXP);
    rcpp_result_gen = Rcpp::wrap(sampleFLC_1(BtY, Beta, Psi, BtB, Omega, lambda, sigmat2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_dfosr_sampleFLC", (DL_FUNC) &_dfosr_sampleFLC, 7},
    {"_dfosr_sampleFLC_orthog", (DL_FUNC) &_dfosr_sampleFLC_orthog, 6},
    {"_dfosr_sampleFLC_cons", (DL_FUNC) &_dfosr_sampleFLC_cons, 8},
    {"_dfosr_sampleFLC_cons_1", (DL_FUNC) &_dfosr_sampleFLC_cons_1, 8},
    {"_dfosr_sampleFLC_1", (DL_FUNC) &_dfosr_sampleFLC_1, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_dfosr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
