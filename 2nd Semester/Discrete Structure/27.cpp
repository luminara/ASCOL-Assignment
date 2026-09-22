#include <iostream>

using namespace std;

void permute(char str[], int l, int r) {
  if (l == r) {
    cout << str << "\n";
  } else {
    for (int i = l; i <= r; i++) {
      char temp = str[l];
      str[l] = str[i];
      str[i] = temp;

      permute(str, l + 1, r);

      temp = str[l];
      str[l] = str[i];
      str[i] = temp;
    }
  }
}

int main() {
  char str[] = "ABC";
  permute(str, 0, 2);
  return 0;
}
