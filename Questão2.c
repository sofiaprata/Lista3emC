#include <stdio.h>
#include <string.h>

#define TAM 100

// 2. Faça um programa em C que leia uma string e um caractere do usuário e informe se a string de entrada contém o caractere fornecido.
void identificarcaractere() {
    char str[TAM];
    char caractere;
    int encontrado = 0;

    printf("Digite uma string (até 100 caracteres): \n");
    fgets(str, sizeof(str), stdin);

    // Remove o caractere de nova linha, se presente, após o fgets
    str[strcspn(str, "\n")] = '\0';

    printf("Digite um caractere: \n");
    // Limpa o buffer para evitar problemas com a leitura após o fgets
    getchar();  // Consome o '\n' restante do buffer
    scanf("%c", &caractere);

    // Verificando se o caractere está na string
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == caractere) {
            encontrado = 1;
            break;
        }
    }

    // Exibindo o resultado
    if (encontrado) {
        printf("O caractere '%c' foi encontrado na string '%s'.\n", caractere, str);
    } else {
        printf("O caractere '%c' não foi encontrado na string '%s'.\n", caractere, str);
    }
}

int main() {
    identificarcaractere();
    return 0;
}
