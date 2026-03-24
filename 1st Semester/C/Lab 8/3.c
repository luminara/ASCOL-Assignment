#include <stdio.h>

struct complex {
  float real, imag;
};

struct complex add(struct complex c1, struct complex c2) {
  struct complex result;
  result.real = c1.real + c2.real;
  result.imag = c1.imag + c2.imag;
  return result;
}

struct complex subtract(struct complex c1, struct complex c2) {
  struct complex result;
  result.real = c1.real - c2.real;
  result.imag = c1.imag - c2.imag;
  return result;
}

void display(struct complex c) {
  if (c.imag >= 0)
    printf("%.2f + %.2fi\n", c.real, c.imag);
  else
    printf("%.2f - %.2fi\n", c.real, -c.imag);
}

int main() {
  struct complex c1, c2, result;

  printf("Enter real and imaginary of complex 1: ");
  scanf("%f %f", &c1.real, &c1.imag);
  printf("Enter real and imaginary of complex 2: ");
  scanf("%f %f", &c2.real, &c2.imag);

  result = add(c1, c2);
  printf("Addition: ");
  display(result);

  result = subtract(c1, c2);
  printf("Subtraction: ");
  display(result);

  return 0;
}
