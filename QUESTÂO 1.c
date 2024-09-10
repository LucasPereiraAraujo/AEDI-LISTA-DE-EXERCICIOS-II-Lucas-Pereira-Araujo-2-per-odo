#include <stdio.h>

int main() {
    char palavra[7] = "lucrou";  
    int i;
    char tentativa;
    int vidas = 8;               
    int letras_restantes = 6;    
    int letra_certa[6] = {0}; 

    printf("Que comecem os jogos. Voce tera 8 tentativas para acertar uma palavra de 6 letras (lembre-se de usar somente letras minusculas)!\n");

    while (vidas > 0 && letras_restantes > 0) {

        for (i = 0; i < 6; i++) {
            if (letra_certa[i]) {
                printf("%c ", palavra[i]);
            } else {
                printf("_ ");
            }
        }
        printf("\n");

        printf("Digite uma letra: ");
        scanf(" %c", &tentativa);  

        int encontrou = 0; 


    for (i = 0; i < 6; i++) {
            if (tentativa == palavra[i] && !letra_certa[i]) {
             letra_certa[i] = 1;  
             letras_restantes--;   
             encontrou = 1;        
            }
    }

            if (!encontrou) {
             vidas--;  
             printf("Essa letra nao esta na palavra, voce perdeu uma vida\n");
        }
    }

    if (letras_restantes == 0) {
        printf("\n Parabens! Voce descobriu a palavra: %s \n", palavra);
    } else {
        printf("\n Voce perdeu, sinto muito");
    }

    return 0;
}

