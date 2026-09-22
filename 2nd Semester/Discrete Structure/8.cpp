#include <iostream>

using namespace std;

int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  int origA = a, origB = b;
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }

  cout << "GCD of " << origA << " and " << origB << " is: " << a << "\n";

  return 0;
}
