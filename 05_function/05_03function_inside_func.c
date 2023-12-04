#include <stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();

    return 0;
}

void goodmorning()
{
    printf("good morning aadi\n");
    goodafternoon();
    
}
void goodafternoon()
{
     printf("good afternoon aadi\n");
     goodnight();
}
void goodnight()
{
    printf("good night aadi\n");
}