#include <stdio.h>
#include <math.h>

int square_count(int a, int b)
{
    int count = 0;
    int sqrt_start = (int) ceil(sqrt(a));
    int sqrt_end = (int) floor(sqrt(b));
    return sqrt_end - sqrt_start + 1;
}

int main()
{
    int test_count;
    scanf("%d", &test_count);

    int tests[test_count];
    for(int i=0; i < test_count; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", square_count(a, b));
    }
    return 0;
}
