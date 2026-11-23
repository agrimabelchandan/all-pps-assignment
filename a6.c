#include <stdio.h>

/*declaration of recursive factorial method*/

int factorial(int n)
{
    if(n == 0)
        return 1;
    
        return n * factorial(n - 1);
}
/*orignal program*/
int main()
{
    int a, choice, fact = 1;

    printf("Enter a number: ");
    if(scanf("%d", &a)!=1) 
    {
        printf("invalid input");
         return 0;
    }
    else{
        printf("valid input");
    }

    printf("\nChoose the method:");
    printf("\n1. Recursive method");
    printf("\n2. Non-recursive method");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Factorial = %d", factorial(a));
            break;

        case 2:
            for(int i = 1; i <= a; i++)
            {
                fact = fact * i;
            }

            printf("Factorial = %d", fact);
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}