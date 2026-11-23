#include <stdio.h>

int main()
{
    int m,n;
   int i, j;
   

   /*input of matrices*/

   /*for matrix1*/
   printf("enter dimensions of matrices");
   printf("no of rows=");
   scanf("%d", &m);
   printf("no of coloumns=");
   scanf("%d", &n);
   int matrix1[m][n];
   int matrix2[m][n];
   int sum[m][n];

   printf("enter elements of matrix1");
   for(i=0; i<m; i++)/*will take each row element one by one, starts from zero thus i<3*/
   {
    for(j=0; j<n; j++)/*will move the scanf to next column after a row is completed thus included in the for condition of i*/
    {
        scanf("%d", &matrix1[i][j]);
    }

   }

    /*for matrix2*/
   printf(" \n enter elements of matrix2");
   for(i=0; i<m; i++)/*will take each row element one by one, starts from zero thus i<3*/
   {
    for(j=0; j<n; j++)/*will move the scanf to next column after a row is completed thus included in the for condition of i*/
    {
        scanf("%d", &matrix2[i][j]);
    }

   }

   /*for addition of matrices */

  
    for(i=0; i<m; i++)/*will take each row element one by one, starts from zero thus i<3*/
   {
    for(j=0; j<n; j++)/*will move the scanf to next column after a row is completed thus included in the for condition of i*/
    { 
        sum[i][j]= matrix1[i][j]+matrix2[i][j];
    }
   } 

   /*for output*/
   printf("\n Sum of matrices:");
   for (int i = 0; i < m; i++)
   {          
    for (int j = 0; j < n; j++)
    {      // loop through columns
        printf("%3d ", sum[i][j]);     
    }
    printf("\n");
   }                    
    return 0;
}