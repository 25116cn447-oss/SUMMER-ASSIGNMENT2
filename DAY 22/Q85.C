#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    gets(str);
    len = strlen(str);

    for(i=0;i<len/2;i++) {
        if(str[i] != str[len-1-i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome String");
    else
        printf("Not Palindrome String");

    return 0;
}