#include <stdio.h>
// PRINT FIRST N NUMBERS !!

int main()
{

    int i;
    int n;
    printf("enter the value of n : ");
    scanf("%d", &n);

printf("the first n no. are %d\n",n);

    for (i = 0; i <= n; i++)
    {
        printf(" %d\n", i+1);
    }
    return 0;
}