#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Onibus.h"

struct onibus {//estrutura do onibus
int codigo;
int vagas;
char origem[50];
char destino[50];
int passagens;
};

struct no{//estrutura do no ou seja com as informacoes
	Onibus *dado;
	struct no *prox;
};


Onibus *realizar(void){
	
Onibus *r= (Onibus*)malloc(sizeof(Onibus));//alocar a memoria

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
    printf("Informe o valor da passagens: ");
	scanf(" %d", &r->passagens);

return r;//retorna r
}

No* l_cria(void){//cria uma lista onde nao retorna nada
	return NULL;
}

No *l_insere(No *l){

	Onibus* r = realizar();
	 No *novo = (No*)malloc(sizeof(No));//alocar dinamicamente a lista
	 novo -> dado = r;//novo acessa os dado onde r receberar
	 novo -> prox = l;//novo acessa proximp onde l receberar
	
	 return novo;//retorna novo
}

int l_vazia(No *l){//lista  vazia
	return (l==NULL);
}

No * l_excluir(No *l, int codigo){//funcao de excluir que receber no prototipo uma lista e uma variavel
//primeiramente precisamos percorrer a lista e buscar o elemento que sera eliminado

    No *a = NULL;//ponteiro que serva para elemento anteriore
	No *p = l;//ponteiro p que serve para percorrer o elemento da lista

	while(p -> dado->codigo != codigo){
		//desse caso ele ira procurar o elemento na lista e ja guardaando o anterior
		//o valor do no em que p passou o endereco se ele for diferente de r o laco vai continuar
	//desse modo ele so parar quando o elemento for encontrado.
	if ( p== NULL)
 	     return l; // nao achou: retorna lista original 
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
void l_listar(No *l){//imprimir as informacoes dado pelo usuarios
	No*p;//variavel auxiliar para percorrer a lista

	//percorrer a lista
	for(p=l; p!=NULL; p=p->prox){//p eh o primeiro elemento da lista , enquanto
//p for difernete e igual NULL, p aponta para o proximo elemento da lista

    printf("|codigo: %d |vagas: %d| origem: %s| destino:%s | passagens:%d|\n",p->dado->codigo, p->dado->vagas,
	p->dado->origem, p->dado->destino, p->dado->passagens);
//onde pode acessar a informacao
	}
}

//funcao que buscar um elemento na lista
 No *l_buscar(No *l)
 {
	int elem;
	printf("Digite o codigo que deseja buscar:\n");
	scanf("%d",&elem);

	 No *p;//variavel auxiliar para percorrer a lista

	//for(p = l; p!=NULL && p->dado->codigo != codigo; p=p->prox){//se p for igual a l entao verifica se p for diferente de NULL entao p acessa o proximo elemento da lista
	
	for(p = l; p!=NULL; p=p->prox){
		if(p-> dado->codigo == elem){// verificando se dado vai ser igual a elemento
			return p;//retorna p
		}
	}
	return NULL;//caso nao achar o elemento
}
/*
void editar(Onubus *r){
	int elemento = 0;
	printf("Digite o codigo para busca: ");
	scanf("%d", &elemento);
	
	Lista *p;
	for(p=l; p!=NULL; p=p->prox){
		if(p->numero == elemento){
			printf("reserva encontrada!\n");
			printf("Codigo do onibus: ");
			scanf(" %d", &p->codigo);
			printf("A quantidade de Vagas que tem no Onibus: ");
			scanf(" %d", &p->vagas);
			printf("Digite a origem do cliente: ");
			scanf(" %[^\n]", p->origem);
			printf("Digite o destino do cliente: ");
			scanf(" %[^\n]", p->destino);
			printf("Informe o valor da passagens: ");
			scanf(" %d", &l->passagens);
		}
	}
}*/



/*
void editar(No *l, int codigo, char destino[]){	
	struct No* p = l_buscar(*l, coodigo);
	if(p == NULL){
	printf("reserva nao encontrada\n");	
	}
	else{
		strcyp (p->dado->destino = destino);
		printf("Modificacao concluida\n");
	}
}



/*
void salvar_arquivo(Lista lista){
	FILE *file = fopen ("./reserva_salvos.b", "wb");
	struct No* p;
	for(p = l; p != NULL ; p = p->prox){
		fwrite(&p>dado, sizeof(Onibus), 1, file);
	}
	fclose(file);
}

*/