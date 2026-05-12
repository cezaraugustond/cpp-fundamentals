# 1-basics

## 01-comments-and-output

### Comentários

Comentários são trechos do código ignorados pelo compilador. Servem para explicar partes do programa, organizar ideias ou deixar observações.

### Comentário de linha

Usado para comentários curtos.

```cpp
// Isto é um comentário de linha
cout << "Olá";
```

### Comentário de múltiplas linhas

Usado para comentários maiores.

```cpp
/* 
   Isto é um comentário
   de múltiplas linhas
*/
cout << "Olá";
```

---

## Saída de Dados (`cout`)

O `cout` é utilizado para exibir informações na tela.

### Exibindo texto

```cpp
cout << "Olá Mundo";
```

### Exibindo variáveis

```cpp
int idade = 23;

cout << idade;
```

### Quebra de linha com `endl`

O `endl` pula para a próxima linha.

```cpp
cout << "Linha 1" << endl;
cout << "Linha 2";
```

Saída:

```txt
Linha 1
Linha 2
```

### Encadeamento com `<<`

O operador `<<` permite exibir vários valores em sequência.

```cpp
string nome = "Cezar";
int idade = 23;

cout << "Nome: " << nome << endl;
cout << "Idade: " << idade << endl;
```

---

## 02-variables

## Variáveis

Variáveis são espaços na memória usados para armazenar dados.

```cpp
int idade = 23;
```

---

## Declaração de variável

Criar uma variável.

```cpp
int idade;
```

## Atribuição de valor

Dar um valor para a variável.

```cpp
idade = 23;
```

## Declaração + atribuição

```cpp
int idade = 23;
```

---

## Tipos básicos de variáveis

| Tipo     | Descrição      | Exemplo           |
| -------- | -------------- | ----------------- |
| `int`    | Número inteiro | `10`              |
| `double` | Número real    | `7.5`             |
| `char`   | Um caractere   | `'A'`             |
| `bool`   | Valor lógico   | `true` ou `false` |
| `string` | Texto          | `"Olá"`           |

---

## Regras para nomes de variáveis

### Pode:

* Letras
* Números (não no início)
* `_` (underscore)

### Não pode:

* Espaços
* Caracteres especiais
* Começar com número
* Palavras reservadas da linguagem

### Exemplos válidos

```cpp
idade
idadeAluno
idade_aluno
```

### Exemplos inválidos

```cpp
2idade
idade aluno
int
```

---

## 03-math-operators

## Operadores matemáticos

| Operador | Função           |
| -------- | ---------------- |
| `+`      | Soma             |
| `-`      | Subtração        |
| `*`      | Multiplicação    |
| `/`      | Divisão          |
| `%`      | Resto da divisão |

---

## Exemplos

```cpp
int a = 10;
int b = 3;

cout << a + b << endl; // 13
cout << a - b << endl; // 7
cout << a * b << endl; // 30
cout << a / b << endl; // 3
cout << a % b << endl; // 1
```

---

## Incremento e decremento

### Incremento

```cpp
x++;
```

Equivale a:

```cpp
x = x + 1;
```

### Decremento

```cpp
x--;
```

Equivale a:

```cpp
x = x - 1;
```

---

## Operadores de atribuição composta

| Operador | Equivale        |
| -------- | --------------- |
| `+=`     | `x = x + valor` |
| `-=`     | `x = x - valor` |
| `*=`     | `x = x * valor` |
| `/=`     | `x = x / valor` |

Exemplo:

```cpp
int x = 10;

x += 5; // x = 15
```

---

## 04-input-types-and-casting

## Entrada de dados (`cin`)

O `cin` é utilizado para receber dados do usuário.

```cpp
int idade;

cin >> idade;
```

---

## Tipo `double`

Usado para números reais (ponto flutuante).

```cpp
double altura = 1.77;
```

## Diferença entre `float` e `double`

| Tipo     | Precisão aproximada |
| -------- | ------------------- |
| `float`  | ~7 dígitos          |
| `double` | ~15 dígitos         |

O `double` possui maior precisão.

---

## Tipo `bool`

Representa valores lógicos.

```cpp
bool verdadeiro = true;
bool falso = false;
```

Internamente:

* `true` = `1`
* `false` = `0`

---

## Tipo `char`

Armazena um único caractere.

```cpp
char letra = 'A';
```

O tipo `char` é armazenado na memória como um número inteiro baseado na tabela ASCII.

---

## Casting

Casting é a conversão de um tipo para outro.

```cpp
double valor = 5;

int numero = (int) valor;
```

### Exemplo

```cpp
double x = 7.9;

cout << (int)x;
```

Saída:

```txt
7
```

A parte decimal é descartada.

---

## Observação importante sobre divisão

### Divisão entre inteiros

```cpp
cout << 5 / 2;
```

Saída:

```txt
2
```

### Divisão com `double`

```cpp
cout << 5.0 / 2;
```

Saída:

```txt
2.5
```
