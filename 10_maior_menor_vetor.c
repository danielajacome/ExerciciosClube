// Leia N números e imprima o maior e o menor.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &vet[i]);
    int maior = vet[0], menor = vet[0];
    for (int i = 1; i < n; i++) {
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
    }
    printf("%d %d\n", maior, menor);
    return 0;
}
