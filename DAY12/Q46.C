#include <stdio.h>
#include <math.h>

int armstrong(int n) {
    int sum = 0, temp = n, digits = 0, rem;
    int t = n;

    while(t) {
        digits++;
        t /= 10;
    }

    while(temp) {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    return sum == n;
}

int main() {
    int n;
    scanf("%d", &n);

    if(armstrong(n))
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}