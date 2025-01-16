#include "../Headers/includes.h"
#include "../Headers/leitura.h"
#include "../../TarefaB/Headers/cifra.h"

int main()
{
	char nome[TAM_CAMINHO] = "Geral/Lib/teste.txt";
	char* texto;
	arquivoParaString(nome, &texto); 
	printf("%s\n",texto);
	criptografar(100, texto);
	descriptografar(100, texto);
	FILE* criptografado = fopen("Out/criptografia.txt","r");
	FILE* descriptografado = fopen("Out/descriptografia.txt","r");
	char cripto,decripto;
	while((cripto = fgetc(criptografado))!= EOF)printf("%c",cripto);
	printf("\n");
	while((decripto=fgetc(descriptografado))!=EOF)printf("%c",decripto);
	free(texto);
	return 0;
}
