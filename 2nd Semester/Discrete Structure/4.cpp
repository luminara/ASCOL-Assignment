#include <iostream>

using namespace std;

double getMin(double x, double y) {
  return (x < y) ? x : y;
}

double getMax(double x, double y) {
  return (x > y) ? x : y;
}

int main() {
  int n;
  cout << "Enter number of elements in set: ";
  cin >> n;

  double a[100], b[100];
  cout << "Enter membership values for set A: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << "Enter membership values for set B: ";
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  cout << "Fuzzy Union: { ";
  for (int i = 0; i < n; i++) {
    cout << getMax(a[i], b[i]) << " ";
  }
  cout << "}\n";

  cout << "Fuzzy Intersection: { ";
  for (int i = 0; i < n; i++) {
    cout << getMin(a[i], b[i]) << " ";
  }
  cout << "}\n";

  cout << "Fuzzy Difference (A - B): { ";
  for (int i = 0; i < n; i++) {
    cout << getMin(a[i], 1.0 - b[i]) << " ";
  }
  cout << "}\n";

  return 0;
}
