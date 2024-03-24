# Sistema de Gerenciamento de Biblioteca

## Introdução

O sistema proposto visa atender as demandas da Biblioteca Comunitária Aurora e da sua comunidade de usuários.

## Requisitos Funcionais

### Usuario: Consulta do acervo

- **O que**: Consulta dos livros cadastrados no acervo
- **Por que**: Permitir que o usuário encontre o livro que deseja de forma eficiente
- **Quando**: A qualquer momento
- **Onde**: No sistema online (website ou aplicativo)
- **Como**: Utilizando um campo de busca do sistema online 

### Usuario: Reservar livro

- **O que**: Reserva de um livro disponível no acervo por um tempo determinado
- **Por que**: Evitar a possivel frustração de sair de cada esperando encontrar um livro e ele já ter sido pego
- **Quando**: A qualquer momento
- **Onde**: No sistema online (website ou aplicativo)
- **Como**: Utilizando um botão/formulario de reserva na pagina do livro

### Usuario: Renovar emprestimo

- **O que**: Renovação do empréstimo de um livro cujo prazo esteja próximo de vencer
- **Por que**: Garantir a comodidade do usuário para poder terminar sua leitura sem ter de sair de casa
- **Quando**: Durante um determinado intervalo de tempo antes do fim do prazo do emprestimo
- **Onde**: No sistema online (website ou aplicativo)
- **Como**: Utilizando um botão/formulario de renovação na página do empresitmo

### Usuario: Inscrever-se em programa/evento

- **O que**: Inscrição em um programa/evento promovido pela biblioteca
- **Por que**: Para facilitar a organização (por parte da biblioteca) e garantir comodidade (por pare do usuário)
- **Quando**: Até o fim das vagas ou até um período determinado antes da realização do evento.
- **Onde**: No sistema online (website ou aplicativo)
- **Como**: Utilizando um botão/formulario de inscrição na pagina do evento

### Bibliotecario/Funcionario: Cadastrar livros

- **O que**: Cadastro dos livros que compõe o acervo da biblioteca
- **Por que**: Manter o inventário atualizado para que o resto do sistema funcione bem 
- **Quando**: Em horário comercial
- **Onde**: No sistema interno da biblioteca (website ou aplicativo)
- **Como**: Utilizando um formulário de cadastro de livros

## Requisitos não-funcionais

### Acessibilidade

- **O que**: Acessibilidade da interface (website e app) para usuario com deficiencia visual
- **Por que**: Garantir que toda a comunidade possa utilizar do novo sistema de forma igualitaria
- **Quando**: Durante todas as interações do usuario com o sistema
- **Onde**: No sistema online (website ou aplicativo)
- **Como**: Utilizando boas prática de desenvolvimento web voltadas para esse fim (como html semantico)

### Segurança

- **O que**: Segurança do sistema contra ataques maliciosos
- **Por que**: Para garantir o bom funcionamento e experiencia de usuarios a funcionarios
- **Quando**: Nas tentativas de chamadas a APIs restritas
- **Onde**: Principalmente no sistemas de controle de acesso aos sistemas (interno e publico)
- **Como**: Utilizando soluções robustas de autenticação e controle disponíveis

## Interface

Segue um rascunho da interface que poderia ser usada para suportar os requisitos definidos acima.

```c
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
```
