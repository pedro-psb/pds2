typedef struct Elemento {
  int valor;
  struct Elemento *anterior;
} Elemento;

typedef struct Pilha {
  Elemento *topo;
} Pilha;

/* Retorna ponteiro para @pilha criada dinamicamente */
Pilha *pilhaCria(void);

/* Retira um elemento do topo de um @pilha */
int pilhaPop(Pilha *pilha);

/* Insere um elemento (int) @valor no topo de uma @pilha */
void pilhaPush(Pilha *pilha, int valor);

/* Verifica se a @pilha está vazia.
 * 0: Não vazia
 * 1: Vazia
 */
int pilhaVazia(Pilha *pilha);

/* Libera a memória alocada para uma @pilha. */
void pilhaImprime(Pilha *pilha);

/* Libera a memória alocada para uma @pilha. */
void pilhaLibera(Pilha *pilha);
