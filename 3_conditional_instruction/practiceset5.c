#include<stdio.h>

int main(){
    
// 97 - 122 = a-z as per the ASCII value
char ch;
printf("enter the character\n");
scanf("%c",&ch);

if(ch<=122 && ch>=97){
    printf("it is a lowercase");

}
else{
    printf("it's not a lower case");
}

   return 0; 
}