# Comparação de idades

Compara as idades de João e Maria usando `if` e `else`, exibindo quem é mais velho.

- `cpp/main.cpp`: antigo **Exemplo 01**, apresentado pelo professor.
- `java/Main.java`: antigo **Exemplo 02**, versão Java do mesmo problema.

Este exemplo permite comparar `std::cout` com `System.out.println` e observar a sintaxe semelhante das condicionais nas duas linguagens.

## Compilação e execução

Execute os comandos **a partir da pasta com os codigos de suas respectivas linguagens**:


### C++

```bash
g++ main.cpp -o ../../tpm/main.bin
../../tpm/main.bin
```

### Java

A partir da pasta deste exercício (`02-calculo-com-potencia`), entre na pasta que contém o arquivo `Main.java`:

```bash
javac -d ../../tmp Main.java
java -cp ../../tmp Main
```

O `javac` compila o código e salva o arquivo `Main.class` na pasta temporária.
Em seguida, o comando `java` executa a classe `Main` usando essa pasta no *classpath*.


Usar a pasta `tmp` para o arquivo compilado evita misturar artefatos de compilação com os códigos-fonte do repositório.
