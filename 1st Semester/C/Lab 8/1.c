#include <stdio.h>
#include <string.h>

struct company {
  char name[100];
  char address[100];
  char phone[20];
  int noOfEmployee;
};

int main() {
  struct company c;

  printf("Enter company name: ");
  fgets(c.name, sizeof(c.name), stdin);
  c.name[strcspn(c.name, "\n")] = '\0';

  printf("Enter address: ");
  fgets(c.address, sizeof(c.address), stdin);
  c.address[strcspn(c.address, "\n")] = '\0';

  printf("Enter phone: ");
  fgets(c.phone, sizeof(c.phone), stdin);
  c.phone[strcspn(c.phone, "\n")] = '\0';

  printf("Enter number of employees: ");
  scanf("%d", &c.noOfEmployee);

  printf("\nCompany Details:\n");
  printf("Name: %s\n", c.name);
  printf("Address: %s\n", c.address);
  printf("Phone: %s\n", c.phone);
  printf("Employees: %d\n", c.noOfEmployee);

  return 0;
}
