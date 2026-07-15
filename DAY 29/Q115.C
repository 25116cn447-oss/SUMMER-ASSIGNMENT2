#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do {
        printf("\n===== STRING MENU =====\n");
        printf("1. String Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Length = %lu\n", strlen(str));
            break;

        case 2:
        {
            char rev[100];
            strcpy(rev, str);
            strrev(rev);      // Works in Turbo C/Dev C++; may not be available in GCC
            printf("Reverse = %s\n", rev);
            break;
        }

        case 3:
        {
            char upper[100];
            int i;
            strcpy(upper, str);

            for(i = 0; upper[i] != '\0'; i++) {
                if(upper[i] >= 'a' && upper[i] <= 'z')
                    upper[i] = upper[i] - 32;
            }

            printf("Uppercase = %s\n", upper);
            break;
        }

        case 4:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}