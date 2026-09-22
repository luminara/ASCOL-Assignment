#include <iostream>

using namespace std;

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  int gcd = 1;
  int divisor = 2;
  int tempA = a, tempB = b;

  while (divisor <= tempA && divisor <= tempB) {
    if (tempA % divisor == 0 && tempB % divisor == 0) {
      gcd *= divisor;
      tempA /= divisor;
      tempB /= divisor;
    } else {
      divisor++;
    }
  }

  cout << "GCD of " << a << " and " << b << " is: " << gcd << "\n";

  return 0;
}
