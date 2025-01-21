#include "Algoritmos.h"

int main(){
    char texto[100];
    char padrao[100];

    printf("Digite o texto: ");
    scanf("%s", texto);

    printf("Digite o padrao: ");
    scanf("%s", padrao);

    if(forcaBruta(texto, padrao)){
        printf("Padrao encontrado!\n");
    }

    
}