#include <iostream>
using namespace std;

float floor(float x) {
  int i = (int)x; // truncates toward zero
  if (x < 0 && x != (float)i)
    return (float)(i - 1);
  return (float)i;
}

float ceiling(float x) {
  int i = (int)x;
  if (x > 0 && x != (float)i)
    return (float)(i + 1);
  return (float)i;
}

float power(float base, int exp) {
  if (exp == 0)
    return 1.0f;
  if (exp < 0)
    return 1.0f / power(base, -exp);
  float res = 1.0f;
  for (int i = 0; i < exp; i++)
    res *= base;
  return res;
}

int main() {
  float num, base;
  int expVal;

  cout << "Enter a real number for floor and ceil: ";
  cin >> num;
  cout << "Floor: " << floor(num) << "\n";
  cout << "Ceil:  " << ceiling(num) << "\n";

  cout << "Enter base and integer exponent: ";
  cin >> base >> expVal;
  cout << "Result: " << power(base, expVal) << "\n";

  return 0;
}
