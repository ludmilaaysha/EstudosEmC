Para imprimir um texto, a string deve estar entre aspas duplas e toda instrução deve terminar com ponto e vírgula ou com chaves
`printf("Hello, World!");`

Todo código é compilado pelo computador, então, ao rodar o código, precisamos indicar a compilação com:
`gcc <nome do arquivo>`
Assim que rodar o comando gcc, o arquivo será compilado, mas as saídas não serão mostradas. Contudo, um arquivo será criado no mesmo nível que o programa compilado. Para, de fato, rodar o programa, rodamos o código
`./<nome do arquivo que foi criado>`
Geralmente, esse arquivo é o a.out, então o comando seria
`./a.out`

Podemos indicar um nome para esse código executável ao compilar o arquivo com
`gcc programa.c -o programa.out`
em que ``programa.c`` é o nome do programa a ser compilado e ``programa.out`` o arquivo executável que será criado. No Windows, pode ser `programa.exe`

Devemos importar a biblioteca <stdio.h> em todo código c. Esta é a biblioteca que permite usar os comandos printf e scanf, por exemplo.
`#include <stdio.h>`
<span style="background: rgba(54, 181, 255, 0.20);"><b>stdio significa standart input/output, ou seja, essa biblioteca permite a entrada e saída de dados no programa.</b></span>

Para que haja uma quebra de linha ao printar o conteúdo do printf na tela, é uma boa prática inserirmos um `\n` no fim da string, antes do fechamento das aspas duplas.

Também é preciso incluir uma função main, que indica o ponto de entrada no programa. Essa função main retorna um número inteiro, para indicar que a execução do programa foi bem ou mal sucedida. Por isso, ela é declarada como int e, ao final do programa, inserimos o retorno do número 0.

Assim, temos o código que printa um "Hello, World!"
```c
#include <stdio.h> //importa a biblioteca

int main() { //função que indica o início da execução do programa

    printf("Hello, World!\n"); //comando de imprimir uma string na tela

    return 0; //retorna 0 se a execução da função main() foi bem-sucedida

}
```
