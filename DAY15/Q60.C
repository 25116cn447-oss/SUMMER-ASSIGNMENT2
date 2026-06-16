#include <stdio.h>

int main() {
    int n, i, j = 0;

    scanf("%d", &n);
    int arr[n], result[n];

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n; i++)
        if(arr[i] != 0)
            result[j++] = arr[i];

    while(j < n)
        result[j++] = 0;

    for(i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}