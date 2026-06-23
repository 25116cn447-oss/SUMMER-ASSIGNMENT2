#include <stdio.h>

int main() {
    char str[200];
    int i, words = 1;

    gets(str);

    for(i=0; str[i]!='\0'; i++) {
        if(str[i] == ' ')
            words++;
    }

    printf("Total Words = %d", words);

    return 0;
}