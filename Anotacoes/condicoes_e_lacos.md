## if
Indica condições. A estrutura de um if-else é a seguinte:
```c
if (condicao) {
	//codigo a ser executado
}
else {
	//código caso a condicao seja falsa
}
```

Fazemos as condições com operadores lógicos e de condições:
*operadores lógicos:*
- `&&`: E lógico (AND) -> Retorna verdadeiro (1) se ambas as condições forem verdadeiras
- `||`: OU lógico (OR) -> Retorna verdadeiro (1) se pelo menos uma das condições for verdadeira
	- `(a > b || b > c)`
- `!`: NÃO lógico (NOT) -> Inverte o valor lógico (verdadeiro vira falso e vice-versa)
	- `!(a > b)`

*operadores de comparação:*
- `==`: igual a -> Retorna verdadeiro se os valores forem iguais
- `!=`: diferente de -> Retorna verdadeiro se os valores forem diferentes
- `<`: menor que -> Retorna verdadeiro se o primeiro valor for menor que o segundo
- `>`: maior que -> Retorna verdadeiro se o primeiro valor for maior que o segundo

### escopo
Uma variável só existe dentro do escopo em que ela foi criada. Fora dele, ela não pode ser usada nem manipulada. Por exemplo, nesse código, a variável maior só existe dentro do escopo do else em que ela está:
```c
#include <stdio.h>

int main() {
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo de adivinhação! *\n");
    printf("*************************************\n");

    int secretNum = 42;

    int chute;

    printf("Qual é o seu chute?\n");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = (chute == secretNum);

    if(acertou){
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo, você é um bom jogador!\n");
    }

    else {
        int maior = chute > secretNum;
        
        if (maior) {
            printf("Você errou!\n");
            printf("%d é maior que o número secreto\n", chute);
        }

        else {
            printf("Você errou!\n");
            printf("%d é menor que o número secreto\n", chute);
        }
    }

    return 0;
}
```

<span style="background: rgba(153, 0, 173, 0.20);">considere como escopo de um elemento tudo que está dentro das chaves em que ele está</span>

## for
O for é usado para repetir um número fixo de vezes aquele bloco de código. O for executa o bloco de código sem ter controle sobre o que tem dentro dele. Ele parte de um valor inicial até um número específico e a variável contadora utilizada é sempre incrementada ou decrementada. A estrutura de um `for` em C é a seguinte:
```c
for (int i=1; i<=3; i++){
	//insira o código a ser repetido aqui
}
```
Em que o primeiro argumento é o ponto de partida do loop, o segundo é a condição para que continue repetindo e o terceiro é o incremento ou decremento da variável contadora (nesse caso, `i`)
- O incremento/decremento pode ocorrer antes ou após a execução do código, a depender da posição do sinal (`--` ou `++`). Se estiver à esquerda, a operação ocorre antes da execução, e se estiver à direita ocorre após.

**break**
Interrompe o loop independente se o número de iterações ainda não acabou. Se aquela condição for satisfeita, o loop é encerrado.

<div  style="background: rgba(153, 0, 173, 0.20);"><h2>Diretivas</h2><p>É tudo que é declarado com um # no cabeçalho do código em C. Então, o #include e a declaração de constantes através do #define são todos diretivas</p></div>

### Declaração de constantes
A declaração de constantes no código é útil quando os valores não são alterados no decorrer do programa, ou seja, são valores fixos. Isso não significa que eles não podem ser mudados, e sim que não possuirão o comportamento de uma variável.
Constantes são declaradas da seguinte forma:

```c
#define NOME_DA_CONSTANTE valor

int main() {
 //código
}
```
Ou seja, elas são declaradas antes da função main

Alguns aspectos importantes do uso do `#define`
- Não é necessário declarar especificamente o tipo, pois o pré-processador substitui todas as ocorrências da constante pelo valor literal durante a compilação.
- Por ser declarada antes da declaração da função `main()`, o escopo das constantes definidas no `#define` é global, então podem ser acessadas por todo o código
- No momento de compilação, o nome da constante é substituído pelo valor atribuído a ela dentro do código. Portanto, pode ser que, no processo de depuração, seja mais difícil de identificar e corrigir os problemas relacionados àquela constante. Por outro lado, pode ser um aspecto positivo, pois não utiliza memória adicional da máquina

Outra opção é o uso do `const`, que, assim como o `#define`, é utilizado para declarar constantes no código
- Ao contrario do `#define`, no momento da compilação, o `const` é tratado como se fosse uma variável de valor imutável, então suas ocorrências no decorrer do código ainda são tratadas pelo nome da constante e não substituídas pelo valor. Por um lado é bom para a depuração, mas por outro pode consumir memória se não for otimizado.


<div  style="background: rgba(153, 0, 173, 0.20);"><h2>Como declarar variáveis e constantes em C?</h2><p>Por convenção, variáveis são declaradas sempre com todas as letras minúsculas, e constantes são sempre declaradas com todas as letras maiúsculas e com as palavras separadas por <i>underline</i></p></div>
