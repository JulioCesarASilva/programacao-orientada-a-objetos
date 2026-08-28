# Exercício: cadastro de alunos e provas

O objetivo deste exercício é estudar o código-base que cadastra alunos e suas
notas e depois desenvolver uma versão melhorada. A melhoria ainda não foi
feita.

## Organização

```text
01-provas/
├── codigo-base/
│   └── cpp/
│       ├── Aluno.cpp
│       ├── Aluno.hpp
│       ├── Prova.cpp
│       ├── Prova.hpp
│       └── main.cpp
└── versao-melhorada/
    ├── README.md
    └── cpp/
```

- `codigo-base/`: contém o código original, mantido sem modificações;
- `versao-melhorada/`: está reservada para a versão que ainda será
  desenvolvida.

O sistema de terminal recebe as notas das provas B1 e B2, calcula a média e
informa a situação do aluno. Uma média maior que `5.0` resulta em aprovação.

- `cpp/Prova.hpp` e `cpp/Prova.cpp`: representam uma prova e validam notas de
  `0.0` a `10.0`;
- `cpp/Aluno.hpp` e `cpp/Aluno.cpp`: armazenam o nome e duas provas, calculam a
  média e exibem o resultado;
- `cpp/main.cpp`: lê e valida os dados no terminal, permitindo cadastrar vários
  alunos até que seja digitado `sair`.

O exemplo pratica encapsulamento, construtores, composição de objetos,
separação entre interface e implementação e tratamento de exceções.

## Compilação do código-base

A partir da pasta `01-provas`, execute:

```bash
g++ codigo-base/cpp/main.cpp codigo-base/cpp/Aluno.cpp \
    codigo-base/cpp/Prova.cpp -o ../tmp/provas.bin
../tmp/provas.bin
```

O executável é salvo na pasta temporária da aula para não misturar artefatos
de compilação com os códigos-fonte.
