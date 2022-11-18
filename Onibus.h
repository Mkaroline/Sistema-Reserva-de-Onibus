typedef struct onibus Onibus;
typedef struct no No;


Onibus* realizar(void);
No* l_cria(void);
No* l_insere(No* l);
int l_vazia(No *l);
No* l_excluir(No* l, int codigo);
void l_listar(No *l);
No *l_buscar(No *l);
void editar(No *l);
void disponibilidade(No *l);
