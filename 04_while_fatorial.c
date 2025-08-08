// Calcule o fatorial de um número usando while.
#include <stdio.h>
int main() {
    int n;
    unsigned long long fat = 1;
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        fat *= i;
        i++;
    }
    printf("%llu\n", fat);
    return 0;
}
