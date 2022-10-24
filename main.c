/*  menu de entrada 
1-realizar reservas
2-excluir reservas
3-listar reservas
4-buscar reserva
5-editar reserva
6-consultar vagas disponiveis para uma dada origem - destino;
7-consultar quantitativo de passageiros
8-sair
*/
#include <stdio.h>
#include <stdlib.h>

#define titulo_opcao1 "realizar reservas"
#define titulo_opcao2 " excluir reservas"
#define titulo_opcao3 "listar reservas"
#define titulo_opcao4"buscar reservas"
#define titulo_opcao5 "editar reservas"
#define titulo_opcao6 "consultar vagas disponiveis para uma dada origem - destino"
#define titulo_opcao7 "consultar quantitativo de passageiros"
#define titulo_opcao8 "sair"

#define N_OPCOES 8
#define OPCAO '1'
#define OPCAO '2'
#define OPCAO '3'
#define OPCAO '4'
#define OPCAO '5'
#define OPCAO '6'
#define OPCAO '7'
#define OPCAO '8'

int main (void){
	char op;
	int saida = 0;
 do {
 	apresentandomenu(N_OPCOES, titulo_opcao1, titulo_opcao2, titulo_opcao3, titulo_opcao4, titulo_opcao5, titulo_opcao6, titulo_opcao7, titulo_opcao8 );
    switch (op){
    	
 		case OPCAO1 :
 		printf("realizar reservas");
 		break;
        case OPCAO2:
        printf("excluir reservas");
  	    break;
        case OPCAO3 :
 		printf("listar reservas");
 		break;
        case OPCAO4:
        printf("buscar reservas");
        break;
        case OPCAO5 :
 		printf("editar reservas");
 		break;
        case OPCAO6:
        printf("consultar vagas disponiveis para uma dada origem - destino");
        break;
        case OPCAO7 :	
 		printf("consultar quantitativo de passageiros");
 		break;
        case OPCAO8:	
        printf("sair");
        break;
        
}
 }while(!saida);
}
