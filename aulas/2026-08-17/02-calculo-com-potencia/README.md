# Cálculo com potência

Calcula o resultado de uma venda multiplicada por uma taxa elevada ao número de meses:

```text
resultado = venda × (taxa ^ meses)
```

- `cpp/main.cpp`: antigo **Exemplo 03**, apresentado pelo professor.
- `java/Main.java`: antigo **Exercício 01**, conversão para Java feita a partir do exemplo em C++.

A principal diferença observada é o uso de `pow` em C++ e `Math.pow` em Java.

## Compilação e execução

Execute os comandos **a partir da pasta com os codigos de suas respectivas linguagens**:

### C++

```bash
g++ main.cpp -o main.bin
./main.bin
```

### Java

A partir da pasta deste exercício (`02-calculo-com-potencia`), entre na pasta que contém o arquivo `Main.java`:

```bash
javac -d Main.java
java -cp Main
```

O `javac` compila o código e salva o arquivo `Main.class` na pasta temporária.
Em seguida, o comando `java` executa a classe `Main` usando essa pasta no *classpath*.