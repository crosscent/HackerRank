#include <stdio.h>

int height(int cycles, int tree_height, int season)
{
    if (season == cycles)
    {
        return tree_height;
    } else if (season % 2 ==0)
    {
        tree_height = tree_height * 2;
    } else 
    {
        tree_height += 1;
    }
    season +=1;
    tree_height = height(cycles, tree_height, season);
    return tree_height;

}
int main()
{
    int number_of_tests;
    scanf("%d", &number_of_tests);

    int tests[number_of_tests];
    for (int i=0; i < number_of_tests; i++)
    {
        scanf("%d", &tests[i]);
        printf("%d\n", height(tests[i], 1, 0));
    }
}
