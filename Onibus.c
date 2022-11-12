#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "onibus.h"

struct onibus {//estrutura do onibus
int numero;
int vagas;	
char origem[50];
char destino[50];
char passagens[50];
};

struct lista{//estrutura do no ou seja com as informacoes
	onibus dado;
	struct Lista *prox;
};

 onibus * preenche(void){

Onibus* r = (Onibus*)malloc(sizeof(Onibus));
 
    printf("Codigo do Onibus: ");
 	scanf(" %d",& r -> codigo);
	printf("A quantidade de Vagas que tem no Onibus: ");
	scanf(" %d", &r -> vagas);
	printf("Digite a origem do Cliente: ");
	scanf(" %[^\n]", r-> origem);
    printf("Digite o destino do Cliente: ");
	scanf(" %[^\n]", r-> destino);
    printf("O valor da passagens: ");
	scanf(" %[^\n]", r-> passagens);
}

Lista* lst_cria(void){//cria uma lista onde nao retorna nada
	return NULL;
}

Lista *l_inserir(Lista *l){
	
	Onibus* r = l_ensere(){
	 Lista *novo = (Lista*)malloc(sizeof(Lista));
	 novo -> dado = r;
	 novo -> prox = l;
	}
	 return novo;
}

int lst_vazia(Lista *l){
	return (l==NULL);
}


Lista * l_excluir(Lista *l, int codigo){//funcao de excluir que receber no prototipo uma lista e uma variavel
//primeiramente precisamos percorrer a lista e buscar o elemento que sera eliminado

    Lista *a = NULL;//ponteiro que serva para elemento anteriore 
	Lista *p =l;//ponteiro p que serve para percorrer o elemento da lista 

	     //analisar esse ponto while(strcmp(,p -> dado->!= 0));
	while(codigo,p -> dado->codigo!= 0){
		//desse caso ele ira procurar o elemento na lista e ja guardaando o anterior
		//o valor do no em que p passou o endereco se ele for diferente de r o laco vai continuar
	//desse modo ele so parar quando o elemento for encontrado.
	if ( p== NULL)
 	     return l; /* nao achou: retorna lista original */
        a = p;
        p = p->prox;//sera verificar se achou 
	}
	 if (a== NULL){//retira elemento do inicio
	 	l = p -> prox;
	  
	 }else{
	 	a -> prox = p -> prox;//caso nem das alternativa anteriores nao forem conrespondida,
	 	//sera retirado elemento do meio da lista 
	 }
  	free(p);//liberar espaco na memoria
  	
	return l;
  }

  