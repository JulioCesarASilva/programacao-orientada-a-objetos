# Cadastro de alunos e provas

Sistema de terminal que cadastra alunos, recebe as notas das provas B1 e B2,
calcula a média e informa a situação do aluno. Uma média maior que `5.0`
resulta em aprovação.

- `cpp/Prova.hpp` e `cpp/Prova.cpp`: representam uma prova e validam notas de
  `0.0` a `10.0`;
- `cpp/Aluno.hpp` e `cpp/Aluno.cpp`: armazenam o nome e duas provas, calculam a
  média e exibem o resultado;
- `cpp/main.cpp`: lê e valida os dados no terminal, permitindo cadastrar vários
  alunos até que seja digitado `sair`.

O exemplo pratica encapsulamento, construtores, composição de objetos,
separação entre interface e implementação e tratamento de exceções.

## Compilação e execução

A partir da pasta `cpp`, execute:

```bash
g++ main.cpp Aluno.cpp Prova.cpp -o ../../tmp/provas.bin
../../tmp/provas.bin
```

O executável é salvo na pasta temporária da aula para não misturar artefatos
de compilação com os códigos-fonte.
