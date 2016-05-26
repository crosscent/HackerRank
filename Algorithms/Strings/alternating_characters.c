#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int deleteCount(char *string) {
    char character = string[0];
    long int len;
    int count = 0;
    len = strlen(string);
    for (int k = 1; k < len; k++) {
        if (string[k] == character) {
            count++;
        } else { 
            character = string[k];
        }
    }
    return count;
}
int main() {
    int cases;
    scanf("%d", &cases);

    char string[cases][100000];
    for (int i = 0; i < cases; i++){
        scanf("%s", string[i]);
        printf("%d\n", deleteCount(string[i]));
    }
    return 0;
}
