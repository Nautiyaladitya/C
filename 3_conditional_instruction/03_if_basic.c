#include <stdio.h>
int main()
{
    
    // WACP to find weather a no. is even or odd?
    
    int a, b;
    printf("enter a number\n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("\n %d is even ", a);
    }
    else
    {
        printf("\n %d is odd", a);
    }
    return 0;
}