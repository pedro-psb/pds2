typedef struct _Node Node;
typedef struct _Fila Fila;

/* Cria uma estrutura de fila. */
Fila *fila_cria();

/* Insere valor no final da fila. Retorna valor inserido. */
int fila_insere(Fila *fila, int valor);

/* Remove valor do inicio da fila e o retorna.*/
int fila_remove(Fila *fila);

/* Confere se uma fila está vazia (0=F, 1=V). */
int fila_vazia(Fila *fila);

/* Imprime os valores da fila do inicio ao fim. */
void fila_imprime(Fila *fila);

/* Libera a memória utilizada por uma fila. */
void fila_libera(Fila *fila);
