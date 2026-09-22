#include <iostream>

using namespace std;

int main() {
  int k = 5;
  int months = 12;

  int minStudents = months * (k - 1) + 1;

  cout << "Minimum number of students required: " << minStudents << "\n";

  return 0;
}
