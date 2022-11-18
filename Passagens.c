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
	Lista * prox;
};

Passagens* preenche(void){
	Passagens* p = (Passagens*)malloc(sizeof(Passagens));

	printf("\n----Cadrastro do passageiro----\n\n");

	printf("nome do passageiro:\n");
	scanf(" %[^\n]", p->np);
	printf("origem do passageiro:\n");
	scanf(" %[^\n]", p->origem);
	printf("destino do passageiro:\n");
	scanf(" %[^\n]", p->destino);
	printf("numero do onibus:\n");
	scanf("%d", &p->numero);

return p;
}

Lista* lst_cria(void){
	return NULL;
}

Lista* lst_insere(Lista* l){
	Passagens* p = preenche();
	Lista* novo = (Lista*)malloc(sizeof(Lista));
	novo -> info = p;
	novo -> prox = l;
	
return novo;
}

int lst_vazia(Lista *l){
	return (l==NULL);
}

Lista* lst_excluir(Lista* l, char* np){
	Lista* ant = NULL;
	Lista* p = l;

		while (strcmp(np, p->info->np)!= 0){
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

void lst_listar(Lista*l){
	Lista*p;
	for(p=l; p!=NULL; p=p->prox){
		 printf("| np : %s | origem: %s| destino: %s | numero : %d|\n",p->info->np,
	p->info->origem, p->info->destino, p->info->numero);
		
	}
}

 Lista * lst_buscar( Lista * l){
	int e;
 	Lista * p;
	printf("Digite o numero que deseja buscar:\n");
	scanf("%d",&e);
	//for (p=l; p!= NULL && p->info->numero != numero; p=p-> prox ){
		for(p = l; p!=NULL; p=p->prox){
	    if (p-> info->numero == e){
			return p;
	}
}
	return NULL ;
}
void edita(Lista *l){
	int elem = 0;
	
	printf("Digite o numero do onibus para busca: ");
	scanf("%d", &elem);

	Lista *p;//elemento auxilar para percorrer a lista 

	for(p=l; p!=NULL; p=p->prox){
		if(p->info->numero == elem){
			printf("reserva encontrada!\n");
			printf("nome do passageiro:\n");
			scanf(" %[^\n]", p->info->np);
			printf("origem do passageiro:\n");
			scanf(" %[^\n]", p->info->origem);
			printf("destino do passageiro:\n");
			scanf(" %[^\n]", p->info->destino);
			printf("numero do onibus:\n");
			scanf("%d", &p->info->numero);
		}
	}
}
void quantitativo(Lista * l){

Lista *p;

int cont = 0;

for(p=l; p!=NULL; p =p -> prox){
cont++;
}

printf("quantidade de passageiro eh: %d\n", cont);

}
