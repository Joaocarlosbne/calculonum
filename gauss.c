#include <stdio.h>
#include <math.h>

int main(){
    // Declaração de variáveis:
    // Matriz 'a' armazena os coeficientes do sistema linear
    // Vetores 'x', 'r', 'erro', 'xant' para armazenar as estimativas, resultados e erros
    float a[3][3], x[3], r[3], erro[3], xant[3];
    int cont = 0;  // Contador de iterações
    
    // Inicializando a matriz 'a' e o vetor 'r' com valores específicos
    a[0][0] = 3;    a[0][1] = (-0.1);   a[0][2] = (-0.2);   r[0] = 7.85;
    a[1][0] = 0.1;  a[1][1] = 7;        a[1][2] = (-0.3);   r[1] = (-19.3);
    a[2][0] = 0.3;  a[2][1] = (-0.2);   a[2][2] = 10;       r[2] = 71.4;
    
    // Inicializando os vetores de erro e as estimativas anteriores com 0
    erro[0] = 0;    erro[1] = 0;        erro[2] = 0;
    xant[0] = 0;    xant[1] = 0;        xant[2] = 0;
    
    // Entrada dos valores iniciais de X1, X2, X3
    printf("Digite os valores iniciais de X1, X2 e X3 respectivamente\n");
    scanf("%f %f %f", &x[0], &x[1], &x[2] );
    
    // Iteração do método de Gauss-Seidel até que as soluções converjam
    while( (( (a[0][0]*x[0]) + (a[0][1]*x[1]) + (a[0][2]*x[2]) ) != r[0]) ){
        // Atualiza os valores de X1, X2, X3 com base nas equações do sistema
        x[0] = (r[0] - (a[0][1]*x[1]) - (a[0][2]*x[2])) / a[0][0];
        x[1] = (r[1] - (a[1][0]*x[0]) - (a[1][2]*x[2])) / a[1][1];
        x[2] = (r[2] - (a[2][0]*x[0]) - (a[2][1]*x[1])) / a[2][2];

        // Incrementa o contador de iterações
        cont ++;
        
        // Calcula o erro relativo para cada variável em relação à iteração anterior
        erro[0] = (sqrt(pow(((x[0] - xant[0]) / x[0]),2))*100);
        erro[1] = (sqrt(pow(((x[1] - xant[1]) / x[1]),2))*100);
        erro[2] = (sqrt(pow(((x[2] - xant[2]) / x[2]),2))*100);
        
        // Atualiza as estimativas anteriores para a próxima iteração
        xant[0] = x[0]; xant[1] = x[1]; xant[2] = x[2];
        
        // Exibe os valores atuais de X1, X2, X3 e seus erros
        printf("X1 = %f \tErro X1 = %f \t\tX2 = %f \tErro X2 = %f \t\tX3 = %f \tErro X3 = %f \n", 
               x[0], erro[0], x[1], erro[1], x[2], erro[2]);
    }

    // Exibe o número total de iterações
    printf("\nTotal de iteracoes = %d \n", cont);

    // Exibe os valores finais de X1, X2, X3 e seus erros
    printf("X1 = %f \tErro X1 = %f \t\tX2 = %f \tErro X2 = %f \t\tX3 = %f \tErro X3 = %f \n", 
           x[0], erro[0], x[1], erro[1], x[2], erro[2]);
    
    return 0;
}
