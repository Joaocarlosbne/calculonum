
# MEtodo de Newton's en C

## Descrição

Este programa implementa o Método de Newton para encontrar uma raiz de uma função quadrática da forma `f(x) = x^2 - valor`, onde `valor` é uma constante inserida pelo usuário. O programa pede uma estimativa inicial e, usando o Método de Newton, aproxima a raiz da equação `f(x) = 0`.

## Como Funciona

1. **Entrada do Usuário**:
   - O programa solicita ao usuário que insira um valor para a constante `valor` na expressão `f(x) = x^2 - valor`. Este valor será utilizado na função para determinar a raiz.

2. **Estimativa Inicial**:
   - Após o usuário fornecer o valor para `valor`, o programa solicita uma estimativa inicial. Esta estimativa é o ponto de partida para o Método de Newton.

3. **Cálculo da Raiz**:
   - Usando o Método de Newton, o programa itera a partir da estimativa inicial, ajustando-a em cada passo até que a diferença entre as estimativas consecutivas seja menor que uma precisão predefinida (`EPSILON`).

4. **Resultado**:
   - O programa exibe a raiz aproximada da equação `x^2 - valor = 0` com uma precisão de 6 casas decimais.

## Como Usar

1. **Compile o Programa**:
   - Compile o código usando um compilador C como `gcc`:
     ```bash
     gcc -o newton newton_method.c -lm
     ```

2. **Execute o Programa**:
   - Execute o programa compilado:
     ```bash
     ./newton
     ```

3. **Insira o Valor da Constante**:
   - Quando solicitado, insira o valor da constante para a qual você deseja encontrar a raiz. Por exemplo, se você digitar `16`, o programa resolverá a equação `x^2 - 16 = 0`.

4. **Insira a Estimativa Inicial**:
   - Insira uma estimativa inicial da raiz. Se você estiver tentando encontrar a raiz quadrada de 16, um valor inicial como `4.0` seria uma boa escolha.

5. **Visualize o Resultado**:
   - O programa calculará a raiz aproximada e exibirá o resultado na tela.

## Exemplo de Uso

Aqui está um exemplo de execução do programa:

```plaintext
Digite um valor para a expressão x^2 - valor: 16
Digite uma estimativa inicial: 4
A raiz aproximada é: 4.000000
```

Neste exemplo, o programa calculou a raiz quadrada de 16 usando uma estimativa inicial de 4, e retornou o valor exato de 4.

## Observações

- O programa foi projetado para encontrar a raiz positiva da equação `x^2 - valor = 0`. Para valores negativos, o método pode não funcionar corretamente, pois ele se baseia em funções reais.

- Certifique-se de fornecer uma estimativa inicial próxima da raiz esperada para garantir a rápida convergência do Método de Newton.

## Requisitos

- Um compilador C como `gcc`.
- Sistema operacional capaz de executar programas C (Linux, MacOS, Windows com Cygwin ou MinGW).
