#include "../Headers/cifra.h"

void criptografar(int x, char* texto)
{
	alfabeto letras;
	strcpy(letras.simbolos,"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	int tamTexto = strlen(texto);
	int tamAlfabeto = strlen(letras.simbolos);
	int cifra = 0;
	
	for(int i = 0; i < tamTexto; i++)
	{
		if((texto[i] >= 65 && texto[i] <= 90) || (texto[i] >= 97 && texto[i] <= 122))
		{
			for(int j = 0; j < tamAlfabeto; j++)
			{
				if(texto[i] == letras.simbolos[j])
				{
					cifra = j + x;
					if(cifra < tamAlfabeto) texto[i] = letras.simbolos[cifra];
       					else texto[i] = letras.simbolos[cifra%tamAlfabeto];
					break;
				}
			}
		}
	}

	FILE* saida = fopen("Out/criptografia.txt","w");
	if(saida == NULL)
	{
		printf("Erro!\n");
		return;
	}
	for(int i = 0; i < tamTexto; i++) fprintf(saida,"%c",texto[i]);
	fclose(saida);
}

void descriptografar(int x, char* texto)
{
	alfabeto letras;
	strcpy(letras.simbolos,"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

	int tamTexto = strlen(texto);
	int tamAlfabeto = strlen(letras.simbolos);
	int cifra = 0;
	
	for(int i = 0; i < tamTexto; i++)
	{
		if((texto[i] >= 65 && texto[i] <= 90) || (texto[i] >= 97 && texto[i] <= 122))
		{
			for(int j = 0; j < tamAlfabeto; j++)
			{
				if(texto[i] == letras.simbolos[j])
				{
					cifra = (j - x)%tamAlfabeto;
					if(cifra < 0) cifra += tamAlfabeto;
					texto[i] = letras.simbolos[cifra];
					break;
				}
			}
		}

	}

	FILE* saida = fopen("Out/descriptografia.txt","w");
	if(saida == NULL)
	{
		printf("Erro!\n");
		return;
	}
	for(int i = 0; i < tamTexto; i++) fprintf(saida,"%c",texto[i]);
	fclose(saida);
}
