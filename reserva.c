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
/*
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
