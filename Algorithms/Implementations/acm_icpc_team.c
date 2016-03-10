#include <stdio.h>

int * max_knowledge_team(int number_of_teammates, int number_of_topics, int knowledge[number_of_teammates][number_of_topics])
{
    int total_topics = 0, groups = 0, current_combination;
    for (int member=0; member < number_of_teammates; member++)
    {
        for (int teammate=member+1; teammate < number_of_teammates; teammate++)
        {
            current_combination = 0;
            for (int topic=0; topic < number_of_topics; topic++)
            {
                if (knowledge[member][topic] > 0 || knowledge[teammate][topic] > 0)
                {
                    current_combination +=1;
                }
            }
            if (current_combination > total_topics)
            {
                total_topics = current_combination;
                groups = 1;
            } else if ( current_combination == total_topics)
            {
                groups +=1;
            }
        }
    }
    static int result[2];
    result[0] = total_topics;
    result[1] = groups;

    return result;
}

int main()
{
    int members, topics;
    scanf("%d %d", &members, &topics);
    int knowledge[members][topics];
    char temp_char;
    for (int i=0; i < members; i++)
    {
        for (int j = 0; j < topics; j++)
        {
            scanf(" %c", &temp_char);

            knowledge[i][j] = temp_char - '0';
        }
    }
    int *result;
    result = max_knowledge_team(members, topics, knowledge);
    printf("%d\n%d\n", result[0], result[1]);
    return 0;
}
