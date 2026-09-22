#include <iostream>

using namespace std;

void printSet(int mask, int uSize) {
  cout << "{ ";
  for (int i = 0; i < uSize; i++) {
    if ((mask >> i) & 1) {
      cout << i << " ";
    }
  }
  cout << "}\n";
}

int main() {
  int uSize, n1, n2, x;
  cout << "Enter universal set size (max 30): ";
  cin >> uSize;

  int maskA = 0, maskB = 0;

  cout << "Enter size of set A: ";
  cin >> n1;
  cout << "Enter elements of set A: ";
  for (int i = 0; i < n1; i++) {
    cin >> x;
    maskA |= (1 << x);
  }

  cout << "Enter size of set B: ";
  cin >> n2;
  cout << "Enter elements of set B: ";
  for (int i = 0; i < n2; i++) {
    cin >> x;
    maskB |= (1 << x);
  }

  cout << "Union: ";
  printSet(maskA | maskB, uSize);

  cout << "Intersection: ";
  printSet(maskA & maskB, uSize);

  cout << "Difference (A - B): ";
  printSet(maskA & (~maskB), uSize);

  return 0;
}
