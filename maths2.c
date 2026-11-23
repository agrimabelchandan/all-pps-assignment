#include <stdio.h>

int main()

{

int a, b, ch;

float ans;



printf("Enter two whole numbers: ");

     if (scanf("%d %d", &a, &b)!= 2)

    {

      printf("invalid input");

      return 0;

    }

   else

   {

    printf("valid input");

   }





printf("\n1. Add");

printf("\n2. Subttract");

printf("\n3. Divide");

printf("\n4. Multiply");



printf("\nChoose 1-4: ");

scanf("%d", &ch);



switch(ch)

{

    case 1:

        ans = a + b;

        printf("Addition is = %f", ans);

        break;



    case 2:

        ans = a - b;

        printf("subtraction is = %f", ans);

        break;



    case 3:

       if(b!= 0)

        {

            ans = (float)a / b;

            printf("division is = %.2f", ans); /*.2 is for values upto 2 decimal places*/

        }

        else

        printf("undefined");



        break;



    case 4:

        ans = a * b;

        printf("multiplication is = %f", ans);

        break;



    default:

        printf("Wrong choice");

}



return 0;

}