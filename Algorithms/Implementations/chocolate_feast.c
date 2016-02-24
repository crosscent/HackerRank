#include <stdio.h>
int chocolate_count(int dollar, int cost, int exchange, int wrappers)
{
    int chocolate_purchased, total_wrappers, chocolate_exchanged, total;
    chocolate_purchased = dollar / cost;
    total_wrappers = chocolate_purchased + wrappers;
    chocolate_exchanged = total_wrappers / exchange;
    total_wrappers = total_wrappers - (chocolate_exchanged * exchange) + chocolate_exchanged;
    total = chocolate_purchased + chocolate_exchanged;

    if (total_wrappers >= exchange)
    {
        total += chocolate_count(dollar - (chocolate_purchased * cost), cost, exchange, total_wrappers);
    }
    return total;
}

int main()
{
    int test_count;
    scanf("%d", &test_count);

    int dollar, cost, exchange, initial_wrappers = 0;
    for(int i =0; i < test_count; i++)
    {
        scanf("%d %d %d", &dollar, &cost, &exchange);
        printf("%d\n", chocolate_count(dollar, cost, exchange, 0));
    }
    return 0;
}
