#include <stdio.h>

void readWord(char str[], int max) {
    int c;
    int i = 0;

    do {
        c = getchar();
    } while (c == ' ' || c == '\n' || c == '\t');

    while (c != ' ' && c != '\n' && c != '\t' && c != EOF) {
        if (i < max - 1)
            str[i++] = c;
        c = getchar();
    }

    str[i] = '\0';
}
