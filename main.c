#include <stdio.h>
#include <stdlib.h>
#include "reserva.h"


void menu_reserva(){
    printf(" ESCOLHA A OPCAO \t\n");
    printf("\t 1- RESERVA ONIBUS \t\n");
   /* printf("\t 2- RESERVA DE PASSAGEM \t\n");*/
    printf("\t 3 - SAIR \t\n");
}

int main(){
    int op ;
    menu_reserva();
    scanf("%d",&op);
    while(op != & 3){
        if (op == 1){
            main_reserva();
        }
        /*if (op != 2){
            main_passagem();
        }*/
        system ("pause");
        system ("cls");
        menu_reserva();
        scanf("%d",&op);
    }
    return 0;
}