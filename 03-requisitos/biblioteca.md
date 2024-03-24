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
