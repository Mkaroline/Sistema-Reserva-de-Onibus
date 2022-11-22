	#include<stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include "Onibus.h"

	struct onibus { 
		//estrutura do onibus
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
		
	Onibus *r = (Onibus*)malloc(sizeof(Onibus));

	if (r == NULL){
		printf("Erro alocar a memoria \n");
		exit (1);
	}
		printf("\n----Cadrastro do onibus----\n\n");
		printf("Codigo do Onibus: \n");
		scanf("%d", &r->codigo);
		printf("A quantidade de Vagas que tem no Onibus: \n");
		scanf("%d", &r->vagas);
		printf("Digite a origem do onibus: \n");
		scanf(" %[^\n]", r->origem);
		printf("Digite o destino do onibus: \n");
		scanf(" %[^\n]", r->destino);
		printf("Informe o valor da passagens: \n");
		scanf("%f", &r->passagens);

		FILE* arquivo = fopen("Reserva_de_Onibus.txt", "a"); 
		if(arquivo == NULL){  
			printf("Erro ao abrir o arquivo: "); 
			return 0; 
		}
		fprintf(arquivo,"Codigo :%d\nVagas :%d\nOrigem do cliente :%s\n Destino do cliente :%s\n Valor da passagem :%.2f\n", r->codigo, r->vagas, r->origem, r->destino, r->passagens); //salvando os dados do usuario dentro do arquivo
       
	   printf("Dados guardados com sucesso no arquivo Reserva_de_Onibus.txt !\n");
	   printf("\n");
		fclose(arquivo); 
       
	return r; 
	}

	No* l_cria(void){
		return NULL;
	}

	No *l_insere(No *l){

		Onibus* r = realizar();
		No *novo = (No*)malloc(sizeof(No));
		novo -> dado = r;
		novo -> prox = l;
		return novo;
	}

	int l_vazia(No *l){
		return (l==NULL);
	}

	No * l_excluir(No *l, int codigo){

		No *a = NULL;
		No *p = l;
		while(p -> dado->codigo != codigo){
			
		if ( p== NULL)
			return l;  
			a = p;
			p = p->prox;
		}
		if (a== NULL){
			l = p -> prox;

		}else{
			a -> prox = p -> prox;
			
		}
		free(p);

		return l;
	}


	void l_listar(No *l){
		No*p;

		for(p=l; p!=NULL; p=p->prox){

		printf("|codigo: %d |vagas: %d | origem: %s | destino: %s | passagens: %.2f |\n",p->dado->codigo, p->dado->vagas,
		p->dado->origem, p->dado->destino, p->dado->passagens);
        printf("\n");
		}
	}


	No *l_buscar(No *l)
	{
		int elem;
		printf("Digite o codigo que deseja buscar: ");
		scanf("%d",&elem);
        printf("\n");

		No *p;
		
		for(p = l; p!=NULL; p=p->prox){
			if(p-> dado->codigo == elem){
				return p;
			}
		}

		return NULL;
	}

	void editar(No *l){
		int elemento = 0;
		
		printf("Digite o codigo para busca: ");
		scanf("%d", &elemento);
        printf("\n");

		No *p;

		for(p=l; p!=NULL; p=p->prox){
			
			if(p->dado->codigo == elemento){

				printf("reserva encontrada!\n");
				printf("Digite o novo Codigo do onibus: ");
				scanf(" %d", &p->dado->codigo);
				printf("A nova  quantidade de Vagas que tem no Onibus: ");
				scanf(" %d", &p->dado->vagas);
				printf("Digite a nova origem do cliente: ");
				scanf(" %[^\n]", p->dado->origem);
				printf("Digite o novo destino do cliente:  ");
				scanf(" %[^\n]", p->dado->destino);
				printf("Informe o novo valor da passagens:  ");
				scanf(" %f", &p->dado->passagens);

			}
		}
	}
	void disponibilidade(No *l){

		No *p;

		char destino[100];
		char strucdestino[100];
		char origem[100];
		char strucorigem[100];
		int retorno;
		int retorno2;

		printf("Digite a origem desejada: ");
		scanf(" %[^\n]", origem);
		printf("Digite o destino desejado: ");
		scanf(" %[^\n]", destino);

		for(p=l; p!=NULL; p=p->prox){

			strcpy(strucdestino, p -> dado -> destino);
			retorno = strcmp(destino, strucdestino);
			strcpy(strucorigem, p -> dado -> origem);
			retorno2 = strcmp(origem, strucorigem);

			if(retorno == 0 && retorno2 == 0){

				printf("Total de vagas disponiveis no onibus: %d\n", p -> dado -> vagas);
			}
		}
	}
	