// Leia um número N e calcule a soma dos números pares de 1 até N.
#include <stdio.h>
int main() {
    int n, soma = 0;
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2) {
        soma += i;
    }
    printf("%d\n", soma);
    return 0;
}
