#include <stdio.h>

void move_character(char * letter, int characters_to_move)
{
    int letter_ord = *letter;
    int new_letter_ord = letter_ord;
    if ((letter_ord >=65 && letter_ord <= 90) || (letter_ord >= 97 && letter_ord <= 122))
    {
        new_letter_ord += characters_to_move;
    }
    while ((letter_ord <=90 && new_letter_ord >90) || (letter_ord <= 122 && new_letter_ord > 122))
    {
        new_letter_ord -= 26;
    }
    char new_letter = new_letter_ord;
    *letter = new_letter;
}

char * crypt_string(int length_of_string, char * string, int characters_to_move)
{
    for(int i = 0; i < length_of_string; i++)
    {
        move_character(&string[i], characters_to_move);
    }
    return string;
}

int main()
{
    int length_of_string;
    scanf("%d", &length_of_string);

    char string[length_of_string];
    scanf("%s", string);

    int characters_to_move;
    scanf("%d", &characters_to_move);

    printf("%s\n", crypt_string(length_of_string, string, characters_to_move));
}
