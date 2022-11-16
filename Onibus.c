#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "onibus.h"

struct onibus {//estrutura do onibus
int codigo;
int vagas;	
char origem[50];
char destino[50];
char passagens[50];
};

struct lista{//estrutura do no ou seja com as informacoes
	onibus dado;
	struct Lista *prox;
};

Onibus* preenche(void){
Onibus* r = (Onibus*)malloc(sizeof(Onibus));//alocar a memoria 
 if (r == NULL){
	printf("Erro alocar a memoria \n");
	exit (1);
 }
    printf("Codigo do Onibus: ");
 	scanf(" %d", &r->codigo);
	printf("A quantidade de Vagas que tem no Onibus: ");
	scanf(" %d", &r->vagas);
	printf("Digite a origem do Cliente: ");
	scanf(" %[^\n]", r->origem);
    printf("Digite o destino do Cliente: ");
	scanf(" %[^\n]", r->destino);
    printf("Informe a passagens: ");
	scanf(" %[^\n]", r->passagens);

	return r;//retornar r
}


Lista* lst_cria(void){//cria uma lista onde nao retorna nada
	return NULL;
}

Lista *l_inserir(Lista *l){

	Onibus* r = l_ensere(){
	 Lista *novo = (Lista*)malloc(sizeof(Lista));//alocar dinamicamente a lista
	 novo -> dado = r;//novo acessa os dado onde r receberar
	 novo -> prox = l;//novo acessa proximp onde l receberar
	}
	 return novo;//retorna novo
}

int lst_vazia(Lista *l){//lista  vazia
	return (l==NULL);
}

Lista * l_excluir(Lista *l, int codigo){//funcao de excluir que receber no prototipo uma lista e uma variavel
//primeiramente precisamos percorrer a lista e buscar o elemento que sera eliminado

    Lista *a = NULL;//ponteiro que serva para elemento anteriore 
	Lista *p =l;//ponteiro p que serve para percorrer o elemento da lista 


	while(codigo,p -> dado->codigo != 0){
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

//funcao que pecorrer os elementos da lista 
void l_listar(Lista *l){//imprimir as informacoes dado pelo usuarios
	Lista*p;//variavel auxiliar para percorrer a lista 
	
	//percorrer a lista 
	for(p=l; p!=NULL; p=p->prox){//p eh o primeiro elemento da lista , enquanto 
//p for difernete e igaula NULL, p aponta para o proximo elemento da lista
		printf("Dado = %d \n", p->dado);//onde pode acessar a informacao 
	}
}

//funcao que buscar um elemento na lista 
Lista *l_buscar(Lista *l, int elem){
	Lista *p;//varavel auxiliar para percorrer a lista 
	for(p = l; p!=NULL; p=p->prox){//se p for igual a l entao verifica se p for diferente de NULL entao p acessa o proximo elemento da lista
		if(p-> dado == elem){// verificando se dado vai ser igual a elemento
			return p;//retorna p
		}
	}
	return NULL;//caso nao achar o elemento
}
Lista *l_editar(Lista *l){

         
}









  