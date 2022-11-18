#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Onibus.h"

struct onibus { //estrutura do onibus
int codigo;
int vagas;
char origem[50];
char destino[50];
float passagens;
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
    printf("\n----Cadrastro do onibus----\n\n ");
    printf("Codigo do Onibus: ");
 	scanf("%d", &r->codigo);
	printf("A quantidade de Vagas que tem no Onibus: ");
	scanf("%d", &r->vagas);
	printf("Digite a origem do onibus: ");
	scanf(" %[^\n]", r->origem);
    printf("Digite o destino do onibus: ");
	scanf(" %[^\n]", r->destino);
    printf("Informe o valor da passagens: ");
	scanf("%f", &r->passagens);

 	FILE* arquivo = fopen("Reserva_de_Onibus.txt", "a"); //criando um arquivo
    if(arquivo == NULL){  //compararando para ver se o arquivo é nulo
        printf("Erro ao abrir o arquivo: "); // caso arquivo seja nulo eexibe ao usuario erro
        return 0; //abortando o proganma
    }
    fprintf(arquivo,"Codigo:%d\nVagas:%d\nOrigem do cliente:%s\nDestino do cliente%s\nValor da passagem: %.2f\n", r->codigo, r->vagas, r->origem, r->destino, r->passagens); //salvando os dados do usuario dentro do arquivo

    fclose(arquivo); //fechando o arquivo

return r; //retorna r
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

    printf("|codigo: %d |vagas: %d| origem: %s| destino:%s | passagens:%.2f|\n",p->dado->codigo, p->dado->vagas,
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
	
	for(p = l; p!=NULL; p=p->prox){
		if(p-> dado->codigo == elem){// verificando se dado vai ser igual a elemento
			return p;//retorna p
		}
	}
	return NULL;//caso nao achar o elemento
}

void editar(No *l){//editar os dados em que usuario informou anteriomente 
	int elemento = 0;
	
	printf("Digite o codigo para busca: ");
	scanf("%d", &elemento);

	No *p;//elemento auxilar para percorrer a lista 

	for(p=l; p!=NULL; p=p->prox){
		
		if(p->dado->codigo == elemento){

			printf("reserva encontrada!\n");
			printf("Codigo do onibus: ");
			scanf(" %d", &p->dado->codigo);
			printf("A quantidade de Vagas que tem no Onibus: ");
			scanf(" %d", &p->dado->vagas);
			printf("Digite a origem do cliente: ");
			scanf(" %[^\n]", p->dado->origem);
			printf("Digite o destino do cliente: ");
			scanf(" %[^\n]", p->dado->destino);
			printf("Informe o valor da passagens: ");
			scanf(" %f", &p->dado->passagens);
		}
	}
}

void disponibilidade(No *l){

	No *p;//variavel para para percorrer a lista

	char destino[100];//declaracao de variavel char que vai recebe destino do usuario
	char strucdestino[100];//variavel char para reserber destino alocado na struct
	char origem[100];
	char strucorigem[100];//variavel char para recebe origem alocado na struct
    int retorno;//declaracao da variavel para recebe retorno da funcao strcmp
	int retorno2;//declaracao da variavel para recebe retorno da funcao strcmp

    printf("Digite a origem desejada: ");//solicitar ao usuario a origem desejada
	scanf("%s", origem);
	printf("Digite o destino desejado: ");//solicitar ao usuario a destino desejado
	scanf("%s", destino);

	for(p=l; p!=NULL; p=p->prox){

		strcpy(strucdestino, p -> dado -> destino);//copiar o vetor char em outra
		retorno = strcmp(destino, strucdestino);//comparar dois vetores tipo char e retorna zero se forem iguais
		strcpy(strucorigem, p -> dado -> origem);//copiar o vetor char em outra
		retorno2 = strcmp(origem, strucorigem);	////comparar dois vetores tipo char e retorna zero se forem iguais

		if(retorno == 0 && retorno2 == 0){//condicao que serve para conferir se dois vetores retornos foram  iguais a zero

			printf("Total de vagas disponiveis no onibus: %d\n", p -> dado -> vagas);//mostra o resultado de vagas disponivel de onibus 

		}
	}
	

}


