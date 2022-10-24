#include <stdio.h>
#include <stdlib.h>
#include "reserva_de_onibus.h"

//estrutura da lista que sera criada
struct onibus {
	int codigo;
	int vagas;
	char origem [100];
	char destino [100];
	char  passagens [100];
    struct onibus *prox;
};











