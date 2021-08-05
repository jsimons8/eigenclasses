//  MatrixAttempt.hpp

#ifndef MatrixAttempt_hpp
#define MatrixAttempt_hpp



#include <RcppEigen.h>

// via the depends attribute we tell Rcpp to create hooks for
// RcppEigen so that the build process will know what to do
//
// [[Rcpp::depends(RcppEigen)]]

class MatrixAttempt
{
public:
  
  // Constructor
  MatrixAttempt();
  
  // Methods
  Eigen::MatrixXd GetIdentity();
  
};

#endif /* MatrixAttempt */