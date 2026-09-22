#include <iostream>

using namespace std;

int seqSearch(int a[], int n, int key, int i) {
  if (i >= n) return -1;
  if (a[i] == key) return i;
  return seqSearch(a, n, key, i + 1);
}

int main() {
  int n, key;
  cout << "Enter number of elements: ";
  cin >> n;

  int a[100];
  cout << "Enter elements: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  cout << "Enter element to search: ";
  cin >> key;

  int pos = seqSearch(a, n, key, 0);
  if (pos != -1) {
    cout << "Found at index " << pos << "\n";
  } else {
    cout << "Not found\n";
  }

  return 0;
}
