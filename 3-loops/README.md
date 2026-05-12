# 3-loops

## Estruturas de Repetição

As estruturas de repetição permitem executar um bloco de código várias vezes enquanto uma condição for verdadeira.

---

## While

O `while` executa o bloco enquanto a condição for verdadeira.

### Sintaxe

```cpp
while (condicao) {
    // código
}
```

### Exemplo

```cpp
int i = 0;

while (i < 5) {
    cout << i << endl;
    i++;
}
```

## Funcionamento

1. A condição é verificada.
2. Se for `true`, o bloco é executado.
3. Ao final do bloco, a condição é verificada novamente.
4. O processo se repete até a condição ser `false`.

### Observação

Se a condição nunca se tornar falsa, ocorre um **loop infinito**.

```cpp
while (true) {
    // loop infinito
}
```

---

## Do...While

O `do...while` é parecido com o `while`, porém possui uma diferença importante:

* O bloco é executado pelo menos uma vez, mesmo que a condição seja falsa.

### Sintaxe

```cpp
do {
    // código
} while (condicao);
```

### Exemplo

```cpp
int i = 0;

do {
    cout << i << endl;
    i++;
} while (i < 5);
```

## Diferença entre while e do...while

### While

Primeiro verifica a condição.

```cpp
while (condicao) {
    //
}
```

### Do...While

Primeiro executa o bloco.

```cpp
do {
    //
} while (condicao);
```

---

## For

O `for` é usado quando já sabemos quantas vezes o loop deverá executar.

### Sintaxe

```cpp
for (inicializacao; condicao; incremento) {
    // código
}
```

### Estrutura

| Parte         | Função                             |
| ------------- | ---------------------------------- |
| Inicialização | Executa uma vez no início          |
| Condição      | Verifica se o loop continua        |
| Incremento    | Executa ao final de cada repetição |

### Exemplo

```cpp
for (int i = 0; i < 5; i++) {
    cout << i << endl;
}
```

### Funcionamento

1. Cria a variável (`int i = 0`)
2. Verifica a condição (`i < 5`)
3. Executa o bloco
4. Incrementa (`i++`)
5. Repete o processo

---

## Operadores de Incremento e Decremento

### Incremento (`++`)

Aumenta o valor da variável em 1.

```cpp
int x = 5;
x++;

cout << x; // 6
```

---

### Decremento (`--`)

Diminui o valor da variável em 1.

```cpp
int x = 5;
x--;

cout << x; // 4
```

---

## Operadores de Atribuição Composta

Permitem atualizar uma variável de forma simplificada.

| Operador | Equivalente     |
| -------- | --------------- |
| `+=`     | `x = x + valor` |
| `-=`     | `x = x - valor` |
| `*=`     | `x = x * valor` |
| `/=`     | `x = x / valor` |

### Exemplos

```cpp
int x = 10;

x += 5; // 15
x -= 3; // 12
x *= 2; // 24
x /= 4; // 6
```

---

## Break

O comando `break` interrompe imediatamente o loop.

### Exemplo

```cpp
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;
    }

    cout << i << endl;
}
```

### Saída

```txt
0
1
2
3
4
```

Quando `i` chega em `5`, o loop é encerrado.

---

## Continue

O comando `continue` pula a repetição atual e vai para a próxima.

### Exemplo

```cpp
for (int i = 0; i < 5; i++) {
    if (i == 2) {
        continue;
    }

    cout << i << endl;
}
```

### Saída

```txt
0
1
3
4
```

O valor `2` foi ignorado.

---

## Controle de Fluxo

Controle de fluxo é a forma como o programa decide:

* repetir,
* interromper,
* continuar,
* ou encerrar partes do código.

### Principais comandos

| Comando                      | Função                      |
| ---------------------------- | --------------------------- |
| `break`                      | Interrompe o loop           |
| `continue`                   | Pula para próxima repetição |
| `return`                     | Encerra a função            |
| `if/else`                    | Controle condicional        |
| `while`, `for`, `do...while` | Estruturas de repetição     |

---

## Boas Práticas

### Use `for` quando souber a quantidade de repetições

```cpp
for (int i = 0; i < 10; i++)
```

---

### Use `while` quando depender de condição

```cpp
while (senha != correta)
```

---

### Evite loops infinitos acidentais

Sempre garanta que a condição possa se tornar falsa.

---

### Use nomes claros nas variáveis de controle

```cpp
int indice;
int contador;
```

Evite:

```cpp
int a;
```

---

## Resumo

| Estrutura        | Característica                           |
| ---------------- | ---------------------------------------- |
| `while`          | Executa enquanto condição for verdadeira |
| `do...while`     | Executa pelo menos uma vez               |
| `for`            | Ideal para repetições controladas        |
| `break`          | Interrompe o loop                        |
| `continue`       | Pula repetição atual                     |
| `++` / `--`      | Incrementa ou decrementa                 |
| `+=`, `-=`, etc. | Atribuição composta                      |

