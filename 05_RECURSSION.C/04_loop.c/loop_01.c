#include<stdio.h>

//  FIND THE GREATEST NUMBER AMONG FOUR ENTERED !!

int main(){
int a , b , c , d;

printf("enter four numbers : ");
scanf("%d%d%d%d",&a,&b,&c,&d);

if(a>b && a>c && a>d ){
    printf("\n %d is the greatest number!",a);
}
else if(b>a && b>c && b>d ){
    printf("\n %d is the greatest number!"),b;
}
else if(c>a && c>b && c>d ){
    printf("\n %d is the greatest number!",c);
}
else {
    printf("\n %d is the greatest number!",d);
}

    return 0;
}