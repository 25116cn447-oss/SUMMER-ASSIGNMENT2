#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long maxPrime = -1;

    while(n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }

    for(long long i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    if(n > 2)
        maxPrime = n;

    printf("%lld", maxPrime);

    return 0;
}