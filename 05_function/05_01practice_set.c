#include <stdio.h>
// write a function to find average of three (3) numbers !

float average(int a, int b, int c); // funcn prototype declaration !!
int main()
{

    int a, b, c; // they are different bcz diff. funcn can have same variable name but actually are different !!

    printf(" enter the value of a \n");
    scanf("%d", &a);

    printf(" enter the value of b \n");
    scanf("%d", &b);

    printf(" enter the value of c \n");
    scanf("%d", &c);

    printf( "The value of average is %f", average(a,b,c));
    return 0;
}
float average(int a, int b, int c)
{
    float result;
    result = (a + b + c) / 3;
    return result;
}