#include <stdio.h>
void print_factorial(int factorials)
{
    int result[1000] = {0};
    result[0] = 1;
    int number_of_digits = 1, carry_over = 0, multiply, digit;
    for (int i = 1; i <= factorials; i++)
    {
        carry_over = 0;
        for (int j = 0; j < number_of_digits; j++)
        {
            multiply = result[j] * i + carry_over;
            digit = multiply % 10;
            carry_over = multiply / 10;
            result[j] = digit;
        }
        while (carry_over){
            number_of_digits +=1;
            result[number_of_digits - 1] = carry_over % 10;
            carry_over = carry_over / 10;
        }
    }
    for (int k = number_of_digits-1; k >=0; k--)
    {
        printf("%d", result[k]);
    }
}

int main()
{
    int factorials;
    scanf("%d", &factorials);
    print_factorial(factorials);
    return 0;
}
