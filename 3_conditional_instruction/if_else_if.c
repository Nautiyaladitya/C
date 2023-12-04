#include<stdio.h>

int main(){
   int num;

    printf("enter the number: \n");
    scanf("%d",&num);

   if(num == 1){
    printf("your no. is 1\n");
   }
   else if(num ==2)
   {
    printf("your no. is 2");
   }
   else if(num==3)
   {
    printf("your no. is 3");
   }
   else{
    printf("your no. is not 1, 2, 3!");
   }


return 0;
}