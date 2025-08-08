// Leia um número e informe se ele é primo.
#include <stdio.h>
int main() {
    int n, primo = 1;
    scanf("%d", &n);
    if (n <= 1) primo = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primo = 0;
            break;
        }
    }
    if (primo)
        printf("Primo\n");
    else
        printf("Nao primo\n");
    return 0;
}
