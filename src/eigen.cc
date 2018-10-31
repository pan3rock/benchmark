#include "timer.hpp"

#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;

int main(int argc, char* argv[])
{
  int size = 4;
  int niter = 1000;
  Timer::begin("eigen");
  for (int i=0; i<niter; ++i) {
    MatrixXcd a(size, size);
    a <<
      1., 2., 3., 4.,
      2., 3., 1., 5.,
      3., 4., 5., 1.,
      4., 5., 6., 1.;

    MatrixXcd b = MatrixXcd::Random(size, size);
    MatrixXcd c = a.inverse() * b * b + b;
  }
  Timer::end("eigen");
  std::cout << Timer::summery() << std::endl;
  return 0;
}
