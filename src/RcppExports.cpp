//// File Name: RcppExports.cpp
//// File Version: 0.8006
// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>

using namespace Rcpp; using namespace arma;

// tam_mml_3pl_calc_Fdes
Rcpp::List tam_mml_3pl_calc_Fdes(Rcpp::NumericVector XDES, Rcpp::NumericVector dimXdes);
RcppExport SEXP _TAM_tam_mml_3pl_calc_Fdes(SEXP XDESSEXP, SEXP dimXdesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type XDES(XDESSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dimXdes(dimXdesSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_mml_3pl_calc_Fdes(XDES, dimXdes));
    return rcpp_result_gen;
END_RCPP
}
// tam_mml_3pl_slca_deriv
Rcpp::List tam_mml_3pl_slca_deriv(Rcpp::NumericMatrix XdesM, Rcpp::NumericVector dimXdes, Rcpp::NumericVector Xlambda, Rcpp::NumericVector probs, Rcpp::NumericVector nik, Rcpp::NumericVector Nik, Rcpp::NumericVector guess, Rcpp::NumericVector probs0);
RcppExport SEXP _TAM_tam_mml_3pl_slca_deriv(SEXP XdesMSEXP, SEXP dimXdesSEXP, SEXP XlambdaSEXP, SEXP probsSEXP, SEXP nikSEXP, SEXP NikSEXP, SEXP guessSEXP, SEXP probs0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type XdesM(XdesMSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dimXdes(dimXdesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Xlambda(XlambdaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nik(nikSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Nik(NikSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type guess(guessSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type probs0(probs0SEXP);
    rcpp_result_gen = Rcpp::wrap(tam_mml_3pl_slca_deriv(XdesM, dimXdes, Xlambda, probs, nik, Nik, guess, probs0));
    return rcpp_result_gen;
END_RCPP
}
// tam_mml_3pl_calcexp
Rcpp::List tam_mml_3pl_calcexp(int NP, Rcpp::NumericMatrix rprobs, Rcpp::NumericMatrix A, Rcpp::NumericMatrix INDEXIPNO, Rcpp::NumericVector INDEXIPLIST2, Rcpp::NumericVector ESTXSIINDEX, int C, Rcpp::NumericMatrix ITEMWT, Rcpp::NumericMatrix rprobs0, Rcpp::NumericVector GUESS, Rcpp::NumericVector nik, Rcpp::NumericVector ni);
RcppExport SEXP _TAM_tam_mml_3pl_calcexp(SEXP NPSEXP, SEXP rprobsSEXP, SEXP ASEXP, SEXP INDEXIPNOSEXP, SEXP INDEXIPLIST2SEXP, SEXP ESTXSIINDEXSEXP, SEXP CSEXP, SEXP ITEMWTSEXP, SEXP rprobs0SEXP, SEXP GUESSSEXP, SEXP nikSEXP, SEXP niSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type NP(NPSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type rprobs(rprobsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type INDEXIPNO(INDEXIPNOSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type INDEXIPLIST2(INDEXIPLIST2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ESTXSIINDEX(ESTXSIINDEXSEXP);
    Rcpp::traits::input_parameter< int >::type C(CSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type ITEMWT(ITEMWTSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type rprobs0(rprobs0SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type GUESS(GUESSSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nik(nikSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ni(niSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_mml_3pl_calcexp(NP, rprobs, A, INDEXIPNO, INDEXIPLIST2, ESTXSIINDEX, C, ITEMWT, rprobs0, GUESS, nik, ni));
    return rcpp_result_gen;
END_RCPP
}
// tam_mml_3pl_compute_B_rcpp
Rcpp::List tam_mml_3pl_compute_B_rcpp(Rcpp::NumericMatrix Edes, Rcpp::NumericVector gammaslope, Rcpp::NumericVector dimE);
RcppExport SEXP _TAM_tam_mml_3pl_compute_B_rcpp(SEXP EdesSEXP, SEXP gammaslopeSEXP, SEXP dimESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Edes(EdesSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type gammaslope(gammaslopeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dimE(dimESEXP);
    rcpp_result_gen = Rcpp::wrap(tam_mml_3pl_compute_B_rcpp(Edes, gammaslope, dimE));
    return rcpp_result_gen;
END_RCPP
}
// tam_mml_3pl_nonzero_entries
Rcpp::List tam_mml_3pl_nonzero_entries(Rcpp::NumericVector E, Rcpp::NumericVector dimE);
RcppExport SEXP _TAM_tam_mml_3pl_nonzero_entries(SEXP ESEXP, SEXP dimESEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type E(ESEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dimE(dimESEXP);
    rcpp_result_gen = Rcpp::wrap(tam_mml_3pl_nonzero_entries(E, dimE));
    return rcpp_result_gen;
END_RCPP
}
// gresp_extend
Rcpp::NumericMatrix gresp_extend(Rcpp::NumericMatrix gresp, Rcpp::NumericVector xstep);
RcppExport SEXP _TAM_gresp_extend(SEXP grespSEXP, SEXP xstepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type gresp(grespSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type xstep(xstepSEXP);
    rcpp_result_gen = Rcpp::wrap(gresp_extend(gresp, xstep));
    return rcpp_result_gen;
END_RCPP
}
// gresp_na_facets
Rcpp::NumericMatrix gresp_na_facets(Rcpp::NumericMatrix gresp, Rcpp::CharacterVector rnfacets, Rcpp::CharacterVector rnx);
RcppExport SEXP _TAM_gresp_na_facets(SEXP grespSEXP, SEXP rnfacetsSEXP, SEXP rnxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type gresp(grespSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type rnfacets(rnfacetsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type rnx(rnxSEXP);
    rcpp_result_gen = Rcpp::wrap(gresp_na_facets(gresp, rnfacets, rnx));
    return rcpp_result_gen;
END_RCPP
}
// a_matrix_cumsum
Rcpp::List a_matrix_cumsum(Rcpp::NumericMatrix index_matr, Rcpp::NumericMatrix mm, int SG);
RcppExport SEXP _TAM_a_matrix_cumsum(SEXP index_matrSEXP, SEXP mmSEXP, SEXP SGSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type index_matr(index_matrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mm(mmSEXP);
    Rcpp::traits::input_parameter< int >::type SG(SGSEXP);
    rcpp_result_gen = Rcpp::wrap(a_matrix_cumsum(index_matr, mm, SG));
    return rcpp_result_gen;
END_RCPP
}
// colsums_gresp
Rcpp::NumericVector colsums_gresp(Rcpp::NumericMatrix gresp);
RcppExport SEXP _TAM_colsums_gresp(SEXP grespSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type gresp(grespSEXP);
    rcpp_result_gen = Rcpp::wrap(colsums_gresp(gresp));
    return rcpp_result_gen;
END_RCPP
}
// tam_q3_calc_V2q3jack
Rcpp::List tam_q3_calc_V2q3jack(Rcpp::NumericMatrix residM, Rcpp::NumericMatrix resp_ind);
RcppExport SEXP _TAM_tam_q3_calc_V2q3jack(SEXP residMSEXP, SEXP resp_indSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type residM(residMSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type resp_ind(resp_indSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_q3_calc_V2q3jack(residM, resp_ind));
    return rcpp_result_gen;
END_RCPP
}
// tam_q3_calc_V2counts
Rcpp::List tam_q3_calc_V2counts(Rcpp::NumericMatrix resp0, Rcpp::NumericMatrix resp_ind, Rcpp::NumericVector rprobs, Rcpp::NumericMatrix hwt, Rcpp::NumericVector maxKi, int maxK);
RcppExport SEXP _TAM_tam_q3_calc_V2counts(SEXP resp0SEXP, SEXP resp_indSEXP, SEXP rprobsSEXP, SEXP hwtSEXP, SEXP maxKiSEXP, SEXP maxKSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type resp0(resp0SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type resp_ind(resp_indSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rprobs(rprobsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type hwt(hwtSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxKi(maxKiSEXP);
    Rcpp::traits::input_parameter< int >::type maxK(maxKSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_q3_calc_V2counts(resp0, resp_ind, rprobs, hwt, maxKi, maxK));
    return rcpp_result_gen;
END_RCPP
}
// tam_calccov
Rcpp::List tam_calccov(Rcpp::NumericMatrix counts, Rcpp::NumericMatrix scorematrix, Rcpp::NumericVector adjust);
RcppExport SEXP _TAM_tam_calccov(SEXP countsSEXP, SEXP scorematrixSEXP, SEXP adjustSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type scorematrix(scorematrixSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type adjust(adjustSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_calccov(counts, scorematrix, adjust));
    return rcpp_result_gen;
END_RCPP
}
// tam_q3_calc_residM
Rcpp::List tam_q3_calc_residM(Rcpp::NumericVector rprobs, Rcpp::NumericMatrix resp, int I, int TP, int maxK, Rcpp::NumericVector maxKi, Rcpp::NumericMatrix hwt);
RcppExport SEXP _TAM_tam_q3_calc_residM(SEXP rprobsSEXP, SEXP respSEXP, SEXP ISEXP, SEXP TPSEXP, SEXP maxKSEXP, SEXP maxKiSEXP, SEXP hwtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rprobs(rprobsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type resp(respSEXP);
    Rcpp::traits::input_parameter< int >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type TP(TPSEXP);
    Rcpp::traits::input_parameter< int >::type maxK(maxKSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type maxKi(maxKiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type hwt(hwtSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_q3_calc_residM(rprobs, resp, I, TP, maxK, maxKi, hwt));
    return rcpp_result_gen;
END_RCPP
}
// msq_itemfit
Rcpp::List msq_itemfit(Rcpp::NumericMatrix resp, Rcpp::NumericVector irf1, int K, int TP, Rcpp::NumericMatrix post1, Rcpp::NumericMatrix FIT, Rcpp::NumericMatrix fitIndexM);
RcppExport SEXP _TAM_msq_itemfit(SEXP respSEXP, SEXP irf1SEXP, SEXP KSEXP, SEXP TPSEXP, SEXP post1SEXP, SEXP FITSEXP, SEXP fitIndexMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type resp(respSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type irf1(irf1SEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type TP(TPSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type post1(post1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type FIT(FITSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type fitIndexM(fitIndexMSEXP);
    rcpp_result_gen = Rcpp::wrap(msq_itemfit(resp, irf1, K, TP, post1, FIT, fitIndexM));
    return rcpp_result_gen;
END_RCPP
}
// msq_itemfit2
Rcpp::List msq_itemfit2(Rcpp::NumericMatrix resp, Rcpp::NumericVector irf1, int K, int TP, Rcpp::NumericMatrix post1, Rcpp::NumericMatrix FIT, Rcpp::NumericMatrix fitIndexM);
RcppExport SEXP _TAM_msq_itemfit2(SEXP respSEXP, SEXP irf1SEXP, SEXP KSEXP, SEXP TPSEXP, SEXP post1SEXP, SEXP FITSEXP, SEXP fitIndexMSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type resp(respSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type irf1(irf1SEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type TP(TPSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type post1(post1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type FIT(FITSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type fitIndexM(fitIndexMSEXP);
    rcpp_result_gen = Rcpp::wrap(msq_itemfit2(resp, irf1, K, TP, post1, FIT, fitIndexM));
    return rcpp_result_gen;
END_RCPP
}
// tam_pv_mcmc_calc_probs_irf_3pl_rcpp
Rcpp::List tam_pv_mcmc_calc_probs_irf_3pl_rcpp(Rcpp::NumericMatrix theta, Rcpp::NumericVector B, int I, int maxK, Rcpp::IntegerMatrix resp_ind, Rcpp::NumericMatrix AXsi);
RcppExport SEXP _TAM_tam_pv_mcmc_calc_probs_irf_3pl_rcpp(SEXP thetaSEXP, SEXP BSEXP, SEXP ISEXP, SEXP maxKSEXP, SEXP resp_indSEXP, SEXP AXsiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type B(BSEXP);
    Rcpp::traits::input_parameter< int >::type I(ISEXP);
    Rcpp::traits::input_parameter< int >::type maxK(maxKSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type resp_ind(resp_indSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type AXsi(AXsiSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_pv_mcmc_calc_probs_irf_3pl_rcpp(theta, B, I, maxK, resp_ind, AXsi));
    return rcpp_result_gen;
END_RCPP
}
// tam_pv_mcmc_likelihood_Rcpp
Rcpp::NumericVector tam_pv_mcmc_likelihood_Rcpp(Rcpp::NumericMatrix probs, Rcpp::NumericMatrix resp, Rcpp::LogicalMatrix resp_ind_bool, int maxK, int nstud, int nitems);
RcppExport SEXP _TAM_tam_pv_mcmc_likelihood_Rcpp(SEXP probsSEXP, SEXP respSEXP, SEXP resp_ind_boolSEXP, SEXP maxKSEXP, SEXP nstudSEXP, SEXP nitemsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type resp(respSEXP);
    Rcpp::traits::input_parameter< Rcpp::LogicalMatrix >::type resp_ind_bool(resp_ind_boolSEXP);
    Rcpp::traits::input_parameter< int >::type maxK(maxKSEXP);
    Rcpp::traits::input_parameter< int >::type nstud(nstudSEXP);
    Rcpp::traits::input_parameter< int >::type nitems(nitemsSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_pv_mcmc_likelihood_Rcpp(probs, resp, resp_ind_bool, maxK, nstud, nitems));
    return rcpp_result_gen;
END_RCPP
}
// tam_mvrnorm_rcpp
Rcpp::NumericMatrix tam_mvrnorm_rcpp(int n, Rcpp::NumericVector mu, Rcpp::NumericMatrix sigma);
RcppExport SEXP _TAM_tam_mvrnorm_rcpp(SEXP nSEXP, SEXP muSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_mvrnorm_rcpp(n, mu, sigma));
    return rcpp_result_gen;
END_RCPP
}
// tam_pv_weighted_mean
Rcpp::NumericVector tam_pv_weighted_mean(Rcpp::NumericMatrix theta, Rcpp::NumericVector wgt);
RcppExport SEXP _TAM_tam_pv_weighted_mean(SEXP thetaSEXP, SEXP wgtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type wgt(wgtSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_pv_weighted_mean(theta, wgt));
    return rcpp_result_gen;
END_RCPP
}
// tam_pv_weighted_cov
Rcpp::List tam_pv_weighted_cov(Rcpp::NumericMatrix theta, Rcpp::NumericVector wgt);
RcppExport SEXP _TAM_tam_pv_weighted_cov(SEXP thetaSEXP, SEXP wgtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type wgt(wgtSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_pv_weighted_cov(theta, wgt));
    return rcpp_result_gen;
END_RCPP
}
// tam_pv_sample_theta_multidim
Rcpp::NumericMatrix tam_pv_sample_theta_multidim(Rcpp::NumericMatrix post, Rcpp::NumericMatrix theta);
RcppExport SEXP _TAM_tam_pv_sample_theta_multidim(SEXP postSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type post(postSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_pv_sample_theta_multidim(post, theta));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_calcexp
Rcpp::List tam_rcpp_calcexp(int NP, Rcpp::NumericMatrix rprobs, Rcpp::NumericMatrix A, Rcpp::NumericMatrix INDEXIPNO, Rcpp::NumericVector INDEXIPLIST2, Rcpp::NumericVector ESTXSIINDEX, int C, Rcpp::NumericMatrix ITEMWT);
RcppExport SEXP _TAM_tam_rcpp_calcexp(SEXP NPSEXP, SEXP rprobsSEXP, SEXP ASEXP, SEXP INDEXIPNOSEXP, SEXP INDEXIPLIST2SEXP, SEXP ESTXSIINDEXSEXP, SEXP CSEXP, SEXP ITEMWTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type NP(NPSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type rprobs(rprobsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type INDEXIPNO(INDEXIPNOSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type INDEXIPLIST2(INDEXIPLIST2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ESTXSIINDEX(ESTXSIINDEXSEXP);
    Rcpp::traits::input_parameter< int >::type C(CSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type ITEMWT(ITEMWTSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_calcexp(NP, rprobs, A, INDEXIPNO, INDEXIPLIST2, ESTXSIINDEX, C, ITEMWT));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_calcexp2
Rcpp::List tam_rcpp_calcexp2(int NP, Rcpp::NumericVector rprobs, Rcpp::NumericVector A, Rcpp::NumericMatrix INDEXIPNO, Rcpp::NumericVector INDEXIPLIST2, Rcpp::NumericVector ESTXSIINDEX, int C, Rcpp::NumericMatrix ITEMWT, int NR, int TP);
RcppExport SEXP _TAM_tam_rcpp_calcexp2(SEXP NPSEXP, SEXP rprobsSEXP, SEXP ASEXP, SEXP INDEXIPNOSEXP, SEXP INDEXIPLIST2SEXP, SEXP ESTXSIINDEXSEXP, SEXP CSEXP, SEXP ITEMWTSEXP, SEXP NRSEXP, SEXP TPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type NP(NPSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rprobs(rprobsSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type A(ASEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type INDEXIPNO(INDEXIPNOSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type INDEXIPLIST2(INDEXIPLIST2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type ESTXSIINDEX(ESTXSIINDEXSEXP);
    Rcpp::traits::input_parameter< int >::type C(CSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type ITEMWT(ITEMWTSEXP);
    Rcpp::traits::input_parameter< int >::type NR(NRSEXP);
    Rcpp::traits::input_parameter< int >::type TP(TPSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_calcexp2(NP, rprobs, A, INDEXIPNO, INDEXIPLIST2, ESTXSIINDEX, C, ITEMWT, NR, TP));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_calc_exp_redefine_vector_na
Rcpp::NumericVector tam_rcpp_calc_exp_redefine_vector_na(Rcpp::NumericVector A, double val);
RcppExport SEXP _TAM_tam_rcpp_calc_exp_redefine_vector_na(SEXP ASEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type val(valSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_calc_exp_redefine_vector_na(A, val));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_calc_prob_subtract_max
Rcpp::NumericMatrix tam_rcpp_calc_prob_subtract_max(Rcpp::NumericMatrix rr0M, int NI, int NK, int TP);
RcppExport SEXP _TAM_tam_rcpp_calc_prob_subtract_max(SEXP rr0MSEXP, SEXP NISEXP, SEXP NKSEXP, SEXP TPSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type rr0M(rr0MSEXP);
    Rcpp::traits::input_parameter< int >::type NI(NISEXP);
    Rcpp::traits::input_parameter< int >::type NK(NKSEXP);
    Rcpp::traits::input_parameter< int >::type TP(TPSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_calc_prob_subtract_max(rr0M, NI, NK, TP));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_ctt2
Rcpp::List tam_rcpp_ctt2(Rcpp::CharacterMatrix TDAT, Rcpp::NumericVector WLE, Rcpp::NumericVector MAXK, int EST_WLE, Rcpp::NumericVector prg);
RcppExport SEXP _TAM_tam_rcpp_ctt2(SEXP TDATSEXP, SEXP WLESEXP, SEXP MAXKSEXP, SEXP EST_WLESEXP, SEXP prgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterMatrix >::type TDAT(TDATSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type WLE(WLESEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type MAXK(MAXKSEXP);
    Rcpp::traits::input_parameter< int >::type EST_WLE(EST_WLESEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type prg(prgSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_ctt2(TDAT, WLE, MAXK, EST_WLE, prg));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_ctt3
Rcpp::List tam_rcpp_ctt3(Rcpp::CharacterMatrix TDAT, Rcpp::NumericVector WLE, Rcpp::NumericVector MAXK, int EST_WLE, Rcpp::NumericVector prg);
RcppExport SEXP _TAM_tam_rcpp_ctt3(SEXP TDATSEXP, SEXP WLESEXP, SEXP MAXKSEXP, SEXP EST_WLESEXP, SEXP prgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterMatrix >::type TDAT(TDATSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type WLE(WLESEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type MAXK(MAXKSEXP);
    Rcpp::traits::input_parameter< int >::type EST_WLE(EST_WLESEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type prg(prgSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_ctt3(TDAT, WLE, MAXK, EST_WLE, prg));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_fit_simul
Rcpp::List tam_rcpp_fit_simul(Rcpp::NumericMatrix rn1M, Rcpp::NumericMatrix c_hwt, Rcpp::NumericMatrix Ax, Rcpp::NumericMatrix xbar, Rcpp::NumericMatrix var1, Rcpp::NumericMatrix Uz2, Rcpp::NumericMatrix Vz2, Rcpp::NumericVector nstud_ip, Rcpp::NumericVector pweights);
RcppExport SEXP _TAM_tam_rcpp_fit_simul(SEXP rn1MSEXP, SEXP c_hwtSEXP, SEXP AxSEXP, SEXP xbarSEXP, SEXP var1SEXP, SEXP Uz2SEXP, SEXP Vz2SEXP, SEXP nstud_ipSEXP, SEXP pweightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type rn1M(rn1MSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type c_hwt(c_hwtSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Ax(AxSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type xbar(xbarSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type var1(var1SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Uz2(Uz2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Vz2(Vz2SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nstud_ip(nstud_ipSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type pweights(pweightsSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_fit_simul(rn1M, c_hwt, Ax, xbar, var1, Uz2, Vz2, nstud_ip, pweights));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_theta_sq
Rcpp::NumericMatrix tam_rcpp_theta_sq(Rcpp::NumericMatrix theta);
RcppExport SEXP _TAM_tam_rcpp_theta_sq(SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_theta_sq(theta));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_interval_index
Rcpp::NumericVector tam_rcpp_interval_index(Rcpp::NumericMatrix MATR, Rcpp::NumericVector RN);
RcppExport SEXP _TAM_tam_rcpp_interval_index(SEXP MATRSEXP, SEXP RNSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type MATR(MATRSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type RN(RNSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_interval_index(MATR, RN));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_irt_likelihood_cfa
Rcpp::List tam_rcpp_irt_likelihood_cfa(Rcpp::NumericMatrix data, Rcpp::NumericVector nu, Rcpp::NumericMatrix psi, Rcpp::NumericMatrix L, Rcpp::NumericMatrix theta);
RcppExport SEXP _TAM_tam_rcpp_irt_likelihood_cfa(SEXP dataSEXP, SEXP nuSEXP, SEXP psiSEXP, SEXP LSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type data(dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type L(LSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_irt_likelihood_cfa(data, nu, psi, L, theta));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_prior_normal_density_unequal_means
Rcpp::NumericMatrix tam_rcpp_prior_normal_density_unequal_means(Rcpp::NumericMatrix theta, Rcpp::NumericMatrix mu, Rcpp::NumericMatrix varInverse, Rcpp::NumericVector COEFF);
RcppExport SEXP _TAM_tam_rcpp_prior_normal_density_unequal_means(SEXP thetaSEXP, SEXP muSEXP, SEXP varInverseSEXP, SEXP COEFFSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type varInverse(varInverseSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type COEFF(COEFFSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_prior_normal_density_unequal_means(theta, mu, varInverse, COEFF));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_prior_normal_density_equal_means
Rcpp::NumericVector tam_rcpp_prior_normal_density_equal_means(Rcpp::NumericMatrix theta, Rcpp::NumericMatrix mu, Rcpp::NumericMatrix varInverse, Rcpp::NumericVector COEFF);
RcppExport SEXP _TAM_tam_rcpp_prior_normal_density_equal_means(SEXP thetaSEXP, SEXP muSEXP, SEXP varInverseSEXP, SEXP COEFFSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type mu(muSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type varInverse(varInverseSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type COEFF(COEFFSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_prior_normal_density_equal_means(theta, mu, varInverse, COEFF));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_rowCumsums
Rcpp::NumericMatrix tam_rcpp_rowCumsums(Rcpp::NumericMatrix input);
RcppExport SEXP _TAM_tam_rcpp_rowCumsums(SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_rowCumsums(input));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_wle_Bs
Rcpp::List tam_rcpp_wle_Bs(Rcpp::NumericMatrix RPROBS, Rcpp::NumericMatrix RESPIND, Rcpp::NumericMatrix CBL, Rcpp::NumericMatrix CBB, Rcpp::NumericMatrix CBBB, int cndim, int cnitems, int cmaxK, int cnstud);
RcppExport SEXP _TAM_tam_rcpp_wle_Bs(SEXP RPROBSSEXP, SEXP RESPINDSEXP, SEXP CBLSEXP, SEXP CBBSEXP, SEXP CBBBSEXP, SEXP cndimSEXP, SEXP cnitemsSEXP, SEXP cmaxKSEXP, SEXP cnstudSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type RPROBS(RPROBSSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type RESPIND(RESPINDSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type CBL(CBLSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type CBB(CBBSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type CBBB(CBBBSEXP);
    Rcpp::traits::input_parameter< int >::type cndim(cndimSEXP);
    Rcpp::traits::input_parameter< int >::type cnitems(cnitemsSEXP);
    Rcpp::traits::input_parameter< int >::type cmaxK(cmaxKSEXP);
    Rcpp::traits::input_parameter< int >::type cnstud(cnstudSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_wle_Bs(RPROBS, RESPIND, CBL, CBB, CBBB, cndim, cnitems, cmaxK, cnstud));
    return rcpp_result_gen;
END_RCPP
}
// tam_rcpp_wle_errinv
Rcpp::NumericMatrix tam_rcpp_wle_errinv(Rcpp::NumericMatrix myERR, int cndim, int cnstud);
RcppExport SEXP _TAM_tam_rcpp_wle_errinv(SEXP myERRSEXP, SEXP cndimSEXP, SEXP cnstudSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type myERR(myERRSEXP);
    Rcpp::traits::input_parameter< int >::type cndim(cndimSEXP);
    Rcpp::traits::input_parameter< int >::type cnstud(cnstudSEXP);
    rcpp_result_gen = Rcpp::wrap(tam_rcpp_wle_errinv(myERR, cndim, cnstud));
    return rcpp_result_gen;
END_RCPP
}

