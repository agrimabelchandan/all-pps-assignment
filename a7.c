#include <stdio.h>

int main()
{
    struct Student
    {
        int rollno;
        char name[30];
        float m1;
        float m2;
        float m3;
        float sum;
        float per;
    };

    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    /*Taking input */ 
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter roll number, name and marks of three subjects: ");
        scanf("%d %s %f %f %f", &s[i].rollno, &s[i].name, &s[i].m1, &s[i].m2, &s[i].m3);
        /*calculating sum and percentage*/
        s[i].sum=s[i].m1+s[i].m2+s[i].m3;
        s[i].per=(s[i].sum/300)*100;
    }

    /* Displaying in tabular form*/
    printf("\n-----------------------------------------------------------------------------------------------------------------");
    printf("\nRoll No.\tName\t\tphy\t\tchem\t\tmaths\t\ttotal\t\tpercent");
    printf("\n------------------------------------------------------------------------------------------------------------------");


    for(int i = 0; i < n; i++)
    {
        printf("\n%d\t\t%-15s\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f", s[i].rollno, s[i].name, s[i].m1, s[i].m2, s[i].m3,s[i].sum,s[i].per);
    }

    printf("\n--------------------------------------------------------------------------------------------------------------------");

    return 0;
}