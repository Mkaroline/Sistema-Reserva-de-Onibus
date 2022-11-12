typedef struct passagens Passagens;
typedef  struct lista Lista;

Passagem* preenche(void);
Lista* lst_cria(void);
Lista* lst_insere(Lista* l);
int lst_vazia(Lista *l);
void lst_listar(Lista*l);
Lista* lst_excluir(Lista* l, char* np);

Lista * lst_busca ( int numero, Lista * l);
