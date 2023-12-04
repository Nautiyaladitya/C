#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 8;
    printf("the value of a + b is %d\n", a + b);
    printf("the value of a - b is %d\n", a - b);
    printf("the value of a * b is %d\n", a * b);
    printf("the value of a / b is %d\n", a / b);

    int z;
    z = b * a; // legal
    // b * a = z; //illegral

    printf("the value of z is %d\n", z);

    printf(" 5 when divided by 2 leaves a remainder of %d\n", 5 % 2);

    /*no operator is assumed to be present
     printf(" the value of 4 * 5 is %d\n", (4) (5)); --> will not
      return 20 !!  wrong !! */

    printf("the value of 4 *5 is %d\n", 4 * 5);

    // there is no operator in c to perform exponentiation in c

    /* printf("the value of 4 ^ 5 is %d\n", 4^5); \\ --> this will not
    produce 4 to the power 5 */

    printf("the value of 4 to the power 5 is %f\n", pow(2, 5));

    printf("the value of 6 + 5 is %d\n", 6 + 5);
    printf("the value of 6 + 5.5 is %f\n", 6 + 5.5);
    printf("the value of 6.5 + 5 is %f\n", 6.5 + 5);

    float k = 3.0 / 9;
    printf("the value of k is %f", k);

    return 0;
}