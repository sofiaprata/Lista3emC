#include <stdio.h>
#include <string.h>

#define TAM 80

int main(){
    char str1[TAM];
    char caractere;
    int encontrado;

    printf("Digite uma frase: \n");
    fgets(str1,sizeof(str1),stdin);

    str1[strcspn(str1, "\n")] = '\0';

    printf("Digite um caractere: \n");
    scanf(" %c", &caractere);

    

    for(int i = 0; str1[i] != '\0'; i++){
        if(str1[i] == caractere){
            encontrado = 1;
            break;
        }
    }

    if(encontrado){
        printf("O caractere %c está presente na string.", caractere);
    }else{
        printf("O caractere %c não está presente na string", caractere);
    }

    return 0;

}
