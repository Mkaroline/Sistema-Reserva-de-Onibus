#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "passagens.h"

struct passagens{
	char np		[50];
	char origem [50];
	char destino[50];
	int numero;	
};

struct lista{
	Passagens* info; 
	struct lista * prox;
};

Passagens* preenche(void){
	Passagens* p = (Passagens*)malloc(sizeof(Passagens));
	printf("nome do passageiro:\n");
	scanf(" %[^\n]", p->np);
	printf("origem do passageiro:\n");
	scanf(" %[^\n]", p->origem);
	printf("destino do passageiro:\n");
	scanf(" %[^\n]", p->destino);
	printf("numero do onibus");
	scanf("%d", &p->numero);
return p;
}

Lista* lst_cria(void){
	return NULL;
}

Lista* lst_insere(Lista* l){
	Passagens* p = preenche(){
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo -> info = p;
	novo -> prox = l;
	}
return novo;
}

int lst_vazia(Lista *l){
	return (l==NULL);
}

void lst_listar(Lista*l){
	Lista*p;
	for(p=l; p!=NULL; p=p->prox){
		printf(" Info = %d \n", p->info);
	}
}

Lista* lst_excluir(Lista* l, char* np){
	Lista* ant = NULL;
	Lista* p = l;
	
		while (strcmp(np, p->info->np != 0)){
			if(p == NULL){
				return l;
			}
			ant = p;
			p = p->prox;
		}
		if(ant == NULL){
			l = p-> prox;
		}
		else
		{
			ant->prox = p-> prox;
		}	
	free(p);
	return l;		
}
