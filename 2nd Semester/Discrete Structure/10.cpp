#include <iostream>

using namespace std;

int main() {
  int b, m;
  cout << "Enter b and m: ";
  cin >> b >> m;

  int inv = -1;
  for (int x = 1; x < m; x++) {
    if ((b * x) % m == 1) {
      inv = x;
      break;
    }
  }

  if (inv != -1) {
    cout << "Inverse of " << b << " mod " << m << " is: " << inv << "\n";
  } else {
    cout << "Inverse does not exist.\n";
  }

  return 0;
}
