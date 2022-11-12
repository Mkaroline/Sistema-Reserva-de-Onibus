typedef struct oninus Onibus;
typedef struct lista Lista;

//função que cria uma lista vazia (NULL)
Lista* lst_cria(void);
Lista* l_insere(Lista* l);//lista para insire 
int lst_vazia(Lista *l);//função que cria uma lista vazia (NULL)
Lista* excluir(Lista* l, char* destino);
void l_listar(Lista*l);
Lista * l_busca(int elem, Lista* l);

 