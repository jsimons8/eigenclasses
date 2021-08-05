
#include "MatrixAttempt.hpp"


// Constructor
MatrixAttempt::MatrixAttempt() {}



Eigen::MatrixXd MatrixAttempt::GetIdentity(){
  return(Eigen::MatrixXd::Identity(2,2));
}