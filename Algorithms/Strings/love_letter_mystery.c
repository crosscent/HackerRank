#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int switchCount(char *string) {
    int len = strlen(string);
    int half = (len+1) / 2;
    int count = 0;
    for (int j = 0; j < half; j++) {
        if (string[j] == string[len-j-1]) {
            continue;
        } else {
             count += abs((string[j] - 'a') - (string[len-j-1] - 'a'));
        }
    }
    return count;
}

int main() {
    int cases;
    scanf("%d", &cases);

    char string[10000];
    for (int i = 0; i < cases; i ++) {
        scanf("%s", string);
        printf("%d\n", switchCount(string));
    }
    return 0;
}
