#include<stdio.h>
// SUM OF FIRST N NATURAL NUMBER USING RECURSION !

int calcsum(int n);  // funcn prototype declaration !!

int main(){

int n = 5;
printf(" sum of n natural no. is :  %d ",calcsum(n));

    return 0;
}

int calcsum(int n){     // definition !!
 
if (n <= 1){
return n;
}
return n + calcsum(n - 1);


}

//             // practice ( repeat ) !

// #include<stdio.h>

// int calcsum(int n);
// int main(){
//     int n = 5;
//     printf("The sum of n natural number is  %d",calcsum(n));

//     return 0;
// }

// int calcsum(int n){
//     if ( n<=1 ){
//         return n;
//     }
//     return n +  calcsum(n-1);
// }

