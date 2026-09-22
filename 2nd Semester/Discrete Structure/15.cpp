#include <iostream>

using namespace std;

int main() {
  cout << "p\tq\t!(p&&q)\t!p||!q\t!(p||q)\t!p&&!q\n";
  int pValues[] = {1, 1, 0, 0};
  int qValues[] = {1, 0, 1, 0};

  for (int i = 0; i < 4; i++) {
    int p = pValues[i];
    int q = qValues[i];
    int lhs1 = !(p && q);
    int rhs1 = (!p) || (!q);
    int lhs2 = !(p || q);
    int rhs2 = (!p) && (!q);
    cout << p << "\t" << q << "\t" << lhs1 << "\t" << rhs1 << "\t" << lhs2
      << "\t" << rhs2 << "\n";
  }

  return 0;
}
