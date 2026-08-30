# Exercício: cadastro de alunos e provas

O objetivo deste exercício é estudar o código-base que cadastra alunos e suas
notas e depois desenvolver uma versão melhorada com uma lista de alunos.

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
        ├── Aluno.cpp
        ├── Aluno.hpp
        ├── ListaAlunos.cpp
        ├── ListaAlunos.hpp
        ├── Prova.cpp
        ├── Prova.hpp
        └── main.cpp
```

- `codigo-base/`: contém o código original, mantido sem modificações;
- `versao-melhorada/`: permite adicionar, remover e listar os alunos, além de
  salvar os dados em arquivo.

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

## Melhorias desenvolvidas

A versão melhorada utiliza `ListaAlunos` para guardar os alunos durante a
execução. Pelo menu, é possível:

- adicionar um aluno com as notas de B1 e B2;
- remover um aluno pelo nome;
- listar todos os alunos cadastrados;
- salvar e carregar os dados automaticamente pelo arquivo `alunos.dat`.