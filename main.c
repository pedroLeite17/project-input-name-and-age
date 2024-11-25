#include <stdio.h>
#include <string.h> // Biblioteca para strlen
int main() {

    char nome [50];
    int numero;
    char palavra[50];
    int dobroNumero;
    int numChar;

    int dobleInt(int numero){
        dobroNumero= numero*2;
    }

    // Entrada nome
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    numChar = strlen(nome);
    // Entrada do numero
    printf("Digite um numero: ");
    scanf("%d", &numero);

    //dobroNumero=numero*2;
    dobleInt(numero);

    // Entrada da palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);


    printf("Ola, %s! O teu nome e composto por %d caracteres.\n", nome, numChar);
    printf("Ola, %s! O numero que escolheste e %d.\n", nome, numero);
    printf("Ola, %s! O dobro do numero que escolheste e %d.\n", nome, dobroNumero);
    printf("A palavra e: %s.\n", palavra);
    printf("O numero mais o comprimento da palavra e: %d.\n", numero + strlen(palavra));

    return 0;
}

