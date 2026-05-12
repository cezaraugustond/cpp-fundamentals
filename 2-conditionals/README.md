# 2-conditionals

## 1-comparison-and-logical-operators

## Operadores de comparação

Os operadores de comparação são usados para comparar valores.
O resultado de uma comparação sempre será um valor lógico (`true` ou `false`).

| Operador | Significado    |
| -------- | -------------- |
| `>`      | Maior que      |
| `<`      | Menor que      |
| `>=`     | Maior ou igual |
| `<=`     | Menor ou igual |
| `==`     | Igual          |
| `!=`     | Diferente      |

---

### Exemplos

```cpp id="t0exn5"
int x = 10;
int y = 5;

cout << (x > y) << endl;   // true
cout << (x < y) << endl;   // false
cout << (x == y) << endl;  // false
cout << (x != y) << endl;  // true
```

---

## Estrutura condicional `if`

O `if` executa um bloco de código somente se a condição for verdadeira.

```cpp id="j87k2j"
if (condicao) {
    // código
}
```

### Exemplo

```cpp id="2j4tgb"
int idade = 18;

if (idade >= 18) {
    cout << "Maior de idade";
}
```

---

## Estrutura `if...else`

O `else` executa um bloco alternativo caso a condição do `if` seja falsa.

```cpp id="4xt1s0"
if (condicao) {
    // verdadeiro
} else {
    // falso
}
```

### Exemplo

```cpp id="6q3ktl"
int idade = 16;

if (idade >= 18) {
    cout << "Maior de idade";
} else {
    cout << "Menor de idade";
}
```

---

## Estrutura `else if`

Permite testar múltiplas condições.

```cpp id="v1v4cw"
if (condicao) {
    //
} else if (condicao) {
    //
} else {
    //
}
```

### Exemplo

```cpp id="8qf7j7"
double media = 6.5;

if (media >= 7) {
    cout << "Aprovado";
} else if (media >= 5) {
    cout << "Recuperacao";
} else {
    cout << "Reprovado";
}
```

---

## Operadores lógicos

Usados para combinar expressões lógicas.

| Operador | Significado |   |         |
| -------- | ----------- | - | ------- |
| `&&`     | E (AND)     |   |         |
| `        |             | ` | OU (OR) |
| `!`      | NÃO (NOT)   |   |         |

---

## Operador `&&` (E)

A expressão só será verdadeira se todas as condições forem verdadeiras.

```cpp id="x5a5l7"
int idade = 20;
bool possuiCarteira = true;

if (idade >= 18 && possuiCarteira) {
    cout << "Pode dirigir";
}
```

---

## Operador `||` (OU)

A expressão será verdadeira se pelo menos uma condição for verdadeira.

```cpp id="u3x2kd"
bool estudante = true;
bool idoso = false;

if (estudante || idoso) {
    cout << "Possui desconto";
}
```

---

## Operador `!` (NÃO)

Inverte o valor lógico.

```cpp id="0o6d7w"
bool ligado = false;

if (!ligado) {
    cout << "Sistema desligado";
}
```

---

## Observação importante

### Diferença entre `=` e `==`

| Operador | Função     |
| -------- | ---------- |
| `=`      | Atribuição |
| `==`     | Comparação |

```cpp id="d2v94m"
int x = 10; // atribuição

if (x == 10) { // comparação
    cout << "Igual";
}
```

---

# 2-char-and-ascii

## Tipo `char`

O tipo `char` armazena um único caractere.

```cpp id="1xjz9m"
char letra = 'A';
```

---

## Tabela ASCII

No computador, caracteres são armazenados como números inteiros baseados na tabela ASCII.

| Caractere | Código ASCII |
| --------- | ------------ |
| `'A'`     | 65           |
| `'B'`     | 66           |
| `'a'`     | 97           |
| `'0'`     | 48           |

---

### Exemplo

```cpp id="k2mjlwm"
char letra = 'A';

cout << (int) letra;
```

Saída:

```txt id="6dc5lj"
65
```

---

## Comparando caracteres

Como `char` é armazenado como número, é possível comparar caracteres.

```cpp id="q9y3cm"
char letra = 'C';

if (letra == 'C') {
    cout << "Letra correta";
}
```

---

## Letras maiúsculas e minúsculas

Na tabela ASCII:

* Letras maiúsculas possuem códigos diferentes das minúsculas.
* `'A'` é diferente de `'a'`.

```cpp id="pn4l2m"
cout << ('A' == 'a');
```

Saída:

```txt id="fjlwmq"
0
```

---

## Funções úteis (`<cctype>`)

A biblioteca `<cctype>` possui funções para manipular caracteres.

| Função      | Descrição               |
| ----------- | ----------------------- |
| `tolower()` | Converte para minúsculo |
| `toupper()` | Converte para maiúsculo |
| `isdigit()` | Verifica se é número    |
| `isalpha()` | Verifica se é letra     |

### Exemplo

```cpp id="l6jqc7"
char letra = 'A';

cout << (char)tolower(letra);
```

Saída:

```txt id="kq7lh4"
a
```

---

# 3-switch

## Estrutura `switch`

O `switch` é usado para selecionar diferentes blocos de código com base no valor de uma expressão.

```cpp id="s8tyl0"
switch (expressao) {
    case valor:
        //
        break;

    default:
        //
}
```

---

### Exemplo básico

```cpp id="u4y56i"
int opcao = 2;

switch (opcao) {
    case 1:
        cout << "Cadastrar";
        break;

    case 2:
        cout << "Listar";
        break;

    case 3:
        cout << "Sair";
        break;

    default:
        cout << "Opcao invalida";
}
```

---

## Papel do `break`

O `break` interrompe o `switch`.

Sem ele, o programa continuará executando os próximos casos.

### Exemplo sem `break`

```cpp id="fc2j3q"
int x = 1;

switch (x) {
    case 1:
        cout << "Um";

    case 2:
        cout << "Dois";
}
```

Saída:

```txt id="llj1x9"
UmDois
```

---

## Quando usar `switch`

O `switch` é mais indicado quando:

* Existem muitas opções fixas.
* A comparação é feita com valores exatos.

Exemplos:

* Menus
* Dias da semana
* Opções numéricas

---

# 4-ternary-operator

## Operador ternário

O operador ternário é uma forma reduzida de escrever um `if...else`.

```cpp id="t2h8e4"
(condicao) ? valorSeVerdadeiro : valorSeFalso;
```

---

### Exemplo

```cpp id="z3v1px"
int idade = 18;

string resultado = (idade >= 18) ? "Maior" : "Menor";

cout << resultado;
```

---

## Equivalente com `if...else`

```cpp id="6jqqc7"
string resultado;

if (idade >= 18) {
    resultado = "Maior";
} else {
    resultado = "Menor";
}
```

---

## Quando usar

O operador ternário é útil para:

* Condições simples
* Atribuições rápidas
* Código mais compacto

Evite usar em condições muito complexas, pois pode prejudicar a leitura.

---

### Exemplo com números

```cpp id="j2y7s0"
int a = 10;
int b = 20;

cout << ((a > b) ? a : b);
```

Saída:

```txt id="r5i1qf"
20
```
