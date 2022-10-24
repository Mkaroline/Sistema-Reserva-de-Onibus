#include <stdio.h>
#include <stdlib.h>
#include "passagem.h"
struct passagem{
	
	char nome[100];
	char origem[100];
	char destino[100];
    int numero_do_onibus;
};
struct no_passagem{
	 passagem dado;
	struct no_passagem *prox;
};
	struct lista_passagem{
		No_passagem* inicio;
	
};


