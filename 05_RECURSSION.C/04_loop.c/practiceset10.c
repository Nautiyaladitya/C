#include <stdio.h>
// WACP TO CHECK WEATHER A NUMBER IS PRIME OR NOT !!

int main()
{

    int n = 13, prime = 1;
    for(int i=2;i<n;i++)
    {
        if( n%i==0){
            prime = 0;
            break;
        }

    }
    if(prime==0 && n!=2){
        printf("\nthis is not a prime number");

    }

else{
     printf("\nthis is  a prime number");
        
}
    return 0;
}