````md
# 4-functions

## Funções

Funções são blocos de código reutilizáveis que executam uma tarefa específica.

Elas ajudam a:

- organizar o código,
- evitar repetição,
- facilitar manutenção,
- dividir problemas grandes em partes menores.

---

## Estrutura Básica

### Função com retorno

```cpp
tipo nomeDaFuncao() {
    // código
    return valor;
}
````

### Exemplo

```cpp
int somar() {
    return 2 + 3;
}
```

---

## Função sem retorno (`void`)

Quando a função não precisa retornar nenhum valor, usamos `void`.

```cpp
void mensagem() {
    cout << "Olá!" << endl;
}
```

---

## Parâmetros

Parâmetros são valores recebidos pela função.

### Exemplo

```cpp
void exibirNome(string nome) {
    cout << nome << endl;
}
```

Uso:

```cpp
exibirNome("Cezar");
```

---

## Argumentos

* **Parâmetro:** variável declarada na função.
* **Argumento:** valor enviado para a função.

```cpp
void mostrar(int x) // parâmetro
{
}

mostrar(10); // argumento
```

---

## Retorno (`return`)

O `return` encerra a função e devolve um valor.

```cpp
int dobro(int x) {
    return x * 2;
}
```

---

## Protótipo de Função

O protótipo informa ao compilador que a função existe.

```cpp
int somar(int a, int b);
```

Depois:

```cpp
int somar(int a, int b) {
    return a + b;
}
```

---

## Escopo

Escopo é a região do código onde uma variável pode ser acessada.

---

## Variável Local

É declarada dentro de funções ou blocos `{}`.

* Só existe naquele bloco.
* É destruída ao sair do bloco.

### Exemplo

```cpp
void exemplo() {
    int valor = 10;
}
```

A variável `valor` só existe dentro da função.

---

## Variável Global

Declarada fora de qualquer função.

* Pode ser acessada em todo o arquivo.

### Exemplo

```cpp
int numero = 5;

int main() {
    cout << numero;
}
```

---

## Variável Estática Local

Declarada com `static` dentro de uma função.

* Mantém o valor entre chamadas da função.

### Exemplo

```cpp
void contar() {
    static int contador = 0;

    contador++;

    cout << contador << endl;
}
```

Saída:

```txt
1
2
3
```

A variável não é recriada a cada chamada.

---

## Variável Estática Global

Quando uma variável global é declarada com `static`, ela fica acessível apenas naquele arquivo.

```cpp
static int valor = 10;
```

Muito usada em projetos com múltiplos arquivos.

---

## Tempo de Vida das Variáveis (Storage Duration)

Define quanto tempo a variável permanece na memória.

| Tipo   | Tempo de vida             |
| ------ | ------------------------- |
| Local  | Até sair do bloco         |
| Global | Enquanto programa executa |
| Static | Enquanto programa executa |

---

## Bibliotecas

Bibliotecas são arquivos que contêm funções e recursos prontos.

Elas evitam recriar funcionalidades comuns.

---

## Inclusão de Biblioteca

```cpp
#include <iostream>
```

---

## Bibliotecas Comuns

| Biblioteca   | Função            |
| ------------ | ----------------- |
| `<iostream>` | Entrada e saída   |
| `<string>`   | Strings           |
| `<cmath>`    | Matemática        |
| `<cstdlib>`  | Utilidades gerais |
| `<ctime>`    | Data e hora       |

---

## Criando Biblioteca Própria

### Arquivo `.h`

```cpp
void mensagem();
```

---

### Arquivo `.cpp`

```cpp
#include <iostream>
using namespace std;

void mensagem() {
    cout << "Olá!" << endl;
}
```

---

## Tratamento de Erros

Tratamento de erros serve para evitar falhas inesperadas no programa.

---

## Verificando erro de entrada

```cpp
if (cin.fail()) {
    cout << "Entrada invalida!" << endl;

    cin.clear();
    cin.ignore(100, '\n');
}
```

### Explicação

| Comando        | Função                    |
| -------------- | ------------------------- |
| `cin.fail()`   | Verifica erro             |
| `cin.clear()`  | Limpa estado de erro      |
| `cin.ignore()` | Descarta entrada inválida |

---

## Throw

O `throw` lança um erro manualmente.

```cpp
throw runtime_error("ERRO!");
```

---

## Try e Catch

Usados para capturar exceções.

```cpp
try {
    //
} catch (exception& e) {
    cout << e.what() << endl;
}
```

---

## Funcionamento

| Bloco   | Função                     |
| ------- | -------------------------- |
| `try`   | Código que pode gerar erro |
| `catch` | Captura o erro             |

---

## Return

O `return` encerra a função imediatamente.

```cpp
return 0;
```

No `main()`, geralmente indica que o programa terminou corretamente.

---

## Break vs Return

| Comando  | Sai do loop? | Sai da função? |
| -------- | ------------ | -------------- |
| `break`  | Sim          | Não            |
| `return` | Sim          | Sim            |

---

## Namespace

`namespace` é um recurso usado para organizar identificadores e evitar conflitos de nomes.

---

## Problema sem Namespace

Imagine duas funções com mesmo nome:

```cpp
int soma();
double soma();
```

Isso pode gerar conflitos em projetos grandes.

---

## Criando Namespace

```cpp
namespace Matematica {
    int soma(int a, int b) {
        return a + b;
    }
}
```

Uso:

```cpp
Matematica::soma(2, 3);
```

---

## Operador de Resolução (`::`)

Usado para acessar elementos do namespace.

```cpp
std::cout
```

---

## Using Namespace

```cpp
using namespace std;
```

Permite usar:

```cpp
cout << "Olá";
```

em vez de:

```cpp
std::cout << "Olá";
```

---

## Observação Importante

Em projetos grandes, evitar `using namespace std;` pode ser uma boa prática para reduzir conflitos.

---

## Boas Práticas

### Funções

* Faça funções pequenas e específicas.
* Use nomes claros.
* Evite funções gigantes.

---

### Variáveis

* Prefira variáveis locais.
* Evite excesso de variáveis globais.

---

### Tratamento de Erros

* Sempre valide entradas do usuário.
* Trate possíveis falhas.

---

### Organização

* Separe código em funções.
* Use bibliotecas próprias em projetos maiores.

---

## Resumo

| Conceito   | Objetivo                |
| ---------- | ----------------------- |
| Função     | Reutilizar código       |
| Escopo     | Controlar visibilidade  |
| Static     | Manter valor na memória |
| Biblioteca | Reutilizar recursos     |
| Try/Catch  | Tratar erros            |
| Namespace  | Organizar código        |

```
```
---

## Exemplos:

[Exemplo 1:](./exemplos/exemplo1.cpp) Desenvolva um algoritmo que calcule a média de três notas utilizando uma função. O programa deve solicitar três valores numéricos representando as notas, repassar os valores para a função e exibir a média final calculada.

[Exemplo 2:](./exemplos/exemplo1.cpp) Desenvolva um algoritmo que implemente uma calculadora utilizando uma biblioteca personalizada com operações matemáticas básicas. O programa deve solicitar dois valores numéricos e o operador desejado (+, -, , /), realizar a operação correspondente utilizando funções da biblioteca externa e exibir o resultado. A execução deve se repetir até que o usuário opte por encerrar.

[Exemplo 3:](./exemplos/exemplo1.cpp) Desenvolva um algoritmo que valide a entrada de dados numéricos fornecidos pelo usuário. O programa deve solicitar um valor, utilizar verificação de falha na entrada (cin.fail()) para garantir que o dado seja numérico e só permitir a continuidade da execução após o recebimento de uma entrada válida, exibindo o valor digitado.

[Exemplo 4:](./exemplos/exemplo1.cpp) Desenvolva um algoritmo que realize a divisão entre dois números utilizando tratamento de exceções. O programa deve solicitar dois valores numéricos, lançar uma exceção com throw caso ocorra tentativa de divisão por zero, capturar a exceção com try/catch e exibir uma mensagem apropriada ou o resultado da operação.

[Exemplo 5:](./exemplos/exemplo1.cpp) Desenvolva um algoritmo que demonstre a criação e o uso de namespaces. O programa deve definir namespaces personalizados, incluindo um namespace aninhado, acessar seus elementos por meio de aliases e exibir os valores armazenados em cada um.
