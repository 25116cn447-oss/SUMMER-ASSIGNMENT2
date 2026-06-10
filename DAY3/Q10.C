#include <stdio.h>
int main() {
    int a, b, flag;
    scanf("%d%d", &a, &b);

    for(int n = a; n <= b; n++) {
        flag = 1;
        if(n < 2) flag = 0;

        for(int i = 2; i * i <= n; i++) {
            if(n % i == 0) {
                flag = 0;
                break;
            }
        }

        if(flag)
            printf("%d ", n);
    }
    return 0;
}