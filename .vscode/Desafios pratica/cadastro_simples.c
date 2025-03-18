#include <stdio.h>

int main() {

    char nome[20];
    int idade;
    float altura;

    printf ("Cadastro:\n");
    
    printf ("Digite seu primeiro nome: \n");
    scanf ("%s", nome);

    printf ("Digite sua idade: \n");
    scanf ("%d", &idade);

    printf ("Digite sua altura: \n");
    scanf ("%f", &altura);

    printf("\nDados cadastrados:\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    
    return 0;

}
