#include <stdio.h>

void converteMaiuscula(char *str) {
    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 'a' + 'A';
        }
        str++;
    }

}

int main() {
    char str[] = "Olá PessoALL!";
    converteMaiuscula(str);
    printf("%s\n", str);
    return 0;

}