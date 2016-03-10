#include <stdio.h>
long int find_cost(int test_case[5])
{
    long int num_black = test_case[0], num_white = test_case[1], cost_black = test_case[2], cost_white = test_case[3], cost_convert = test_case[4];

    if (cost_black + cost_convert < cost_white)
    {
        cost_white = cost_black + cost_convert;
    } else if (cost_white + cost_convert < cost_black)
    {
        cost_black = cost_white + cost_convert;
    }

    return (num_black * cost_black) + (num_white * cost_white);
}

int main()
{
    int test_cases;
    scanf("%d", &test_cases);
    int tests[test_cases][5];
    for (int i = 0; i < test_cases; i++)
    {
        scanf("%d %d", &tests[i][0], &tests[i][1]);
        scanf("%d %d %d", &tests[i][2], &tests[i][3], &tests[i][4]);
    }

    for (int j = 0; j < test_cases; j++)
    {
        long int costs = find_cost(tests[j]);
        printf("%ld\n", costs);
    }
    return 0;
}
