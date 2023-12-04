#include <stdio.h>

// Using break statement !!
int main()
{

    int i = 0;

    do
    {
        printf("\nthe value of i is : %d", i);

        if(i ==5){
            break;
        }
        i++;

    } while (i <= 10);
    return 0;
}