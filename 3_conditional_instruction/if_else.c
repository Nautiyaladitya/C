#include<stdio.h>

int main(){
int age;
printf("enter your age\n");
scanf("%d",&age);

if(age>=18){
    printf("\n you are eligible to drive",age);

}
else{
    printf("you are not eligible to drive\n",age);
    
}
if(age==50){
    printf("\nits your half century\n",age);
}
//else{
  // printf("its not your half century\n",age);
//}

return 0;
}