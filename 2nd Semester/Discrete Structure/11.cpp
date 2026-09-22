#include <iostream>

using namespace std;

int powerMod(int base, int exp, int mod) {
  int res = 1;
  base %= mod;
  while (exp > 0) {
    if (exp % 2 == 1) res = (res * base) % mod;
    base = (base * base) % mod;
    exp /= 2;
  }
  return res;
}

int main() {
  int a, p;
  cout << "Enter a and prime p: ";
  cin >> a >> p;

  int ans = powerMod(a, p - 1, p);
  cout << a << "^(" << p << "-1) mod " << p << " = " << ans << "\n";

  if (ans == 1) {
    cout << "Fermat's Little Theorem verified.\n";
  }

  return 0;
}
