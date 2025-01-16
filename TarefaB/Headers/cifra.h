#ifndef CIFRA_H
#define CIFRA_H

#include "../../Geral/Headers/includes.h"

#define TAM_ALFABETO 53

typedef struct Alfabeto
{
	char simbolos[TAM_ALFABETO];
}
alfabeto;

// --------------- Cabeçalho das funções: -----------------------
void criptografar(int x, char* texto);
void descriptografar(int x, char* texto);
// --------------------------------------------------------------

#endif 
