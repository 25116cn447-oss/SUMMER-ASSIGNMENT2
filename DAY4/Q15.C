#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0;
    int sum = 0;

    scanf("%d", &n);
    temp = n;

    while(temp) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }

    if(sum == n)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}