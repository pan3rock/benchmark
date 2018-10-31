#define ARMA_NO_DEBUG
#define ARMA_DONT_USE_WRAPPER
#define ARMA_USE_LAPACK
#define ARMA_USE_BLAS
#include "timer.hpp"

#include <armadillo>
#include <iostream>
using namespace arma;

int main(int argc, char* argv[])
{
  int size = 4;
  int niter = 1000;
  Timer::begin("arma_opt2");
  for (int i=0; i<niter; ++i) {
    cx_mat a = {{1., 2., 3., 4.},
                {2., 3., 1., 5.},
                {3., 4., 5., 1.},
                {4., 5., 6., 1.}};
    cx_mat b(size, size, fill::randu);
    cx_mat c = inv(a) * b * b + b;
  }
  Timer::end("arma_opt2");
  std::cout << Timer::summery() << std::endl;
  return 0;
}
