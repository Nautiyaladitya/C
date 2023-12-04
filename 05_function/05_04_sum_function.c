#include <stdio.h>

// sum is a function which takes  a and b as a input and returns an integer as an output
int sum(int a, int b); // funcn prototype declaration

int main()
{
    int c;
    c = sum(2, 3); // funcn call
    printf("The value of c is %d\n", c);
    return 0;
}

int sum(int a, int b)
{

    int c;
    c = a + b;
    return c;
}
