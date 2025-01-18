#include "../Headers/includes.h"
#include "../Headers/leitura.h"
#include "../../TarefaB/Headers/cifra.h"

int main()
{
	//TarefaB - Chave aleatória
	srand(time(NULL));
	int chaveAleatoria = (rand()%1000)+1;
	printf("Chave Aleatória = %d\n", chaveAleatoria);
	
	//TarefaB - criptografia e descriptografia padrão
	//Arquivo -> string
	char nome[TAM_CAMINHO] = "Geral/Lib/test2.txt";
	char* texto;
	arquivoParaString(nome, &texto); 
	printf("oK\n");
	
	//Criptografia e descriptografia padrão
	char criptografia[50];
	char decriptografia[50];
	printf("Entre com o nome do arquivo de criptografia sem extensão: ");
	scanf("%s",criptografia);
	printf("\nEntre com o nome do arquivo de decriptografia sem extensão: ");
	scanf("%s",decriptografia);

	char* crypto = criptografar(100, texto, criptografia);
	char* decrypto = descriptografar(100, texto, decriptografia);

	FILE* criptografado = fopen(crypto,"r");
	FILE* descriptografado = fopen(decrypto,"r");

	//Exibição do conteúdo do arquivo criptografado e descriptografado padrão
	char cripto,decripto;
	while((cripto = fgetc(criptografado))!= EOF)printf("%c",cripto);
	printf("\n");
	while((decripto=fgetc(descriptografado))!=EOF)printf("%c",decripto);
	printf("ALEATORIO\n");	

	//Chave aleatória
	char KRYPTO[50];
	printf("Entre com o nome do arquivo de criptografia sem extensão: ");
	scanf("%s",KRYPTO);
	adivinhaChave(chaveAleatoria, texto, KRYPTO);

	//Liberação de memória
	free(texto);
	free(crypto);
	free(decrypto);
	return 0;
}
