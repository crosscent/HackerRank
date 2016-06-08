#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int switchCount(char *string) {
    int length = strlen(string);
    int left[26] = {0};
    int right[26] = {0};
    int count = 0;
    if (length % 2 !=0) {
        return -1;
    }

    for (int i = 0; i < length / 2; i++) {
        left[string[i] - 'a'] +=1;
        right[string[(length / 2) + i] - 'a'] +=1;
    }
    for (int k = 0; k < 26; k++) {
        if (left[k] != right[k]) {
            count += abs(left[k] - right[k]);
        }
    }
    return count/2;
}

int main () {
    int cases;
    scanf("%d", &cases);

    for (int i = 0; i < cases; i++) {
        char string[10000];
        scanf("%s", string);
        printf("%d\n", switchCount(string));
    }

    return 0;
}
