#include <iostream>

using namespace std;

int main() {
  bool sat = false;
  for (int p = 0; p <= 1; p++) {
    for (int q = 0; q <= 1; q++) {
      if ((p || q) && (!p || !q)) {
        sat = true;
        cout << "Satisfiable for p = " << p << ", q = " << q << "\n";
      }
    }
  }

  if (!sat) {
    cout << "Unsatisfiable.\n";
  }

  return 0;
}
