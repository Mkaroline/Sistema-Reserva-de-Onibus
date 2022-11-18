typedef struct passagens Passagens;
typedef  struct lista Lista;

Passagens* preenche(void);
Lista* lst_cria(void);
Lista* lst_insere(Lista* l);
int lst_vazia(Lista *l);
Lista* lst_excluir(Lista* l, char* np);
void lst_listar(Lista*l);
Lista * lst_buscar( Lista * l);
void edita(Lista *l);
void quantitativo(Lista*l);