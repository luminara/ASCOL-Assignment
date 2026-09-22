#include <iostream>

using namespace std;

int binSearch(int a[], int low, int high, int key) {
  if (low > high) return -1;
  int mid = (low + high) / 2;
  if (a[mid] == key) return mid;
  if (key < a[mid]) return binSearch(a, low, mid - 1, key);
  return binSearch(a, mid + 1, high, key);
}

int main() {
  int n, key;
  cout << "Enter size of sorted array: ";
  cin >> n;

  int a[100];
  cout << "Enter sorted elements: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << "Enter key to search: ";
  cin >> key;

  int pos = binSearch(a, 0, n - 1, key);
  if (pos != -1) {
    cout << "Found at index " << pos << "\n";
  } else {
    cout << "Not found\n";
  }

  return 0;
}
