#include <iostream>

using namespace std;

int fact(int n) {
  int f = 1;
  for (int i = 1; i <= n; i++) f *= i;
  return f;
}

int main() {
  int n, r;
  cout << "Enter n and r: ";
  cin >> n >> r;

  int p = fact(n) / fact(n - r);
  int c = fact(n) / (fact(r) * fact(n - r));

  cout << "P(" << n << "," << r << ") = " << p << "\n";
  cout << "C(" << n << "," << r << ") = " << c << "\n";

  return 0;
}
