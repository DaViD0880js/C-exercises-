#include <stdio.h>

int main() {
    int s1, s2, s3, s4;

    int c1 = 1, c2 = 2, c3 = 3, c4 = 4;

    while (1) {
        printf("Digite a senha (4 numeros inteiros): ");
        scanf("%d %d %d %d", &s1, &s2, &s3, &s4);

        if (s1 == c1 && s2 == c2 && s3 == c3 && s4 == c4) {
            printf("Senha Correta\n");
            break;
        } else {
            printf("Senha Incorreta\n");
        }
    }

    return 0;
}
