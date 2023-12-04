#include<stdio.h>

int main(){
int age;
//int vippass = 0;
//vippass = 1;

printf("enter your age\n");
scanf("%d",&age);

if(age <= 70 && age>=18) {
    printf("\n you are eligible to drive",age);

}
else{
    printf("you are not eligible to drive\n",age);
    
}


return 0;
}