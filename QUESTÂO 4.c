#include <stdio.h>
#include <math.h>

#define TAMANHO 25

//a questao nao falava que os numeros tinham que ser 'achados' pelo proprio codigo

int main(){
	int primo[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
	int i;
    int inicio = 0;
    int meio;
    int fim = TAMANHO - 1;
    int numProcurado;
    int encontrado = 0;
    
    printf("Digite um numero de 1 a 100 a fim de verificar se este e primo: ");
    scanf("%d", &numProcurado);
    
    
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        
        if (primo[meio] == numProcurado) {
            printf("O numero %d e primo e foi encontrado na lista.", numProcurado);
            encontrado = 1;  
            break;  
        }
       
        else if (primo[meio] > numProcurado) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        } 
    }

    if (!encontrado) {
        printf("O numero %d nao foi encontrado na lista, ou seja, nao e primo\n", numProcurado);
    } 

    return 0;
}

