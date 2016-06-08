#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isFunny(char *string) {

    int len = strlen(string);
    int half = (len) / 2 + 1;
    for (int j = 1; j < half; j++) {
        int s = abs((string[j] - 'a') - (string[j-1] - 'a'));
        int r = abs((string[len-j-1] - 'a') - (string[len-j] - 'a'));
        /*printf("s: %d\n", s);*/
        /*printf("r: %d\n", r);*/
        if (s == r) {
            continue;
        }
        else {
            return 0;
        }
    }
    return 1;
}

int main() {
    int cases;
    scanf("%d", &cases);

    char string[10000];
    for (int i = 0; i < cases; i++) {
        scanf("%s", string);
        if (isFunny(string) == 1) {
            printf("Funny\n");
        } else {
            printf("Not Funny\n");
        }
    }
    return 0;
}
