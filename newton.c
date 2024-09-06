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

    // Verifica se a estimativa inicial é 0 e, se for, define um valor padrão
    if (x0 == 0) {
        x0 = 1.0;  // Ajuste conforme necessário
        printf("A estimativa inicial era 0. Usando uma estimativa padrão de 1.0\n");
    }

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

    // Solicita ao usuário um valor para substituir na expressão x^2 - valor
    printf("Digite um valor positivo para a expressão x^2 - valor: ");
    scanf("%lf", &valor_usuario);

    // Tratamento de casos onde o valor é 0 ou negativo
    if (valor_usuario == 0) {
        printf("A raiz para x^2 = 0 é: 0.000000\n");
        return 0;
    } else if (valor_usuario < 0) {
        printf("Não há solução real para x^2 = %.6lf, pois o valor é negativo.\n", valor_usuario);
        return 0;
    }

    // Solicita ao usuário um valor inicial para a estimativa
    printf("Digite uma estimativa inicial: ");
    scanf("%lf", &x0);

    // Calcula a raiz usando o Método de Newton
    double raiz = newton_method(x0);

    // Exibe o resultado
    printf("A raiz aproximada é: %.6lf\n", raiz);

    return 0;
}
