#include <iostream>

using namespace std;

int main() {
  int n1, n2;
  cout << "Enter size of set A: ";
  cin >> n1;
  int a[100];
  cout << "Enter elements of set A: ";
  for (int i = 0; i < n1; i++) {
    cin >> a[i];
  }

  cout << "Enter size of set B: ";
  cin >> n2;
  int b[100];
  cout << "Enter elements of set B: ";
  for (int i = 0; i < n2; i++) {
    cin >> b[i];
  }

  cout << "Union: { ";
  for (int i = 0; i < n1; i++) {
    cout << a[i] << " ";
  }
  for (int j = 0; j < n2; j++) {
    bool found = false;
    for (int i = 0; i < n1; i++) {
      if (b[j] == a[i]) {
        found = true;
        break;
      }
    }
    if (!found) {
      cout << b[j] << " ";
    }
  }
  cout << "}\n";

  cout << "Intersection: { ";
  for (int i = 0; i < n1; i++) {
    for (int j = 0; j < n2; j++) {
      if (a[i] == b[j]) {
        cout << a[i] << " ";
        break;
      }
    }
  }
  cout << "}\n";

  cout << "Difference (A - B): { ";
  for (int i = 0; i < n1; i++) {
    bool found = false;
    for (int j = 0; j < n2; j++) {
      if (a[i] == b[j]) {
        found = true;
        break;
      }
    }
    if (!found) {
      cout << a[i] << " ";
    }
  }
  cout << "}\n";

  return 0;
}
