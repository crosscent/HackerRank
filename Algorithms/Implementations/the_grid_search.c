#include <stdio.h>
#include <stdbool.h>

void print_pattern(int row_count, int col_count, char pattern[row_count][col_count])
{
    for (int i = 0; i < row_count; i++)
    {
        for (int j = 0; j < col_count; j++)
        {
            printf("%c", pattern[i][j]);
        }
        printf("\n");
    }
}

bool find_pattern(int source_row_count, int source_col_count, char source[source_row_count][source_col_count], int search_row_count, int search_col_count, char search[search_row_count][search_col_count])
{
    bool found;
    for (int i = 0; i < source_row_count - search_row_count + 1; i++)
    {
        for (int j = 0; j < source_col_count - search_col_count + 1; j++)
        {
            found = true;
            /* search for all 4 corners first, if matches, continue */
            if (source[i][j] == search[0][0] && source[i+search_row_count-1][j] == search[search_row_count-1][0] && source[i][j+search_col_count-1] == search[0][search_col_count-1] && source[i+search_row_count-1][j+search_col_count-1] == search[search_row_count-1][search_col_count-1])
            {
               for (int m = 0; m < search_row_count; m++)
                {
                    for (int n = 0; n < search_col_count; n++)
                    {
                        if (source[i+m][j+n] != search[m][n])
                        {
                            found = false;
                        }
                    }
                } 
            } else {
                found = false;
            }
            
            if (found == true)
            {
                return true;
            }
        }
    }
    return false;
}


bool find_pattern_brute_force(int source_row_count, int source_col_count, char source[source_row_count][source_col_count], int search_row_count, int search_col_count, char search[search_row_count][search_col_count])
{
    bool found;
    for (int i = 0; i < source_row_count - search_row_count + 1; i++)
    {
        for (int j = 0; j < source_col_count - search_col_count + 1; j++)
        {
            found = true;
            for (int m = 0; m < search_row_count; m++)
            {
                for (int n = 0; n < search_col_count; n++)
                {
                    if (source[i+m][j+n] != search[m][n])
                    {
                        found = false;
                    }
                }
            }
            if (found == true)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int test_count;
    scanf("%d", &test_count);

    for (int i = 0; i < test_count; i ++)
    {
        int source_row, source_column, search_row, search_column;
        scanf("%d %d", &source_row, &source_column);
        
        char source[source_row][source_column];
        for(int j = 0; j < source_row; j++)
        {
            scanf("%s", source[j]);
        }
        
        scanf("%d %d", &search_row, &search_column);

        char search[search_row][search_column];
        for (int m = 0; m < search_row; m++)
        {
            scanf("%s", search[m]);
        }

        bool found;
        found = find_pattern(source_row, source_column, source, search_row, search_column, search);

        if (found == true)
        {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
