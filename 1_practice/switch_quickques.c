/*#include <stdio.h>

int main()        // this is worong neeche shi hai!!
{

    int marks;
    printf("enter your marks :\n");
    scanf("%d", &marks);

    switch (marks )
    {
    case  100 :
        printf("your grade is A \n ");
        break;

    case 90:
        printf("your grade is B \n ");
        break;

    case 80:
        printf("your grade is c \n ");
        break;

    case 70:
        printf("your grade is D \n ");
        break;

    case 60:
        printf("your grade is E \n ");
        break;

    default:
        printf("your grade is F!\n");
        break;
    }
    
    return 0;
}  
*/

//The switch statement checks the value of marks / 10 and 
//assigns the corresponding grade using fall-through cases
// for grade ranges. For example, if marks / 10 is 9 or 10, 
//it will execute the code for both cases, assigning Grade A.

/*Marks greater than or equal to 90: Grade A
Marks greater than or equal to 80: Grade B
Marks greater than or equal to 70: Grade C
Marks greater than or equal to 60: Grade D
Marks greater than or equal to 50: Grade E
Marks below 50: Grade F

write a c program using switch statement not if else */

#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:
        case 9:
            printf("Your grade is A\n");
            break;
        case 8:
            printf("Your grade is B\n");
            break;
        case 7:
            printf("Your grade is C\n");
            break;
        case 6:
            printf("Your grade is D\n");
            break;
        case 5:
            printf("Your grade is E\n");
            break;
        default:
            printf("Your grade is F\n");
            break;
    }

    return 0;
}
