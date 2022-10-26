#include <stdio.h>
#include <stdlib.h>
#include "reserva.h"

struct reserva_de_onibus{//estrutura reserva de onubus onde tem o codigo
	//vagas, origem, destino, passagem do cliente;
	int codigo;
	int vagas;
	char origem[100];
	char destino[100];
	char passagem[100];
};
struct no{
	reserva_de_onibus dado;
	struct no*prox;
	};
	struct lista{
		no* inicio;
};

void tabela_reserva_de_onibus(){
	
	printf("       ESCOLHA A OPCAO   \n");
	printf("======================================\n");
	printf("  1- realizar reservas\t\n");
	printf(" 2- excluir reservas\t\n");
    printf(" 3- listar reservas\t\n");
   	printf(" 4- buscar reservas\t\n");
    printf(" 5- editar reservas\t\n");
 	printf(" 6- consultar vagas disponiveis para uma dada origem - destino\t\n");
    printf(" 7- consultar quantitativo de passageiros\t\n");
	printf(" 8- sair\t\n");	
}

void reserva(reserva_de_onibus dado *r){

	printf("codigo do cliente: ");
	scanf("%d",&r-> codigo);
	printf("A vaga que deseja: ");
	scanf("%d", &r->vagas);
	printf("A origem do cliente: ");
	scanf(" %[^\n]", r->origem);
    printf("O destino do cliente: ");
	scanf(" %[^\n]", r->destino);
    printf("A passagem: ");
	scanf(" %[^\n]", r->pasagem);
}
int excluir_reserva(reserva_de_onibus dado *r){	
	 if (r == NULL){
	return 1;
  }else {
	return 0;
  }
}

void listar_reservas(reserva_de_onibus dado *r){
}
void buscar_reservas(reserva_de_onibus dado *r){
	No*busca(Lista lista, int cod){
	for (p1 = p -> inici; p1 != NULL && p1-> dado.codigo != cod; p1 = p1->NULL){
		return p1;
	}
}
}
void editar_reservas(reserva_de_onibus dado *r){
}
void consultar_vagas_disponiveis(reserva_de_onibus dado *r){
}
void consultar_quantitativo_de_passageiros(reserva_de_onibus dado *r){
}
/*
void inserir_inicio(Listas *p,reserva_de_onibus dado){//serve para modificar a lista no inicio
	No* novo = (no*)malloc(sizeof(no));
	novo-> dado =dado;
	novo -> prox = p -> inicio;
	p -> inicio = novo;	
}

void inserir_fim(Listas *p, reserva_de_onibus dado){//serve para modificar a lista no fim
	No* novo = (No*)malloc(sizeof(No));
	novo-> dado = dado;
	novo -> prox = NULL;
	if (p-> inicio == NULL){
		p -> inicio*novo;
	}else{
		No* p1;
		for (p1 = p->inicio; p1-> prox!=NULL, p1=p1->prox);
		p1 -> prox = novo;
	}
	
}
No* inserir_apos(Lista *p, reserva_de_onibus dado, int cod ){
	No *p1;
	for (p1 = p->inicio; p1 != NULL && p1 ->dado.codigo != cod; p1 = p1->prox);
	if(p1 == NULL){
	return p1;
	}else{
		No *novo = (No*)malloc(sizeof(No));
			novo-> dado = dado;
	        novo -> prox = p1->prox;
	        p1->prox = novo;
	        return p1;
		
	}

}
No* inserir_antes(Lista *p, reserva_de_onibus dado, int cod){
	if (p -> inicio == NULL){
		return NULL;
		
	}else if (p -> dado.codigo == cod){
		No* novo = (*No)malloc(sizeof(No));
		novo -> dado = dado;
		novo-> prox = p -> inicio;
		p -> inicio = novo;
	}else{
	No* p1;
	for (p1 = p->inicio; p1-> prox != NULL && p1-> prox->dado.codigo != cod; p1=p1->prox);
	if (p1 -> prox);
	return NULL;
   else {
	   No* novo =(No*)malloc(sizeof(No));
	   novo -> dado = dado;
       novo-> prox = p1 -> prox;
       p1->prox = novo;
       return p1;
    }
 	
   }
}
void deletar_inicio (Lista *p){//excluir o inicio da lista
	if(p -> inicio==NULL){
		printf("LISTA DE RESERVA VAZIA\n");
   }else{
	   No* p1 = p1 -> inicio;
	   p -> inicio = p1->prox;
	   free (p1);   
   }
}
void deletar_fim (Lista *p){//excluir o fim da lista
	if(p -> inicio==NULL){
		printf("LISTA DE RESERVA VAZIA\n");
   }else if (p ->inicio -> prox == NULL){
	   No* p1 = p -> inicio;
	   p -> inicio = NULL;
	   free (p1);   
   }else{
	   No*p1;
	   No*pa;
	   for (p1 = p->inicio; p1->prox != NULL; p1=p1->prox){
	   pa = p1;
   }
   pa -> prox =NULL;
   free (p);
 }
}
void deletar_antes(Lista *p, int cod){
	if (p->inicio ==NULL){
		printf("Lista de reserva vazia\n");
	}
	No*paa = NULL;
	No* = NULL;
	for (p1 = p -> inici; p1 != NULL && p1-> dado.codigo != cod; p1 = p1->NULL){
		paa = pa;
		pa = p1;

	}
	if (p1 == NULL ){
		printf("reserva nao pode ser removido\n");
	}else if (pa == NULL){
		printf("reserva nao pode ser removido\n");
	}else if (paa = NULL){
		p -> inicio = p1;
		free (pa);
	}else {
		paa -> prox = p1;
		free(pa);
	}
}
void delete_lista(Lista *p){
	No *p1;
	while(p -> inicio != NULL){
		p1 = p -> inicio;
		p -> inicio = p1 -> prox;
		free (p1);
	}
}
int  excluir_reserva(Lista *r){
  if (r == NULL){
	return 1;
  }else {
	return 0;
  }
}
No*busca(Lista lista, int cod){
	for (p1 = p -> inici; p1 != NULL && p1-> dado.codigo != cod; p1 = p1->NULL){
		return p1;
	}
}*/