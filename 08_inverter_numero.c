// Leia um número inteiro e imprima ele invertido.
#include <stdio.h>
int main() {
    int n, inv = 0;
    scanf("%d", &n);
    while (n != 0) {
        inv = inv * 10 + n % 10;
        n /= 10;
    }
    printf("%d\n", inv);
    return 0;
}
