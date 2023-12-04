#include <stdio.h>

int main()
{

    int i = 0;
    scanf("%d", &i);

    while (i >= 10 && i<=20)
    {
        printf("\nthe value of i : %d", i);
        i++; // i = i+1;
    }
    return 0;
}