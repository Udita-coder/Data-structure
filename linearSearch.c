#include <stdio.h>
int main()
{
  int arr[20], search, i, num;

  printf("Enter number of elements in array\n");
  scanf("%d",&num);

  printf("Enter %d integer(s)\n", num);

  for (i = 0; i < num; i++)
    scanf("%d", &arr[i]);

  printf("Enter a number to search\n");
  scanf("%d", &search);

  for (i = 0; i < num; i++)
  {
    if (arr[i] == search)
    {
      printf("%d is present at location %d.\n", search, i+1);
      break;
    }
  }
  if (i == num)
    printf("%d isn't present in the array.\n", search);

  return 0;
  }
