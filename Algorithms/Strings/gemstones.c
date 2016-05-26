#include <stdio.h>
#include <string.h>

void gemCount(char *gemstones, char *alphabets) {
    char used[26] = {0};
    int len = strlen(gemstones);
    for (int k = 0; k < len; k++) {
        int index = gemstones[k] - 'a';
        if (used[index] == 0) {
            used[index] = 1;
            alphabets[index] += 1;
        }
    }
}

int main() {
    int count = 0;
    int lines;
    char alphabets[26] = {0};
    scanf("%d", &lines);

    for (int i = 0; i < lines; i++) {
        char gemstones[100];
        scanf("%s", gemstones);

        gemCount(gemstones, alphabets);
    }
    for (int j = 0; j < 26; j++) {
        if (alphabets[j] == lines) {
            count ++;
        }
    }
    printf("%d\n", count);
    return 0;
}
