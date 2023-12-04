#include<stdio.h>

int factorial(int x);

int main(){

int a = 3;
printf("The value of factorial %d is %d", a , factorial(a));

    return 0;
}

int factorial(int x){
    printf("calling factorial (%d)\n",x);    // this is to show the process in output that how it finds fact.D
    if( x==1 || x==0 ){
        return 1;

    }
    else{
        return x*factorial(x-1);
    }
}