# Método de Newton em C para Encontrar Raízes Quadradas

## Introdução

Este programa implementa o Método de Newton para encontrar a raiz quadrada de um número fornecido pelo usuário. O método de Newton é um algoritmo iterativo para encontrar aproximações das raízes de uma função. No nosso caso, a função é \( f(x) = x^2 - valor \), onde o `valor` é o número para o qual estamos procurando a raiz quadrada.

## O Método de Newton - Passo a Passo

O Método de Newton se baseia nas seguintes etapas:

1. **Escolha de uma estimativa inicial**: Começamos com uma estimativa inicial \( x_0 \).
2. **Iteração**: Utilizamos a fórmula de Newton para encontrar uma nova estimativa \( x_1 \):
   
   \[
   x_1 = x_0 - \frac{f(x_0)}{f'(x_0)}
   \]
   
   Onde \( f(x) \) é a função e \( f'(x) \) é a derivada da função.
   
3. **Repetição**: O processo de iteração é repetido até que a diferença entre duas estimativas consecutivas seja menor que um valor de precisão pré-definido (neste caso, 0.000001).

4. **Parada**: O método para quando a diferença entre \( x_1 \) e \( x_0 \) for menor que a precisão desejada, o que significa que a aproximação da raiz está suficientemente precisa.

## Variáveis Utilizadas no Código

- `EPSILON`: Constante que define a precisão desejada para o cálculo da raiz. Quanto menor o valor, mais precisa será a solução, porém mais iterações serão necessárias.
  
- `valor_usuario`: Variável global usada para armazenar o valor fornecido pelo usuário. Este valor é utilizado na função \( f(x) = x^2 - \text{valor_usuario} \), cujo zero estamos tentando encontrar.

- `f(double x)`: Função que implementa \( f(x) = x^2 - \text{valor_usuario} \). Esta função é utilizada no Método de Newton para calcular o valor da função na estimativa atual.

- `f_prime(double x)`: Função que implementa a derivada de \( f(x) \), ou seja, \( f'(x) = 2x \). Esta derivada é utilizada para calcular a próxima estimativa no Método de Newton.

- `newton_method(double x0)`: Função que implementa o Método de Newton. Ela começa com uma estimativa inicial `x0` e realiza iterações até que a diferença entre estimativas sucessivas seja menor que `EPSILON`. O valor retornado é a raiz aproximada.

- `x0`: A estimativa inicial fornecida pelo usuário. Se o usuário inserir `0`, o programa define uma estimativa inicial padrão de 1.0 para evitar erro de divisão por zero.

- `x1`: A próxima estimativa calculada no processo iterativo do Método de Newton.

## Sintaxe do Código

Para compilar e rodar o código, siga os seguintes passos:

1. Compile o código:
   ```bash
   gcc -o newton_method newton_method.c -lm
