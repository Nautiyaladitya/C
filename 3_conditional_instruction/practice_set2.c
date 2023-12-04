
#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;

    printf("Enter the marks for Physics: \n");
    scanf("%d", &physics);

    printf("Enter the marks for Chemistry: \n");
    scanf("%d", &chemistry);

    printf("Enter the marks for Maths: \n");
    scanf("%d", &maths);

    total = (physics + maths + chemistry) / 3;

    if (total < 40 || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("Your percentage is %f and you have failed.\n", total);
    }
    else
    {
        printf("Your percentage is %f and you have passed.\n", total);
    }

    return 0;
}
