#include <stdio.h>
#include <string.h>

struct student {
  int rollNo;
  char name[50];
  char address[100];
  int age;
  float physics;
  float math;
};

void readAndDisplay(struct student *s) {
  printf("Enter Roll No: ");
  scanf("%d", &s->rollNo);
  getchar();
  printf("Enter Name: ");
  fgets(s->name, sizeof(s->name), stdin);
  s->name[strcspn(s->name, "\n")] = '\0';
  printf("Enter Address: ");
  fgets(s->address, sizeof(s->address), stdin);
  s->address[strcspn(s->address, "\n")] = '\0';
  printf("Enter Age: ");
  scanf("%d", &s->age);
  printf("Enter Physics marks: ");
  scanf("%f", &s->physics);
  printf("Enter Math marks: ");
  scanf("%f", &s->math);

  printf("\nStudent Details: \n");
  printf("Roll No : %d\n", s->rollNo);
  printf("Name    : %s\n", s->name);
  printf("Address : %s\n", s->address);
  printf("Age     : %d\n", s->age);
  printf("Physics : %.2f\n", s->physics);
  printf("Math    : %.2f\n", s->math);
}

int main() {
  struct student s;
  readAndDisplay(&s);
  return 0;
}
