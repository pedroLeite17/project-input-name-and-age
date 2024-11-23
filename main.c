#include <stdio.h>
#include <string.h> // Biblioteca para strlen
int main() {
    char nome [50];
    int numero;
    char palavra[50];
    int dobroNumero;
    int numChar;
    // Entrada do nome
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    numChar = strlen(nome);
    // Entrada do número
    printf("Digite um número: ");
    scanf("%d", &numero);
    dobroNumero=numero*2;
    // Entrada da palavra
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    // Exibição personalizada
    printf("Olá, %s! O teu nome é composto por %d caracteres.\n", nome, numChar);
    printf("Olá, %s! O número que escolheste é %d.\n", nome, numero);
    printf("Olá, %s! O dobro do número que escolheste é %d.\n", nome, dobroNumero);
    printf("A palavra é: %s.\n", palavra);
    printf("O número mais o comprimento da palavra é: %d.\n", numero + strlen(palavra)); return 0;
}

