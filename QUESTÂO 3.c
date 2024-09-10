#include <stdio.h>

#define TAMANHO 100

int main() {
    int conta[TAMANHO];
    int i;
    int inicio = 0;
    int meio;
    int fim = TAMANHO - 1;
    int valorProcurado;
    int encontrado = 0;
    int comp = 0;
    
    
    for (i = 0; i < TAMANHO; i++) {
        conta[i] = i + 1;
    }
    
   
    printf("Digite o numero da conta a ser buscada de 1 a 100: ");
    scanf("%d", &valorProcurado);
    
    
    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        
        if (conta[meio] == valorProcurado) {
            printf("A conta numero %d foi encontrado na posicao %d.\n", valorProcurado, meio + 1);
            encontrado = 1;  
            break;  
        }
       
        else if (conta[meio] > valorProcurado) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
        
        comp++;  
    }

    if (!encontrado) {
        printf("A conta numero %d nao foi encontrado na lista, ou seja, nao esta ativa\n", valorProcurado);
    } else {
        printf("A conta numero %d foi encontrado na lista na posicao %d. Foram necessarias %d comparacoes.\n", valorProcurado, meio + 1, comp);
    }

    return 0;
}

