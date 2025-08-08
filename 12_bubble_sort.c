// Leia N números, ordene com Bubble Sort e imprima.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int vet[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &vet[i]);
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (vet[j] > vet[j+1]) {
                int temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", vet[i]);
    printf("\n");
    return 0;
}
