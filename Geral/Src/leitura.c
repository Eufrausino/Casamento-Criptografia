#include "../Headers/leitura.h"

void arquivoParaString(char* arquivo, char** texto)
{
	FILE* textoArquivo = fopen(arquivo, "r");
	if(textoArquivo == NULL)
	{
		printf("%s não existe!\n", arquivo);
		return;
	}
	
	fseek(textoArquivo, 0, SEEK_END);
	long tamArquivo = ftell(textoArquivo);
	fseek(textoArquivo, 0, SEEK_SET);
	int i = 0;
	char k;

	*texto = (char*)malloc((tamArquivo+1)*sizeof(char));

	while((k = fgetc(textoArquivo))!= EOF)
	{
		(*texto)[i] = k;
		i++;
	}

	fclose(textoArquivo);
}
