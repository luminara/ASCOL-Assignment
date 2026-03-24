#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  printf("Enter number of elements: ");
  scanf("%d", &n);

  int *arr = malloc(n * sizeof(int));
  if (arr == NULL) {
    printf("Memory allocation failed\n");
    return 1;
  }

  printf("Enter elements: ");
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Array elements: ");
  for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n");

  free(arr);
  return 0;
}
