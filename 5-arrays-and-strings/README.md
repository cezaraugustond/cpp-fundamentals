````md
# 5-arrays-and-strings

## Arrays (Vetores)

Arrays são estruturas de dados que armazenam múltiplos valores do mesmo tipo em posições consecutivas da memória.

Cada elemento é acessado através de um índice.

---

## Características dos Arrays

- Armazenam elementos do mesmo tipo.
- Possuem tamanho fixo.
- Os índices começam em `0`.
- Os elementos ficam organizados sequencialmente na memória.

---

## Declaração de Array

```cpp
tipo nomeDoArray[tamanho];
````

### Exemplo

```cpp
int idades[5];
```

Esse array possui:

* 5 posições,
* índices de `0` até `4`.

---

## Inicialização de Arrays

### Inicializando manualmente

```cpp
double notas[4] = {7.5, 8.0, 6.3, 9.1};
```

---

### Inicialização parcial

```cpp
int numeros[5] = {1, 2};
```

Os demais valores serão inicializados com `0`.

---

## Acessando Elementos

```cpp
cout << notas[0] << endl;
```

---

## Alterando Valores

```cpp
notas[1] = 10;
```

---

## Percorrendo Arrays com For

```cpp
for (int i = 0; i < 5; i++) {
    cout << idades[i] << endl;
}
```

---

## Memória nos Arrays

Os elementos são armazenados em posições consecutivas da memória.

Exemplo:

```txt
indices:   0   1   2   3
valores:  10  20  30  40
```

Isso permite acesso rápido aos elementos.

---

## Relação entre Arrays e Ponteiros

O nome do array representa o endereço do primeiro elemento.

```cpp
int numeros[3] = {10, 20, 30};
```

```cpp
numeros == &numeros[0]
```

---

## Arrays e Aritmética de Ponteiros

```cpp
*(numeros + 1)
```

Equivale a:

```cpp
numeros[1]
```

---

## Limitações dos Arrays

* Tamanho fixo.
* Não cresce dinamicamente.
* Não possui métodos prontos.
* Não verifica automaticamente índices inválidos.

---

## Strings

## O que é uma String?

String representa uma sequência de caracteres.

No C++, existem duas formas principais:

* C-String (`char[]`)
* `std::string`

---

## C-String

Uma C-String é um array de caracteres terminado por `'\0'`.

### Exemplo

```cpp
char nome[] = "Cezar";
```

Na memória:

```txt
C  e  z  a  r  \0
```

O caractere `'\0'` indica o fim da string.

---

## String (`std::string`)

O tipo `string` pertence à biblioteca `<string>`.

Ele facilita o uso de textos em comparação com arrays de `char`.

```cpp
#include <string>
```

---

## Declarando Strings

```cpp
string nome = "Cezar";
```

---

## Entrada e Saída

### Exibir

```cpp
cout << nome;
```

---

### Ler

```cpp
cin >> nome;
```

---

## getline()

`getline()` permite ler textos com espaços.

```cpp
getline(cin, nome);
```

---

## Acessando Caracteres

```cpp
cout << nome[0];
```

---

## Tamanho da String

```cpp
nome.length()
```

ou

```cpp
nome.size()
```

---

## Concatenação

```cpp
string nomeCompleto = nome + sobrenome;
```

---

## Comparação

```cpp
if (nome == "Cezar") {
    //
}
```

---

## Diferença entre C-String e std::string

| C-String              | std::string              |
| --------------------- | ------------------------ |
| Array de char         | Classe da STL            |
| Usa `'\0'`            | Gerencia automaticamente |
| Mais manual           | Mais simples             |
| Mais propensa a erros | Mais segura              |

---

## Matrizes

### O que é uma Matriz?

Matriz é uma estrutura bidimensional.

Pode ser entendida como:

* vetor de vetores,
* linhas e colunas.

---

### Declaração

```cpp
tipo nome[linhas][colunas];
```

#### Exemplo

```cpp
int matriz[2][3];
```

Essa matriz possui:

* 2 linhas,
* 3 colunas.

---

### Inicialização

```cpp
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
```

---

### Acessando Elementos

```cpp
matriz[0][1]
```

Linha `0`, coluna `1`.

---

### Percorrendo Matrizes

```cpp
for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matriz[i][j] << endl;
    }
}
```

---

### Organização Visual

```txt
1 2 3
4 5 6
```

---

## Memória nas Matrizes

Os elementos também são armazenados sequencialmente na memória.

---

## Boas Práticas

* Evite acessar índices inválidos.
* Use loops para percorrer arrays e matrizes.
* Prefira `std::string` em vez de C-Strings na maioria dos casos.
* Use nomes claros para índices (`linha`, `coluna`, `i`, `j`).

---

## Resumo Geral

| Estrutura | Objetivo                               |
| --------- | -------------------------------------- |
| Array     | Armazenar vários valores do mesmo tipo |
| String    | Trabalhar com texto                    |
| Matriz    | Organizar dados em linhas e colunas    |

---

## Relação entre os Conceitos

| Conceito    | Relação                        |
| ----------- | ------------------------------ |
| String em C | Array de char                  |
| Matriz      | Array bidimensional            |
| Arrays      | Base para matrizes e C-Strings |
| Ponteiros   | Podem acessar arrays e strings |

```
```
