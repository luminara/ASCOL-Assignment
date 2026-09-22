#include <iostream>

using namespace std;

int main() {
  cout << "p\tq\tImplication\tBi-implication\n";
  int pValues[] = {1, 1, 0, 0};
  int qValues[] = {1, 0, 1, 0};

  for (int i = 0; i < 4; i++) {
    int p = pValues[i];
    int q = qValues[i];
    int impl = (!p) || q;
    int biimpl = (p == q);
    cout << p << "\t" << q << "\t" << impl << "\t\t" << biimpl << "\n";
  }

  return 0;
}
