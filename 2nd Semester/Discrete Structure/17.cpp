#include <iostream>

using namespace std;

int main() {
  cout << "Truth Table for (p AND q) OR (NOT p AND r):\n";
  cout << "p\tq\tr\tResult\n";

  for (int p = 1; p >= 0; p--) {
    for (int q = 1; q >= 0; q--) {
      for (int r = 1; r >= 0; r--) {
        int res = (p && q) || ((!p) && r);
        cout << p << "\t" << q << "\t" << r << "\t" << res << "\n";
      }
    }
  }

  return 0;
}
