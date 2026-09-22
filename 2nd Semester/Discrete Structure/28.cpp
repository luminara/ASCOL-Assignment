#include <iostream>

using namespace std;

int main() {
  int a[5];
  cout << "Enter 5 numbers: ";
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }

  cout << "Combinations of 3 numbers:\n";
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      for (int k = j + 1; k < 5; k++) {
        cout << a[i] << " " << a[j] << " " << a[k] << "\n";
      }
    }
  }

  return 0;
}
