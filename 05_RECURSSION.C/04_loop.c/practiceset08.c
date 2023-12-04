#include <stdio.h>
                          // FACTORIAL OF A NUMBER USING LOOP !!

// int main()
// {

//     int i = 0, n = 3, factorial = 1;

//     while (i <= n)
//     {
//         printf("\n the value of factorial %d is %d", n, factorial);

//         factorial *= i;
//     }

//     return 0;
// }

// using for loop !!
int main()
{

    int i = 0, n = 3, factorial = 1;
    // factorial(4) = 1*2*3*4
    // factorial(7) = 1*2*3*4*5*6*7

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
        printf("\n the factorial of %d is %d", n, factorial);
    

    return 0;
}