#include <stdio.h>

void get_magic_number(int digits)
{
    int number_of_fives = digits;
    while(number_of_fives % 3 != 0)
    {
        number_of_fives -= 5;
    }
    if (number_of_fives < 0)
    {
        printf("%s\n", "-1");
    } else {
        char magic_number[digits+1];
        for (int i = 0; i < number_of_fives; i++)
        {
            magic_number[i] = '5';
        }
        for (int j = number_of_fives; j < digits; j++)
        {
            magic_number[j] = '3';
        }
        magic_number[digits] = '\0';
        printf("%s\n", magic_number);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    int number_list[t];
    for(int i=0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        number_list[i] = n;
    }
    
    for(int i=0; i < t; i++)
    {
        get_magic_number(number_list[i]);
    }

    return 0;
}
