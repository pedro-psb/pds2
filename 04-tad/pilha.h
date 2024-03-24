typedef struct _Pilha Pilha;

/* Retorna ponteiro para pilha criada dinamicamente */
Pilha *pilha_cria(void);

/* Retira um elemento do topo de um Pilha @p */
int pilha_pop(Pilha *p);

/* Insere um elemento (int) @x no topo de uma Pilha @p */
void pilha_push(Pilha *p, int x);

/* Verifica se a Pilha @p está vazia.
 * 0: Não vazia
 * 1: Vazia
 */
int pilha_vazia(Pilha *p);

/* Libera a memória alocada para uma pilha @p. */
void pilha_libera(Pilha *p);
