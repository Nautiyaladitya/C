#include<stdio.h>
#include<math.h>

int main(){         // AREA OF SQ. BY USING LIBRARY FUNCTION!!

int side;
printf("enter the value of side\n");
scanf("%d",&side);

 printf("the value of area is %f", pow(side,2));

                       //OR 
// NORMALLY BY APPLYING A2 (A SQUARE) FORMULA !!
// int main(){
//    int side;
//   printf("enter the value of side\n");
//   scanf("%d",&side);
// printf("the value of area is %d",side * side);

    return 0;
}