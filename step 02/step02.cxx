#include <iostream>

#include "config.h"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#else
#include <cmath>
#endif

using namespace std;

int main(int argc, char const *argv[]) {
  cout << "this is step02";
  cout << "\t--Version: " << VERSION_MAJOR << "." << VERSION_MINOR
       << endl;

  cout << "to compute pow(x, n), please input x and n: ";
  int x, n;
  cin >> x >> n;
#ifdef USE_MYMATH
  cout << "using MYMATH, pow(x, n): " << fastpow(x, n) << endl;
#else
  cout << "using cmath, pow(x, n): " << pow(x, n) << endl;
#endif
  return 0;
}
