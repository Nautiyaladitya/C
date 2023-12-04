#include<stdio.h>

int main(){

    int a= 3;
printf("%d%d%d", a , ++a , a++ );
    return 0;
}     

                        // INTERVIEW QUESTION !!

     /*    here gcc compiler take printf 's arguement as from "RIGHT TO LEFT" not left to right ,
           so it will print 5 5 3 as an output . its tricky !! */

