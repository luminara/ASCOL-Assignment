#include <iostream>

using namespace std;

int main() {
  int b, n, m;
  cout << "Enter base b, exponent n, modulus m: ";
  cin >> b >> n >> m;

  int res = 1;
  int base = b % m;
  int exp = n;

  while (exp > 0) {
    if (exp % 2 == 1) {
      res = (res * base) % m;
    }
    base = (base * base) % m;
    exp /= 2;
  }

  cout << b << "^" << n << " mod " << m << " = " << res << "\n";

  return 0;
}
