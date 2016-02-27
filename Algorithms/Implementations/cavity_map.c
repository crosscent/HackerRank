#include <stdio.h>

void modify_map(int length, char cavity_map[length][length])
{
    int current;
    for (int m = 1; m < length-1; m ++)
    {
        for (int n = 1; n < length-1; n++)
        {
            current = cavity_map[m][n] - '0';
            if (cavity_map[m-1][n] - '0' < current && cavity_map[m][n-1] - '0'< current && cavity_map[m][n+1] - '0'< current && cavity_map[m+1][n] - '0' < current)
            {
                cavity_map[m][n] = 'X';
            }
        }
    }

}

void print_map(int length, char cavity_map[length][length])
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length; j++)
        {
            printf("%c", cavity_map[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int length;

    scanf("%d", &length);
    char cavity_map[length][length];
    for (int i = 0; i < length; i++)
    {
        scanf("%s", cavity_map[i]);
    }

    modify_map(length, cavity_map);
    print_map(length, cavity_map);

    return 0;
}
