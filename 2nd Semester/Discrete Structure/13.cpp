#include <iostream>

using namespace std;

int main() {
  cout << "p\tq\tAND\tOR\n";
  int pValues[] = {1, 1, 0, 0};
  int qValues[] = {1, 0, 1, 0};

  for (int i = 0; i < 4; i++) {
    int p = pValues[i];
    int q = qValues[i];
    cout << p << "\t" << q << "\t" << (p && q) << "\t" << (p || q) << "\n";
  }

  return 0;
}
