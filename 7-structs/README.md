````md id="g7m4zp"
# 7-structs

## Struct

Uma `struct` é uma estrutura de dados que permite agrupar múltiplas variáveis sob um único nome.

Essas variáveis podem possuir tipos diferentes.

---

## Objetivo das Structs

Structs são usadas para representar entidades do mundo real.

Exemplos:
- aluno,
- produto,
- usuário,
- carro,
- conta bancária.

---

## Declaração de Struct

```cpp
struct NomeDaStruct {
    tipo variavel;
};
````

---

### Exemplo Básico

```cpp id="6x0nfe"
struct Pessoa {
    string nome;
    int idade;
};
```

---

## Criando Variáveis da Struct

```cpp id="8sxgdx"
Pessoa pessoa1;
```

---

## Acessando Membros

Usamos o operador `.`

```cpp id="l9dn3k"
pessoa1.nome = "Cezar";
pessoa1.idade = 23;
```

---

## Inicialização Direta

```cpp id="0d7p39"
Pessoa pessoa1 = {"Cezar", 23};
```

---

### Exemplo Completo

```cpp id="efjlwm"
struct Pessoa {
    string nome;
    int idade;
};

int main() {
    Pessoa pessoa1 = {"Cezar", 23};

    cout << pessoa1.nome << endl;
    cout << pessoa1.idade << endl;
}
```

---

## Structs e Memória

Cada objeto da struct possui sua própria cópia dos atributos.

Exemplo:

```cpp id="8l09y4"
Pessoa p1;
Pessoa p2;
```

`p1` e `p2` armazenam dados independentes.

---

## Arrays de Struct

Structs podem ser usadas em vetores.

```cpp id="h7e5g7"
Pessoa pessoas[50];
```

---

### Exemplo

```cpp id="mybgmn"
pessoas[0].nome = "Bianka";
pessoas[0].idade = 20;
```

---

## Métodos

Métodos são funções declaradas dentro da struct.

Eles normalmente manipulam os próprios dados do objeto.

---

### Exemplo de Método

```cpp id="h4m0qe"
struct Pessoa {
    string nome;
    int idade;

    void exibir() {
        cout << nome << endl;
        cout << idade << endl;
    }
};
```

---

## Uso do Método

```cpp id="fl6mb6"
Pessoa p1 = {"Cezar", 23};

p1.exibir();
```

---

## O Papel do `this`

Dentro do método, o objeto atual é acessado implicitamente.

Exemplo:

```cpp id="scj3ys"
nome
```

Internamente equivale a:

```cpp id="zvjlwm"
this->nome
```

---

## Vantagens dos Métodos

* Organizam melhor o código.
* Aproximam dados e comportamentos.
* Facilitam manutenção.
* Tornam o código mais legível.

---

## Separando Responsabilidades

Boa prática:

* um método para ler dados,
* outro para calcular,
* outro para exibir.

---

### Exemplo

```cpp id="gm6b0x"
void lerDados();
void calcularMedia();
void exibir();
```

---

## Construtores

## O que é um Construtor?

Construtor é um método especial executado automaticamente quando o objeto é criado.

---

## Objetivo do Construtor

Inicializar os atributos do objeto.

---

## Características

* Possui o mesmo nome da struct.
* Não possui tipo de retorno.
* É executado automaticamente.

---

### Exemplo

```cpp id="qzjlwm"
struct Usuario {
    int id;
    string nome;

    Usuario(int novoID, string novoNome) {
        id = novoID;
        nome = novoNome;
    }
};
```

---

## Uso

```cpp id="xmk6wp"
Usuario usuario(10, "Cezar");
```

---

## Construtor Padrão

É o construtor sem parâmetros.

```cpp id="tizvfp"
struct Pessoa {
    Pessoa() {
        cout << "Objeto criado";
    }
};
```

---

## Inicialização com Lista

Forma moderna e recomendada:

```cpp id="rnz6u6"
Pessoa(string nome, int idade)
    : nome(nome), idade(idade)
{
}
```

---

## Destrutor

## O que é?

Método especial executado automaticamente quando o objeto sai de escopo.

---

## Objetivo

Liberar recursos utilizados pelo objeto.

Exemplos:

* memória dinâmica,
* arquivos,
* conexões.

---

## Características

* Possui `~` antes do nome.
* Não recebe parâmetros.
* Não possui retorno.

---

### Exemplo

```cpp id="dltm7d"
~Pessoa() {
    cout << "Objeto destruido";
}
```

---

### Exemplo Completo

```cpp id="ynl8gu"
struct Usuario {
    int id;
    string nome;

    Usuario(int novoID, string novoNome) {
        id = novoID;
        nome = novoNome;

        cout << "Construtor chamado" << endl;
    }

    ~Usuario() {
        cout << "Destrutor chamado" << endl;
    }
};
```

---

## Ordem de Execução

1. Construtor executa ao criar objeto.
2. Programa utiliza objeto.
3. Destrutor executa ao final do escopo.

---

## Struct e Programação Orientada a Objetos

Em C++, `struct` e `class` são muito parecidas.

Diferença principal:

| Struct                      | Class                       |
| --------------------------- | --------------------------- |
| Membros públicos por padrão | Membros privados por padrão |

---

### Exemplo

```cpp id="y1q1zj"
struct Pessoa {
    int idade; // público
};
```

```cpp id="6rgrg6"
class Pessoa {
    int idade; // privado
};
```

---

## Passagem por Valor

Quando uma struct é passada por valor, uma cópia completa é criada.

```cpp id="36uvr2"
void exibir(Pessoa p)
```

---

## Passagem por Referência

Evita cópia desnecessária.

```cpp id="6yevcv"
void exibir(Pessoa& p)
```

---

## Referência Constante

Boa prática quando não deseja alterar o objeto.

```cpp id="f1d39y"
void exibir(const Pessoa& p)
```

---

## Structs e Ponteiros

Também é possível usar ponteiros para structs.

```cpp id="9ct70k"
Pessoa* ponteiro;
```

---

## Operador `->`

Usado para acessar membros através de ponteiros.

```cpp id="a9mmxq"
ponteiro->nome
```

Equivale a:

```cpp id="cs7qmm"
(*ponteiro).nome
```

---

## Organização de Código

Structs ajudam muito na organização:

* agrupam dados relacionados,
* reduzem quantidade de variáveis soltas,
* melhoram legibilidade.

---

## Boas Práticas

* Use nomes claros.
* Separe responsabilidades em métodos.
* Evite structs gigantes.
* Inicialize atributos.
* Prefira passagem por referência para structs grandes.

---

## Resumo Geral

| Conceito   | Objetivo                   |
| ---------- | -------------------------- |
| Struct     | Agrupar dados              |
| Método     | Comportamento da struct    |
| Construtor | Inicializar objeto         |
| Destrutor  | Liberar recursos           |
| Referência | Evitar cópias              |
| Ponteiro   | Acessar endereço do objeto |

---

## Relação entre os Conceitos

| Conceito   | Relação                  |
| ---------- | ------------------------ |
| Struct     | Agrupa variáveis         |
| Método     | Atua nos dados da struct |
| Construtor | Inicializa struct        |
| Destrutor  | Finaliza recursos        |
| Ponteiro   | Pode apontar para struct |
| Arrays     | Podem armazenar structs  |

```
```
