#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int number_of_digits(int number)
{
    return floor(log10(abs(number))) + 1;
}

int divides_evenly(int number)
{
    int digits = number_of_digits(number);
    char string_of_number[digits];
    int count = 0;
    sprintf(string_of_number, "%d", number);

    for(int i = 0; i < digits; i++)
    {
        long current_digit = string_of_number[i] - '0';
        if(current_digit != 0 && number % current_digit == 0)
        {
            count +=1;
        }
    }
    printf("%d\n", count);
    return count;
}

int main()
{
    int number_of_tests;
    scanf("%d", &number_of_tests);
    
    int test_cases[number_of_tests];
    for(int i = 0; i < number_of_tests; i++)
    {
        scanf("%d", &test_cases[i]);
    }

    for(int i = 0; i < number_of_tests; i++)
    {
        divides_evenly(test_cases[i]);
    }
    return 0;
}
