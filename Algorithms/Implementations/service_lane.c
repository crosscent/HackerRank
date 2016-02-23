#include <stdio.h>

int max_size(int start, int end, int * lane_width)
{
    int min = lane_width[start];
    for(int k = start; k < end + 1; k++)
    {
        if (lane_width[k] < min)
        {
            min = lane_width[k];
        }
    }
    return min;
}
int main()
{
    int lane_count;
    int test_count;
    scanf("%d %d", &lane_count, &test_count);
    
    int lane_width[lane_count];
    for(int i = 0; i < lane_count; i++)
    {
        scanf("%d", &lane_width[i]);
    }

    for(int j = 0; j < test_count; j++)
    {
        int start;
        int end;
        scanf("%d %d", &start, &end);
        printf("%d\n", max_size(start, end, lane_width));
    }
    return 0;
}
