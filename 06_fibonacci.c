// Leia N e imprima os N primeiros termos da sequência de Fibonacci.
#include <stdio.h>
int main() {
    int n, t1 = 0, t2 = 1, prox;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", t1);
        prox = t1 + t2;
        t1 = t2;
        t2 = prox;
    }
    printf("\n");
    return 0;
}
