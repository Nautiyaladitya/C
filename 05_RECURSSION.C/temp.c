#include<stdio.h>
int factorial( int x);

int main(){
int a = 3 ;
printf("the value of factorial %d is %d", a , factorial(a));

return 0;
}

int factorial( int x){
 printf("calling factorial (%d) \n",x);    // this is to show the process in output that how it finds fact.
 if( x==1 || x==0){

    return 1;
 }

 else{
    return x*factorial(x-1);  
 }
}


// // // practice 


// // #include <stdio.h>
// // int factorial(int x);

// // int main (){

// //     int  a =3;
// // printf("The value of factorial %d is %d \n", a , factorial(a));
// //     return 0;
// // }
// // int factorial(int x){
// //     printf( "calling factorial %d \n",x);
// //     if ( x==1 || x==0){

// //         return 1;

// //     }
// //     else{
// //         return x*factorial(x-1);
// //     }
// // }


// // practice !!

// #include<stdio.h>
// int factorial(int x);

// int main(){
// int a =3;
// printf("The value of factorial %d is %d \n" , a , factorial(a));
//     return 0;
// }
// int factorial(int x){
// printf("the value of factorial (%d)\n" ,x);  // only to show the process (in output) that how factorial process works !!
//     if ( x==1 || x==0){
//       return 1;
//     }
//     else{
//         return factorial(x-1)*x;
//     }
// }