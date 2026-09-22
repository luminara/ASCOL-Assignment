#include <iostream>

using namespace std;

int main() {
  cout << "p\tq\t((p AND (p->q)) -> q)\n";
  int pValues[] = {1, 1, 0, 0};
  int qValues[] = {1, 0, 1, 0};

  bool tautology = true;
  for (int i = 0; i < 4; i++) {
    int p = pValues[i];
    int q = qValues[i];
    int impl = (!p) || q;
    int lhs = p && impl;
    int result = (!lhs) || q;
    if (!result)
      tautology = false;
    cout << p << "\t" << q << "\t" << result << "\n";
  }

  if (tautology) {
    cout << "Modus Ponens is a Tautology.\n";
  }

  return 0;
}
