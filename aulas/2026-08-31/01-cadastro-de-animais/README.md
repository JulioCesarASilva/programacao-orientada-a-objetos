# Exercício: cadastro de animais

João possui uma fazenda onde cria diversos animais e precisa de um sistema
simples para cadastrá-los. Os animais são classificados conforme sua
alimentação: ração, grama, carne ou onívora. O sistema deve permitir o cadastro
de até 100 animais.

O professor apresentou em sala o código inicial da classe `Animal` e propôs
que os alunos completassem o sistema.

## Código apresentado

- `codigo-apresentado/cpp/Animal.hpp`: declara o `enum Dieta` e a classe
  `Animal`, com nome, tipo, idade e alimentação;
- `codigo-apresentado/cpp/Animal.cpp`: implementa o construtor, os métodos de
  acesso e a exibição dos dados do animal.

## Parte a ser completada

O exercício pede a criação de uma classe `Cadastro`, responsável por armazenar
os animais e realizar as operações de um sistema CRUD:

- inserir um animal;
- pesquisar os animais cadastrados;
- atualizar um cadastro;
- remover um animal.

O professor indicou o uso de `std::vector` para armazenar os objetos. Os
arquivos atuais preservam apenas o código apresentado em sala; a implementação
da classe `Cadastro` faz parte da atividade.

## Compilação do código-base

Como o exercício ainda não possui um `main.cpp`.
