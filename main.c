    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <windows.h>
    #include "Onibus.c"
    #include "Passagens.c"

   
    #define TITULO_OPCAO1 " Realizar reservas "
    #define TITULO_OPCAO2 " Excluir reservas "
    #define TITULO_OPCAO3 " Listar reservas "
    #define TITULO_OPCAO4 " Buscar reservas "
    #define TITULO_OPCAO5 " Editar reservas "
    #define TITULO_OPCAO6 " Consultar vagas disponiveis para uma dada origem - Destino "
    #define TITULO_OPCAO7 " Consultar quantitativo de passageiros "
    #define TITULO_OPCAO8 " Saida do programa "


    #define N_OPCOES 8
    #define OPCAO1 '1'
    #define OPCAO2 '2'
    #define OPCAO3 '3'
    #define OPCAO4 '4'
    #define OPCAO5 '5'
    #define OPCAO6 '6'
    #define OPCAO7 '7'
    #define OPCAO8 '8'

    /****
    * Função: LimpaBuffer()
    * Descrição: Lê e descarta caracteres encontrados na entrada
    * Parâmetros: Nenhum
    * Retorno: Nada
    ****/
    void LimpaBuffer(void) {
        int valorLido; /* valorLido deve ser int! */
        do {
            valorLido = getchar();
        } while ((valorLido != '\n') && (valorLido != EOF));
    }
    /****
    * Função: LeOpcao()
    * Descrição: Lê e valida a opção digitada pelo usuário
    * Parâmetros:
    *   menorValor (entrada): o menor valor válido
    *   maiorValor (entrada): o maior valor válido
    * Retorno: A opção lida é validada
    ****/
    int LeOpcao() {

        int r, ret2, n1, letra;

        r = 0;
        while (r != 1)
        {

            printf("\nDigite sua opcao: ");
            ret2 = scanf("%d", &n1);

            if (n1 >= 1 && n1 <= 8)
            {

                r = ret2;
            }

            if (r == 0)
            {
                printf("\nOpcao invalida. Tente novamente.");
                printf("\nA opcao deve estar entre 1 e 8. \n");
            }

            letra = 0;
            while (letra != '\n')
            {

                letra = getchar();
            }

            printf("\n");
        }

        return n1;

    }

    /****
    * Função: ApresentaMenu
    * Descrição: Apresenta menu com número indeterminado de opções
    * Parâmetros:
    *   nItens (entrada): número de itens no menu
    *   menorOpcao (entrada): caractere associado ao item I
    * Retorno: Nada
    ****/
    void ApresentaMenu(int nItens, int menorOpcao, ...) {
        int i;
        va_list argumentos;
        /* Inicia lista de argumentos variáveis */
        va_start(argumentos, menorOpcao);
        /* Lê cada argumento e imprime na tela. Note que o */
        /* tipo de cada argumento é char *, que é o tipo que */
        /* representa strings em C */
        for(i = 0; i < nItens; ++i) {
            printf("%c-%s\n", menorOpcao++, va_arg(argumentos, char *));
        }
        va_end(argumentos);/* Encerra processamento de argumentos */
    }

    int main(void) {
        unsigned char op;//variavel para armazenar a opcao digitada pelo usuario
        unsigned int saida = 0;
        No * lista_de_onibus = l_cria();
        Lista * passagens_de_onibus = lst_cria();
        int cod, escolha, cont;
        char nomep [50];
        
    

        do {
            ApresentaMenu(N_OPCOES, OPCAO1,
                        TITULO_OPCAO1, TITULO_OPCAO2,
                        TITULO_OPCAO3, TITULO_OPCAO4,TITULO_OPCAO5, TITULO_OPCAO6,TITULO_OPCAO7,TITULO_OPCAO8);
            
                    op = LeOpcao();
            
            switch(op) {
               

                case 1:
                    Beep(1000,500);
                
                
                    printf("          REALIZAR  RESERVA              \n ");
                    printf("\n");
                    
                    lista_de_onibus = l_insere(lista_de_onibus);
                    printf("\n");
                    passagens_de_onibus =  lst_insere(passagens_de_onibus);
                    printf("\n");
                    break;
                
                case 2:
                Beep(1000,500);
                        
                    printf("    EXCLUIR  RESERVA  \n");
                    printf("\n");
                    
  
                    printf("Digite o codigo do onibus que Deseja excluir\n");
                    scanf("%d", &cod);
                    printf("\n");
                    lista_de_onibus = l_excluir(lista_de_onibus, cod);
                    printf("\n");

                    printf("Digite o nome do passageiro que deseja excluir\n");
                    scanf(" %[^\n]", nomep);
                    printf("\n");
                    passagens_de_onibus= lst_excluir(passagens_de_onibus,  nomep);

                    printf("\n");
                    break;

                case 3:
                    Beep(1000,500);
                    
                    printf("        LISTA RESERVA         \n");
                    printf("\n");
                    l_listar(lista_de_onibus ); 
                    lst_listar(passagens_de_onibus);
                    printf("\n");
                    break;
                    
                case 4:
                    Beep(1000,500);
                    
                    printf("              BUSCAR  RESERVA             \n ");
                    printf("\n");
                        

                lista_de_onibus = l_buscar(lista_de_onibus);
            
                if (lista_de_onibus != NULL){

                    printf("RESERVA ENCONTRADA \n");
                
                    printf("codigo do onibus: %d\n",lista_de_onibus->dado->codigo);
                    printf("vagas do onibus: %d\n",lista_de_onibus->dado->vagas);
                    printf("origem do onibus : %s\n",lista_de_onibus->dado->origem);
                    printf("destino do onibus : %s\n",lista_de_onibus->dado->destino);
                    printf("o valor da passagens do onibus : %f\n",lista_de_onibus->dado->passagens);

                }

                else{

                    printf("Reserva nao encontrada\n");
                   
                }

                passagens_de_onibus = lst_buscar(passagens_de_onibus);

                if (passagens_de_onibus != NULL){
                    printf("RESERVA ENCONTRADA \n"); 
    
                    printf("nome do passageiro: %s\n",passagens_de_onibus->info->np);
                    printf("origem do passageiro : %s\n",passagens_de_onibus->info->origem);
                    printf("destino do passageiro : %s\n",passagens_de_onibus->info->destino);
                    printf("numero do onibus: %d\n",passagens_de_onibus->info->numero);

                }
                else{
                    printf("Reserva nao encontrada !\n");
                }

                    printf("\n");
                    break;

                case 5:

                    Beep(1000,500);

                    printf("              EDITAR  RESERVA             \n ");        
                    printf("\n");
                    editar(lista_de_onibus);
                    printf("\n");
                    edita(passagens_de_onibus);
                    printf("\n");
                    break;

                 case 6:

                    Beep(1000,500);
                                                                        
                    printf("    CONSULTAR VAGAS DISPONIVEL PARA UMA DADA ORIGEM - DESTINO  \n ");
                    printf("\n");
                    
                    disponibilidade(lista_de_onibus);
                    printf("\n");
                    break;

                case 7:
                    Beep(1000,500);
                    
                    printf("    CONSULTAR QUANTITATIVO DE PASSAGUEIROS    \n ");
                    printf("\n");
                    

                    quantitativo(passagens_de_onibus);
                    printf("\n");

                    break;

                case 8:
                        
                    printf("                SAIR                 \n ");
                    printf("\n");
                    
                    saida = 1;

                    printf("Obrigado por usar este programa feito por Karoline E Raimundo");
                    printf("\n");
                    break;

                default:
                    printf("Este programa possui um bug.");
                    return 1;
            }
            
        } while(!saida);

        return 0;
    }