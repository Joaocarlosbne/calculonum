#include <stdio.h>
#include <math.h>

#define EPSILON 0.000001  // Precisão desejada

double valor_usuario;  // Variável global para armazenar o valor inserido pelo usuário

// Definição da função f(x)
double f(double x) {
    return x * x - valor_usuario;
}

// Definição da derivada de f(x)
double f_prime(double x) {
    return 2 * x;
}

// Implementação do Método de Newton
double newton_method(double x0) {
    double x1;
    while (1) {
        // Calcula a próxima estimativa
        x1 = x0 - f(x0) / f_prime(x0);

        // Verifica se a diferença é menor que a precisão desejada
        if (fabs(x1 - x0) < EPSILON)
            break;

        // Atualiza x0 para a próxima iteração
        x0 = x1;
    }
    return x1;
}

int main() {
    double x0;

    // Solicita ao usuário um valor para substituir o 9 na expressão
    printf("Digite um valor para a expressão x^2 - valor: ");
    scanf("%lf", &valor_usuario);

    // Solicita ao usuário um valor inicial para a estimativa
    printf("Digite uma estimativa inicial: ");
    scanf("%lf", &x0);

    // Calcula a raiz usando o Método de Newton
    double raiz = newton_method(x0);

    // Exibe o resultado
    printf("A raiz aproximada é: %.6lf\n", raiz);

    return 0;
}
