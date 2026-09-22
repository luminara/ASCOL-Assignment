#include <iostream>

using namespace std;

int main() {
  int n, k;
  cout << "Enter number of items (n): ";
  cin >> n;
  cout << "Enter number of boxes (k): ";
  cin >> k;

  int result = (n + k - 1) / k;
  cout << "At least one box contains at least " << result << " items.\n";

  return 0;
}
