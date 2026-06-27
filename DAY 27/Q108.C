#include <stdio.h>

int main() {
    char name[50];
    int m1, m2, m3, total;
    float percentage;

    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\n------ Marksheet ------\n");
    printf("Name       : %s\n", name);
    printf("Total      : %d\n", total);
    printf("Percentage : %.2f%%\n", percentage);

    if (percentage >= 60)
        printf("Division : First\n");
    else if (percentage >= 45)
        printf("Division : Second\n");
    else if (percentage >= 33)
        printf("Division : Third\n");
    else
        printf("Result : Fail\n");

    return 0;
}