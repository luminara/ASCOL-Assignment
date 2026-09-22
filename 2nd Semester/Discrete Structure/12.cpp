#include <iostream>

using namespace std;

int main() {
  int r, c;
  cout << "Enter rows and columns for matrices: ";
  cin >> r >> c;

  int a[20][20], b[20][20];

  cout << "Enter matrix A:\n";
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }

  cout << "Enter matrix B:\n";
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> b[i][j];
    }
  }

  cout << "Join (A OR B):\n";
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << (a[i][j] || b[i][j]) << " ";
    }
    cout << "\n";
  }

  cout << "Meet (A AND B):\n";
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << (a[i][j] && b[i][j]) << " ";
    }
    cout << "\n";
  }

  if (r == c) {
    cout << "Boolean Product:\n";
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        int val = 0;
        for (int k = 0; k < c; k++) {
          val = val || (a[i][k] && b[k][j]);
        }
        cout << val << " ";
      }
      cout << "\n";
    }
  }

  return 0;
}
