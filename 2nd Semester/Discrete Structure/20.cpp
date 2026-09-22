#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  if (n <= 1) {
    cout << "Neither prime nor composite.\n";
    return 0;
  }

  int temp = n;
  int factors[100];
  int factorCount = 0;

  for (int d = 2; d * d <= temp; d++) {
    while (temp % d == 0) {
      factors[factorCount++] = d;
      temp /= d;
    }
  }
  if (temp > 1) {
    factors[factorCount++] = temp;
  }

  if (factorCount == 1) {
    cout << n << " is a prime number.\n";
  } else {
    cout << n << " is a product of primes: ";
    for (int i = 0; i < factorCount; i++) {
      cout << factors[i] << (i == factorCount - 1 ? "\n" : " * ");
    }
  }

  return 0;
}
