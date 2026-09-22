#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;

  int val = 1;
  while (true) {
    int temp = val;
    int num = 0;
    int base = 1;
    while (temp > 0) {
      num += (temp % 2) * base;
      temp /= 2;
      base *= 10;
    }

    if (num % n == 0) {
      cout << "Multiple of " << n << " containing only 0s and 1s is: " << num << "\n";
      break;
    }
    val++;
  }

  return 0;
}
