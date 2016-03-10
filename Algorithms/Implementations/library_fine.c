#include <stdio.h>

int calculate_fine(int returned_day, int returned_month, int returned_year, int expected_day, int expected_month, int expected_year)
{
    if (returned_year < expected_year)
    {
        return 0;
    } else if (returned_year > expected_year)
    {
        return 10000;
    }

    if (returned_month < expected_month)
    {
        return 0;
    } else if (returned_month > expected_month)
    {
        return 500 * (returned_month - expected_month);
    }

    if (returned_day < expected_day)
    {
        return 0;
    } else
    {
        return 15 * (returned_day - expected_day);
    }
}

int main()
{
    int returned_day, returned_month, returned_year, expected_day, expected_month, expected_year, fine;
    scanf("%d %d %d", &returned_day, &returned_month, &returned_year);
    scanf("%d %d %d", &expected_day, &expected_month, &expected_year);
    
    fine = calculate_fine(returned_day, returned_month, returned_year, expected_day, expected_month, expected_year);

    printf("%d\n", fine);
    
    return 0;
}
