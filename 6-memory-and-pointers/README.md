````md id="2l7c0d"
# 6-memory-and-pointers

## Memória do Computador

A memória é o local onde os dados do programa são armazenados durante a execução.

Toda variável criada ocupa um espaço na memória.

---

## Bits e Bytes

## Bit

O bit é a menor unidade de informação digital.

Ele pode armazenar apenas:

```txt id="91v4tx"
0 ou 1
````

---

## Byte

Um byte é composto por 8 bits.

Ele consegue representar:

* caracteres,
* números,
* símbolos,
* instruções.

---

## Como os Dados São Armazenados

Quando uma variável é declarada:

1. O compilador identifica o tipo da variável.
2. O sistema operacional reserva espaço na memória.
3. O valor é armazenado nesse espaço.

---

### Exemplo

```cpp id="xvhnmv"
int idade = 20;
```

O programa:

* reserva memória suficiente para um inteiro,
* armazena o valor `20`,
* associa esse espaço ao nome `idade`.

---

## Endereço de Memória

Toda variável possui um endereço na memória.

Esse endereço indica onde o valor está armazenado.

---

## Operador de Endereço (`&`)

Usado para obter o endereço de uma variável.

```cpp id="wnm4k4"
int x = 10;

cout << &x;
```

---

## Overflow

Overflow acontece quando um valor ultrapassa o limite suportado pelo tipo da variável.

### Exemplo

```cpp id="j0k3dd"
unsigned char x = 255;

x++;
```

O valor ultrapassa o limite máximo do tipo.

---

## Stack e Heap

A memória normalmente é dividida em regiões importantes:

| Região | Característica          |
| ------ | ----------------------- |
| Stack  | Memória automática      |
| Heap   | Memória dinâmica/manual |

---

## Stack (Pilha)

A stack armazena:

* variáveis locais,
* parâmetros,
* chamadas de funções.

Características:

* rápida,
* automática,
* limitada.

---

### Exemplo

```cpp id="qpd8bw"
void exemplo() {
    int x = 10;
}
```

A variável `x` é destruída automaticamente ao sair da função.

---

## Heap

A heap é usada para memória dinâmica.

Características:

* controlada manualmente,
* mais flexível,
* permanece alocada até ser liberada.

---

## Ponteiros

Ponteiros são variáveis que armazenam endereços de memória.

---

## Declaração de Ponteiro

```cpp id="z9tkj9"
int* ponteiro;
```

Esse ponteiro pode armazenar o endereço de um inteiro.

---

## Associando Ponteiro a uma Variável

```cpp id="7g5jlwm"
int x = 10;

int* ponteiro = &x;
```

---

## O que o Ponteiro Guarda?

```txt id="5z1v5s"
Variável x:
valor -> 10

Ponteiro:
endereço -> local onde x está armazenado
```

---

## Operador de Desreferência (`*`)

Usado para acessar o valor armazenado naquele endereço.

```cpp id="zrl6iq"
cout << *ponteiro;
```

---

## Alterando Valor com Ponteiro

```cpp id="k9v5mz"
*ponteiro = 20;
```

Isso altera diretamente o valor de `x`.

---

### Exemplo Completo

```cpp id="x8g5ak"
int x = 10;

int* p = &x;

*p = 30;

cout << x;
```

Saída:

```txt id="v8d6c8"
30
```

---

## Relação entre Ponteiro e Memória

O ponteiro permite acessar diretamente posições da memória.

Por isso ele:

* consegue alterar variáveis fora do escopo local,
* permite manipular memória dinâmica,
* é muito usado em estruturas complexas.

---

## Passagem por Valor

A função recebe apenas uma cópia do valor.

### Exemplo

```cpp id="9fcrsm"
void incrementar(int x) {
    x++;
}
```

O valor original não é alterado.

---

## Passagem por Ponteiro (Referência de Memória)

A função recebe o endereço da variável.

### Exemplo

```cpp id="0lqlh9"
void incrementar(int* x) {
    (*x)++;
}
```

Uso:

```cpp id="7n8gbj"
int valor = 10;

incrementar(&valor);
```

Agora o valor original será alterado.

---

## Referências (`&`) no C++

C++ também possui referências.

### Exemplo

```cpp id="1xh0r6"
int x = 10;

int& ref = x;
```

A referência funciona como um “apelido” para a variável.

---

## Diferença entre Ponteiro e Referência

| Ponteiro        | Referência            |
| --------------- | --------------------- |
| Guarda endereço | É um apelido          |
| Usa `*` e `&`   | Uso mais simples      |
| Pode ser nulo   | Deve referenciar algo |

---

## Arrays e Ponteiros

O nome de um array representa o endereço do primeiro elemento.

```cpp id="1g2y8p"
int numeros[3] = {10, 20, 30};
```

Equivale a:

```cpp id="sm0v5v"
&numeros[0]
```

---

## Aritmética de Ponteiros

```cpp id="8njzxf"
*(numeros + 1)
```

Equivale a:

```cpp id="qchd9v"
numeros[1]
```

---

## Alocação Dinâmica

### O que é?

É o processo de reservar memória manualmente durante a execução do programa.

---

## Operador `new`

O `new` solicita memória ao sistema operacional.

### Exemplo

```cpp id="y9e61k"
int* numero = new int;
```

---

## Alocando Arrays Dinamicamente

```cpp id="vmb3pa"
char* texto = new char[10];
```

Isso cria:

* 10 posições consecutivas na heap,
* cada posição capaz de armazenar um `char`.

---

## O que o Ponteiro Recebe?

O ponteiro guarda o endereço da primeira posição da memória alocada.

---

### Exemplo Visual

```txt id="xg9k2n"
texto
  ↓

[A][B][C][D][\0]
```

---

## String Personalizada

### Estrutura Básica

```cpp id="7r6tn6"
struct MinhaString {
    char* data;
    int size;
};
```

---

## Funcionamento

### 1. Calcular tamanho

Percorre os caracteres até encontrar:

```cpp id="9p3g2j"
'\0'
```

---

### 2. Alocar memória

```cpp id="cczthf"
data = new char[size + 1];
```

O `+1` é para armazenar o caractere nulo.

---

## Por que o `'\0'` é importante?

Ele indica onde a string termina.

Sem ele:

* o programa não saberia onde parar a leitura.

---

## Copiando Caracteres

```cpp id="pjlwmr"
data[i] = str[i];
```

Cada caractere é copiado para a nova memória.

---

## Acesso com Colchetes

```cpp id="j8jqj4"
data[i]
```

Internamente, isso é aritmética de ponteiros.

---

## Liberando Memória

Memória criada com `new` deve ser liberada com `delete`.

---

### Exemplo

```cpp id="pvr8r0"
delete numero;
```

---

## Arrays Dinâmicos

```cpp id="49ij8h"
delete[] texto;
```

---

## Memory Leak (Vazamento de Memória)

Acontece quando a memória alocada não é liberada.

Consequências:

* consumo desnecessário de RAM,
* lentidão,
* falhas no programa.

---

## Construtor e Destrutor

## Construtor

Executado automaticamente quando o objeto é criado.

Muito usado para:

* inicializar atributos,
* alocar memória.

---

## Destrutor

Executado automaticamente quando o objeto sai de escopo.

Muito usado para:

* liberar memória dinâmica,
* fechar arquivos,
* liberar recursos.

---

### Exemplo

```cpp id="h6md3s"
~MinhaString() {
    delete[] data;
}
```

---

## Boas Práticas

* Sempre inicialize ponteiros.
* Libere memória alocada com `delete`.
* Evite acessar memória inválida.
* Prefira `std::string` e containers modernos quando possível.
* Use ponteiros apenas quando realmente necessário.

---

## Resumo Geral

| Conceito   | Objetivo           |
| ---------- | ------------------ |
| Memória    | Armazenar dados    |
| Ponteiro   | Guardar endereço   |
| Heap       | Memória dinâmica   |
| Stack      | Memória automática |
| `new`      | Alocar memória     |
| `delete`   | Liberar memória    |
| Referência | Alias de variável  |

---

## Relação entre os Conceitos

| Conceito          | Relação                 |
| ----------------- | ----------------------- |
| Ponteiro          | Manipula endereços      |
| Heap              | Usada com ponteiros     |
| Arrays            | Funcionam com ponteiros |
| Strings em C      | Arrays de char          |
| Alocação dinâmica | Depende de ponteiros    |

```
```
