/**
 * A representação de um livro.
 * E.g. nome, isbn, autor, edição, etc
 */
typedef struct Livro Livro;

/**
 * A representação de um formulario com dados vindos do usuario para criar
 * livro.
 */
typedef struct LivroForm LivroForm;

/**
 * A representação do identificador único de um livro.
 * E.g. uuid, isbn, ?
 */
typedef struct ListaLivro ListaLivro;

/**
 * A representação da reserva de um livro.
 * E.g. validade da reserva, usuario que solicitou, qual livro, etc
 */
typedef struct ReservaLivro ReservaLivro;

/**
 * A representação do emprestimo de um livro.
 * E.g. intervalo do empresitmo, usuario que pegou, qual livro, etc
 */
typedef struct EmprestimoLivro EmprestimoLivro;

/**
 * A representação de uma coleção de livros.
 * E.g. o acervo de uma unidade de uma biblioteca.
 */
typedef struct LivroColecao LivroColecao;

/**
 * A representação de resultado da tentativa de cadastrar um livro.
 * E.g. sucesso, erro (livro já existe, não há mais espaço para livros, etc)
 */
typedef struct ResultadoCadastro ResultadoCadastro;

/**
 * A representação de um livro.
 # E.g. nome, isbn, autor, edição, etc
 */
typedef struct FiltroDePesquisa FiltroDePesquisa;

/**
 * A representação de um usuario da biblioteca.
 # E.g. nome, cpf, endereço, data nascimento, ...
 */
typedef struct Usuario Usuario;

/**
 * A representação de um funcionario da biblioteca.
 # E.g. nome, cpf, endereço, data nascimento, contrato de trabalho, ...
 */
typedef struct Funcionario Funcionario;

// --------- //
// Operações //
// --------- //

/**
 * Operação para criar um livro a partir de um formulario.
 *
 * @form: O formulario com dados para criar um livro
 * @return: Um livro com os dados fornecidos
 */
Livro criar_livro(LivroForm form);

/**
 * Operação para cadastar um livro emprestado.
 *
 * @acervo: O acervo em que o livro vai ser cadastrado
 * @livro: O livro a ser cadastrado
 * @funcionario: O funcionario que cadastrou o livro.
 * @return: ResultadoCadastro
 */
ResultadoCadastro cadastar_livro(LivroColecao acervo, Livro livro,
                                 Funcionario funcionario);

/**
 * Operação para resgatar livros do acervo usando criterios de pesquisa.
 *
 * @acervo: O acervo em que a pesquisa deve
 * @filtro: Os criterios para selecionar livros
 * @return: A lista de livros que se enquadram na seleção
 */
ListaLivro consultar_acervo(LivroColecao acervo, FiltroDePesquisa filtro);

/**
 * Operação para reservar um livro do acervo para um usuario.
 *
 * @acervo: O acervo em que o livro está localizado
 * @livro: O livro que deve o usuario quer reservar
 * @usuario: O usuario que deseja reservar um livro
 * @return: A reserva do livro
 */
ReservaLivro reservar_livro(LivroColecao acervo, Livro livro, Usuario usuario);

/**
 * Operação para reservar um livro do acervo para um usuario.
 *
 * @acervo: O acervo em que o livro está localizado
 * @livro: O livro que deve o usuario deseja pegar empresatdo
 * @usuario: O usuario que deseja pegar um livro
 * @return: A reserva do livro
 */
EmprestimoLivro realizar_empresitmo(LivroColecao acervo, Livro livro,
                                    Usuario usuario);

/**
 * Operação para renovar um livro emprestado.
 *
 * @emprestimo: O emprestimo a ser renovado
 * @return: Um novo emprestimo com os novos prazos
 */
EmprestimoLivro renovar_empresitmo(EmprestimoLivro emprestimo);
