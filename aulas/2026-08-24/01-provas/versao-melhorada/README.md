# Versão melhorada

Esta versão transforma o exemplo de provas em um sistema de cadastro de
alunos. Os dados são mantidos em uma lista e salvos em arquivo binário.

## Funcionalidades

- adicionar alunos com nome e notas de B1 e B2;
- remover um aluno pelo nome;
- listar os alunos cadastrados, com média e situação;
- salvar os dados manualmente ou ao encerrar o programa;
- carregar automaticamente os dados salvos na próxima execução.

## Compilação e execução

Execute os comandos **a partir da pasta com os codigos de suas respectivas linguagens**:

### C++

```bash
g++ main.cpp Aluno.cpp Prova.cpp ListaAlunos.cpp -o provas
./provas
```