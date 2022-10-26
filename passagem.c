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
	struct lista_passagem {
		No_passagem* inicio;
	
};
void menu_passagem (){
	
	printf("       ESCOLHA A OPCAO   \n");
	printf("======================================\n");
	printf(" 1- realizar reservas\t\n");
	printf(" 2- excluir reservas\t\n");
    printf(" 3- listar reservas\t\n");
   	printf(" 4- buscar reservas\t\n");
    printf(" 5- editar reservas\t\n");
 	printf(" 6- consultar vagas disponiveis para uma dada origem - destino\t\n");
    printf(" 7- consultar quantitativo de passageiros\t\n");
	printf(" 8- sair\t\n");
	
}
void reserva(reserva_de_onibus dado *r){

	printf("Nome do cliente: ");
	scanf(" %[^/n]",&r-> nome);
	printf("Informe a Origem : ");
	scanf(" %[^/n]", &r->origem);
	printf("Informe o destino do cliente: ");
	scanf(" %[^\n]", r->destino);
    printf("Informe o numero do cliente: ");
	scanf(" %d", r->numero);
}




