
#include <stdio.h>

int main()
{
    int year, month, day;
    int days, start = 0;

    char *months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int monthDays[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    printf("Enter year: ");
    scanf("%d", &year);

    // Check leap year
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        monthDays[1] = 29;

    // Find starting day of the year
    int y = year - 1;
    start = (y * 365 + y / 4 - y / 100 + y / 400 + 1) % 7;

    // Print all 12 months
    for (month = 0; month < 12; month++)
    {
        printf("\n\n       %s %d\n", months[month], year);
        printf(" Sun Mon Tue Wed Thu Fri Sat\n");

        for (day = 0; day < start; day++)
            printf("    ");

        days = monthDays[month];

        for (day = 1; day <= days; day++)
        {
            printf("%4d", day);

            if ((day + start) % 7 == 0)
                printf("\n");
        }

        start = (start + days) % 7;
    }

    return 0;
}
