# Código-base

Este é o exemplo original usado para praticar classes, objetos e notas de
alunos. Ele foi mantido sem alterações para servir de comparação com a versão
melhorada.

## Como funciona

O programa pede o nome de um aluno e as notas de B1 e B2. Depois, calcula a
média e mostra se o aluno foi aprovado ou reprovado. Para encerrar, basta
digitar `sair` quando o programa pedir o nome.

As notas precisam estar entre `0` e `10`. Se for digitado outro valor ou um
texto no lugar da nota, o programa pede novamente.

## Arquivos

- `cpp/main.cpp`: conversa com a pessoa pelo terminal e cria os alunos;
- `cpp/Aluno.hpp` e `cpp/Aluno.cpp`: guardam o nome, as duas provas e fazem o
  cálculo da média;
- `cpp/Prova.hpp` e `cpp/Prova.cpp`: guardam e validam a nota de cada prova.

O aluno é aprovado quando a média é maior que `5.0`.
