#include <math.h>
#include <stdio.h>

struct point {
  float x, y;
};

float distance(struct point p1, struct point p2) {
  return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
  struct point p1, p2;

  printf("Enter (x1, y1): ");
  scanf("%f %f", &p1.x, &p1.y);
  printf("Enter (x2, y2): ");
  scanf("%f %f", &p2.x, &p2.y);

  printf("Distance = %.2f\n", distance(p1, p2));

  return 0;
}
