#include<stdio.h>
//Vetores parte 1

//array uni-dimensional
//char nome[50];

//NAO SE ESQUECA, CHAR PODE SER USADO TANTO PARA LETRAS QUANTO PARA NUMEROS, EXEMPLO DISSO FOI A ELABORACAO DO ALFABETO PELA TABELA ASCII
int main(){

    char nome[50];
    printf("Qual seu nome:\n");
    gets(nome);
    printf("Ola %s.\n", nome);
    
    char letras[26];//Exemplo do alfabeto, em que cada numero representa uma letra do alfabeto
    int contador = 0;
    for(int i = 97; i <= 122; i++){
        letras[contador] = i;
        contador = contador + 1;
    }
    for(int i = 0; i < 26; i++){
    printf("%d == %c.\n", letras[i], letras[i]);
    }
    return 0;
}