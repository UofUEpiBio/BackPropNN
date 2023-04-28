// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ReLU_rcpp
arma::mat ReLU_rcpp(const arma::mat a);
RcppExport SEXP _BackPropNN_ReLU_rcpp(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(ReLU_rcpp(a));
    return rcpp_result_gen;
END_RCPP
}
// back_propagation_training_rcpp
List back_propagation_training_rcpp(int i, int h, int o, double learning_rate, std::string activation_func, arma::mat data);
RcppExport SEXP _BackPropNN_back_propagation_training_rcpp(SEXP iSEXP, SEXP hSEXP, SEXP oSEXP, SEXP learning_rateSEXP, SEXP activation_funcSEXP, SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type o(oSEXP);
    Rcpp::traits::input_parameter< double >::type learning_rate(learning_rateSEXP);
    Rcpp::traits::input_parameter< std::string >::type activation_func(activation_funcSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(back_propagation_training_rcpp(i, h, o, learning_rate, activation_func, data));
    return rcpp_result_gen;
END_RCPP
}
// derivative_ReLU_rcpp
arma::mat derivative_ReLU_rcpp(arma::mat a);
RcppExport SEXP _BackPropNN_derivative_ReLU_rcpp(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(derivative_ReLU_rcpp(a));
    return rcpp_result_gen;
END_RCPP
}
// derivative_sigmoid_rcpp
arma::mat derivative_sigmoid_rcpp(const arma::mat a);
RcppExport SEXP _BackPropNN_derivative_sigmoid_rcpp(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(derivative_sigmoid_rcpp(a));
    return rcpp_result_gen;
END_RCPP
}
// feed_forward_rcpp
arma::vec feed_forward_rcpp(Rcpp::DataFrame data, List nn_model);
RcppExport SEXP _BackPropNN_feed_forward_rcpp(SEXP dataSEXP, SEXP nn_modelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< List >::type nn_model(nn_modelSEXP);
    rcpp_result_gen = Rcpp::wrap(feed_forward_rcpp(data, nn_model));
    return rcpp_result_gen;
END_RCPP
}
// sigmoid_rcpp
arma::mat sigmoid_rcpp(const arma::mat a);
RcppExport SEXP _BackPropNN_sigmoid_rcpp(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(sigmoid_rcpp(a));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BackPropNN_ReLU_rcpp", (DL_FUNC) &_BackPropNN_ReLU_rcpp, 1},
    {"_BackPropNN_back_propagation_training_rcpp", (DL_FUNC) &_BackPropNN_back_propagation_training_rcpp, 6},
    {"_BackPropNN_derivative_ReLU_rcpp", (DL_FUNC) &_BackPropNN_derivative_ReLU_rcpp, 1},
    {"_BackPropNN_derivative_sigmoid_rcpp", (DL_FUNC) &_BackPropNN_derivative_sigmoid_rcpp, 1},
    {"_BackPropNN_feed_forward_rcpp", (DL_FUNC) &_BackPropNN_feed_forward_rcpp, 2},
    {"_BackPropNN_sigmoid_rcpp", (DL_FUNC) &_BackPropNN_sigmoid_rcpp, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_BackPropNN(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
