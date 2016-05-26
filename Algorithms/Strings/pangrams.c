#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPangram(char *string) {
    char used[26] = {0};
    int total = 0;

    for (int i = 0; i < strlen(string); i++){
        int index;
        
        if ('A' <= string[i] && string[i] <= 'Z') {
            index = string[i] - 'A';
        } else if ('a' <= string[i] && string[i] <= 'z') {
            index = string[i] - 'a';
        } else {
            continue; 
        }
        if (used[index] == 0) {
            total += 1;
        }
        used[index] = 1;
    }
    return total;
}
int main() {
    char string[1000];
    scanf("%[^\n]", string);


    if (isPangram(string) == 26) {
        printf("pangram\n");
    } else {
        printf("not pangram\n");
    }
    return 0;
}
