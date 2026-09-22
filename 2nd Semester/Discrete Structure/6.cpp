// Special sequence: 7, 22, 11, 34, 17……8, 4, 2, 1 etc
#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Enter starting number (e.g. 7): ";
  cin >> n;

  while (n != 1) {
    cout << n << " ";
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
  }
  cout << 1 << "\n";

  return 0;
}
