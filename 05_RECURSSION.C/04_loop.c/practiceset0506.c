#include <stdio.h>
// SUM OF FIRST 10 NATURAL NUMBERS !!

int main()
{

    int i = 1, n = 10, sum = 0;

    // printf("\nenter the value of n : ");
    // scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum += i;
        printf("sum of (1-10) is : %d\n" ,sum);


     }

    /*
    while(i<=10){
        sum = sum +i;
         i++;
    }
        printf("sum of (1-10) is : %d\n" ,sum);
    */

/*
    do
    {
        printf("sum of (1-10) is : %d\n", sum);
        i++;
        sum = sum + i;

    } while (i <= n);

*/
    return 0;
}