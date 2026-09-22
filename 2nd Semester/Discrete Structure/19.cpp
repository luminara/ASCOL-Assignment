#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  int formulaSum = n * (n + 1) / 2;

  cout << "Sum by loop: " << sum << "\n";
  cout << "Sum by formula: " << formulaSum << "\n";

  if (sum == formulaSum) {
    cout << "Verified!\n";
  }

  return 0;
}
