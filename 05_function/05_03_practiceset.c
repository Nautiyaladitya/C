#include<stdio.h>
                          /* funcion to calculate force of attraction on a body
                           of mass m exerted by earth (g = 9.8 m/s)  */
float force(float mass);

int main(){
int m;
printf(" enter the value of mass in kgs \n");
    scanf("%d", &m);

    printf(" The value of force in newton %f \n", force(m));
    


    return 0;
}
float force(float mass){

float result = mass* 9.8;
return result;

}