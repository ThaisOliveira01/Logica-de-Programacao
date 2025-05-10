#include <stdio.h>


int comparar(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] < s2[i]) return -1;
        if (s1[i] > s2[i]) return 1;
        i++;
    }

    if (s1[i] == '\0' && s2[i] != '\0') return -1;
    if (s2[i] == '\0' && s1[i] != '\0') return 1;
    return 0;
}


void trocar(char s1[], char s2[]) {
    char temp[50];
    int i = 0;
    while (s1[i] != '\0') {
        temp[i] = s1[i];
        i++;
    }
    temp[i] = '\0';

    i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';

    i = 0;
    while (temp[i] != '\0') {
        s2[i] = temp[i];
        i++;
    }
    s2[i] = '\0';
}

int main() {
    char a[50], b[50], c[50];

    printf("Digite a primeira palavra: ");
    scanf("%s", a);
    printf("Digite a segunda palavra: ");
    scanf("%s", b);
    printf("Digite a terceira palavra: ");
    scanf("%s", c);


    if (comparar(a, b) > 0) trocar(a, b);
    if (comparar(a, c) > 0) trocar(a, c);
    if (comparar(b, c) > 0) trocar(b, c);

    printf("\nEm ordem alfabetica:\n");
    printf("%s\n%s\n%s\n", a, b, c);

    return 0;
}
