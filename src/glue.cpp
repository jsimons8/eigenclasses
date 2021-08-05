// glue.cpp
// To use c++11, first run: Sys.setenv("PKG_CXXFLAGS"="-std=c++11")  ...or use a Makevars file

#include <Rcpp.h>
#include "MatrixAttempt.hpp"
using namespace Rcpp;





// Expose (some of) the MatrixAttempt class
RCPP_MODULE(MatrixAttempt){
  class_<MatrixAttempt>("MatrixAttempt")
  .method("GetIdentity",&MatrixAttempt::GetIdentity);
}