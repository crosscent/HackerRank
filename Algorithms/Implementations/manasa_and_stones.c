#include <stdio.h>

int combinations_possible(int number_of_stones, int a, int b)
{
    // calculate the possible number of combination
    int max, min, diff;
    if (a < b)
    {
        max = b;
        min = a;
        diff = b - a;
        return ((max - min) / diff * number_of_stones);
    } else if (a > b)
    {
        max = a;
        min = b;
        diff = a -b;
        return ((max - min) / diff * number_of_stones);
    } else {
        return 1;
    }
        
}

void possible_numbers(int number_of_stones, int a, int b)
{
    // calculate the possible number of combination
    int combinations_count = combinations_possible(number_of_stones, a, b);
    int combination[combinations_count];

    int all_as = (number_of_stones - 1) * a;
    int all_bs = (number_of_stones - 1) * b;
    int min_number, max_number, difference;
    if (all_as < all_bs)
    {
        min_number = all_as;
        max_number = all_bs;
        difference = b - a;
    } else if (all_as > all_bs)
    {
        min_number = all_bs;
        max_number = all_as;
        difference = a - b;
    } else {
        min_number = all_as;
        max_number = all_bs;
        difference = a - b;
    }
    for (int j = 0; j < combinations_count; j++)
    {
        combination[j] = min_number;
        min_number+= difference;
    }
    for (int i=0; i < combinations_count; i++)
    {
        printf("%d ", combination[i]);
    }
    printf("\n");
}

int main()
{
    int test_count;

    scanf("%d", &test_count);

    int number_of_stones[test_count];
    int a[test_count];
    int b[test_count];

    for (int i = 0; i < test_count; i++)
    {
        scanf("%d", &number_of_stones[i]);
        scanf("%d", &a[i]);
        scanf("%d", &b[i]);
    }

    for (int j = 0; j < test_count; j++)
    {
        possible_numbers(number_of_stones[j], a[j], b[j]);
    }
    return 0;
}
