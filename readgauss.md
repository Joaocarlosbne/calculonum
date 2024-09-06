# Método de Gauss-Seidel em C para Resolver Sistemas Lineares

## Introdução

Este programa implementa o **Método de Gauss-Seidel** para resolver sistemas lineares da forma \( A \cdot x = r \), onde:
- \( A \) é a matriz de coeficientes.
- \( x \) é o vetor de incógnitas.
- \( r \) é o vetor de termos independentes.

O método de Gauss-Seidel é um processo iterativo, que ajusta progressivamente os valores das incógnitas até que a solução converja para um valor próximo do real, dentro de uma margem de erro.

## Passo a Passo do Método de Gauss-Seidel

1. **Escolha de valores iniciais**: O método começa com uma estimativa inicial para as incógnitas.
2. **Iteração**: A cada iteração, o método atualiza o valor de cada incógnita usando os valores já atualizados das outras incógnitas.
3. **Cálculo do erro**: Em cada iteração, o erro relativo entre o valor atual de cada incógnita e o valor da iteração anterior é calculado.
4. **Parada**: O processo de iteração continua até que o erro seja suficientemente pequeno, ou seja, até que as incógnitas estejam suficientemente próximas da solução real.

## Variáveis Utilizadas

- `a[3][3]`: Matriz de coeficientes \( A \).
- `x[3]`: Vetor de incógnitas \( x \), armazenando as estimativas atuais de \( x_1, x_2, x_3 \).
- `r[3]`: Vetor de termos independentes \( r \), ou seja, o lado direito da equação.
- `erro[3]`: Vetor que armazena o erro relativo entre iterações para cada incógnita.
- `xant[3]`: Vetor que armazena os valores de \( x_1, x_2, x_3 \) da iteração anterior.
- `cont`: Contador de iterações.

## Sintaxe do Código

Para compilar e rodar o código, siga os passos:

1. Compile o código:
   ```bash
   gcc -o gauss_seidel gauss_seidel.c -lm
