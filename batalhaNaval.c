#include <stdio.h>

int main() {

    char colunas[10] = {'A', 'B', 'C','D','E','F', 'G', 'H', 'I','J'};
    int tabuleiro[10][10] = {}; // 
    int numeros =0;

    //TRIANGULO numero 8
    for(int i=0; i<3;i++){
        tabuleiro[5][i+2]=8; // base do tri
    }

    for(int j=0;j<3;j++){
        tabuleiro[3+j][3+j]=8; //diag direita
     }
    for(int i=0; i<3; i++){
        tabuleiro[3+i][3-i] = 8;// diag esq
    } 
       
    for(int j=0;j<3;j++){
        tabuleiro[4][3]= 8; //buraco que ficou no meio
    }
    


    printf("\n\n\t    BATALHA NAVAL CONE   \n\n"); // 

    //
    printf("\t"); 
    for (int i = 0; i < 10; i++) {

        printf("%c \t", colunas[i]); 
    }
    printf("\n");

    // agora os numeros zero
    for (int i = 0; i < 10; i++) {
        printf("%d\t",i);
        for (int j = 0; j < 10; j++) {
            printf("%d \t", tabuleiro[i][j]);
        }
        printf("\n");
    }

//PARTE 2 -  A CRUZ

    char colunas2[10] = {'A', 'B', 'C','D','E','F', 'G', 'H', 'I','J'};
    int tabuleiro2[10][10] = {}; // 


    
    for(int i=0; i<3;i++){
        tabuleiro2[5][i+6]=5; //direita
    }

    for(int j=0;j<3;j++){
        tabuleiro2[j+6][5]=5; //baixo
     }
    for(int i=0; i<3;i++){
        tabuleiro2[5][i+2]=5; //esquerda
    }

    for(int j=0;j<3;j++){
        tabuleiro2[j+2][5]=5; //parte de cima
     }
    
    for(int j=0;j<3;j++){
        tabuleiro2[5][5]=5; //ultimo ponto
     }
    


    printf("\n\n\t  BATALHA NAVAL - CRUZ  \n\n"); // 

    //
    printf("\t"); 
    for (int i = 0; i < 10; i++) {
        printf("%c \t", colunas2[i]); 
    }
    printf("\n");

    // agora os numeros zero
    for (int i = 0; i < 10; i++) {
        printf("%d\t", i);
        for (int j = 0; j < 10; j++) {
            printf("%d \t", tabuleiro2[i][j]);
        }
        printf("\n");
    }


//PARTE 3 -  OCTAEDRO

    char colunas3[10] = {'A', 'B', 'C','D','E','F', 'G', 'H', 'I','J'};
    int tabuleiro3[10][10] = {}; // 

   for(int i=0; i<3; i++){
        tabuleiro3[2+i][4-i] = 8;
   }    
       for(int i=0; i<3; i++){
        tabuleiro3[2+i][4+i] = 8;
    }
    
        for(int i=0; i<3; i++){
        tabuleiro3[6-i][4+i] = 8;
    }
    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            tabuleiro3[i+3][j+3] = 8;
        }
    }


    printf("\n\n\t  BATALHA NAVAL - OCTAEDRO  \n\n"); // 


    printf("\t"); // a parte das letras - empurrar antes do for
    for (int i = 0; i < 10; i++) {
        printf("%c \t", colunas3[i]); 
    }

    printf("\n");


    // agora os numeros zero
    for (int i = 0; i < 10; i++) {
        printf("%d\t", i);
        for (int j = 0;j < 10; j++) {
            printf("%d \t", tabuleiro3[i][j]);
        }
        printf("\n");
    }




    return 0;
}
