typedef struct passagens Passagens;
typedef  struct lista Lista;

passagens* preenche(void);
Lista* lst_cria(void);
Lista* lst_insere(Lista* l);
int lst_vazia(Lista *l);
Lista* lst_excluir(Lista* l, char* np);