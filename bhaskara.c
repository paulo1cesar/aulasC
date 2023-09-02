#include <stdio.h>
#include <string.h>
#include <math.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
} 

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
    } 


int main (){

    double a, b, c;
    double delta, x1, x2;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    limpar_entrada();
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    limpar_entrada();
    printf("Coeficiente a: ");
    scanf("%lf", &c);

    delta = b * b - 4 * a * c;
    
    if (a == 0 || delta < 0) {
        printf("Esta equacao nao possui raizes reais");
    }
    else {

        x1 = (- b + sqrt(delta)) / (2 * a);
        x2 = (- b - sqrt(delta)) / (2 * a); 
        printf("X1 =%.4lf\n", x1);
        printf("X2 =%.4lf", x2);   
    };

    return 0;
}