#include <stdio.h>

// Q. print first 4 natural number

 int main()
{

 int i = 1;
  do
 {
     printf("\nthe value of i is %d ", i);
      i++;

  } while (i < 5);

  return 0;
}

//   OR HARRY's CODE
/*
int main()
{

    int i = 0;
    int n;

    printf("enter the value of n\n");
    scanf("%d", &n);

    do
    {
        printf("the numbers are  %d\n", i + 1);
        i++;

    } while (i < n);
    return 0;
}
*/