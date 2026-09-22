#include <iostream>

using namespace std;

int main() {
  int n1, n2;
  int a[100], b[100];

  cout << "Enter size of set A: ";
  cin >> n1;
  cout << "Enter elements of set A: ";
  for (int i = 0; i < n1; i++) {
    cin >> a[i];
  }

  cout << "Enter size of set B: ";
  cin >> n2;
  cout << "Enter elements of set B: ";
  for (int i = 0; i < n2; i++) {
    cin >> b[i];
  }

  cout << "A x B = { ";
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      cout << "(" << a[i] << ", " << b[j] << ") ";
    }
  }
  cout << "}\n";

  return 0;
}
