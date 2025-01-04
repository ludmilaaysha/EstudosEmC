## printf
Para imprimir informações, sabemos que usamos a função `printf`. Para imprimir essas informações com valores de variáveis dentro da string, basta indicar o tipo da varíavel a ser impressa através dos especificadores e, após o fechamento das aspas, o nome da variável. Por exemplo,
`printf("O número %d é o secreto\n", secretNum);`

Os especificadores são:
- **`%d` e `%i`**: Ambos representam inteiros, mas o **`d`** refere-se a "decimal", enquanto **`i`** remete a "integer". O `%d` é mais usado, mas ambos são intercambiáveis no contexto de `printf`.
- **`%u`**: Para inteiros sem sinal, o **`u`** denota "unsigned", reforçando que esses valores são sempre positivos.
- **`%f`**: Para números de ponto flutuante.
- **`%c`**: Representa um caractere único.
- **`%s`**: Para strings, que são arrays de caracteres terminados em `\0`.
- **`%x` / `%X`**: O **`x`** vem de "hexadecimal", pois o sistema de numeração base 16 usa caracteres `0-9` e `a-f`.
- **`%o`**: O **`o`** significa "octal", o sistema de numeração base 8.
- **`%p`**: Para ponteiros, o **`p`** é intuitivamente associado a "pointer".
- **`%e` e `%E`**: O **`e`** remete à "notação científica exponencial".
- **`%g` e `%G`**: Combinação de `%f` e `%e`, escolhendo a mais compacta para representar o número.

## scanf
Utiliza o mesmo sistema do `printf` em relação aos especificadores do tipo de entrada. A estrutura do `scanf` é a seguinte:
`scanf("%d", &nomeVariavel)`, 
em que `%d` representa o especificador do tipo do valor a ser armazenado e `nomeVariavel` representa o nome da variável que armazenará o valor lido. Contudo, o nome da variável vem acompanhado de um & (e comercial), pois indica que o valor a ser lido será armazenado no endereço daquela variável.