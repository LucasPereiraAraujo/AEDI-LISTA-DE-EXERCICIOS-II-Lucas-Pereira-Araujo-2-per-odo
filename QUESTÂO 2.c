#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	int tamanho = 50;
	int lista[tamanho];
	int valor_buscado;
	int controle = - 1;
	int cont = 0;
	int i;
	
	srand(time(NULL));
	
	for(i = 0; i < tamanho; i++){
		
		lista[i] = rand() % 5 + 1;
		
	}
	
    printf("Informe a nota (de a 1 a 5) a ser buscada: ");
    scanf("%d", &valor_buscado);
    	
		for (i = 0; i < tamanho; i++) {
        if (valor_buscado == lista[i]) { 
            controle = i;  
            cont++; 
        }
    }
    
        printf("O valor digitado foi encontrado %d vezes\n", cont);
        
        
        printf("Esta sao todas as notas dadas pelas criancas: ");
    
    for (i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);  
    }
    
    return 0;  
}
