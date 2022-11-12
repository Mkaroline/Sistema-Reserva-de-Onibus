typedef struct oninus Onibus;
typedef struct lista Lista;

//função que cria uma lista vazia (NULL)
 onibus * preenche();
Lista* lst_cria(void);
Lista* l_insere(Lista* l);//lista para insire 
int lst_vazia(Lista *l);//função que cria uma lista vazia (NULL)
Lista* excluir(Lista* l, int codigo);
void l_listar(Lista*l);
Lista *l_buscar(Lista *l, int elem);



 