// Leia um número inteiro e informe se é par ou ímpar usando if-else.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Par\n");
    else
        printf("Impar\n");
    return 0;
}
