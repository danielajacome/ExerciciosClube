// Leia uma string (sem espaços) e conte quantas vogais ela tem.
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[101];
    int vogais = 0;
    scanf("%100s", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vogais++;
    }
    printf("%d\n", vogais);
    return 0;
}
