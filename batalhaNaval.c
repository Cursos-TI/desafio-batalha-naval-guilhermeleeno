#include <stdio.h>

int main() {
    int num_coluna[10];
    char colunas[10] = {'A', 'B', 'C','D','E','F', 'G', 'H', 'I','J'}; // as colunas que vão rodar no loop
    int tabuleiro[10][10] = {0}; // aqui ele faz o zero virar agua

    // Colocando os navios nos endereços, 0 É A - 1 É B E POR AI VAI a parte vertical
    tabuleiro[1][0] = tabuleiro[2][0] = tabuleiro[3][0] = 3;

    // aqui entra os horizontais - deixei zero pra ficar mais facil (se não tem que fazer sempre -1 pra bater)
    tabuleiro[4][4] = tabuleiro[4][5] = tabuleiro[4][6] = 3;

    // Exibindo o tabuleiro
    printf("\n\n\t    BATALHA NAVAL   \n\n"); // ajuste pra centralizar o texto

    //
    printf("    "); // aqui o\t não funcionou pra alinhar, tive que digitar 4 espaços... ai deu
    for (int i = 0; i < 10; i++) {
        //printf("%d", i); // achei legal colocar o numero na frente para saber como identificar o numero da coluna
        printf("%c    ", colunas[i]); // mais espaços pra encaixar, e as letras da coluna vai entrar no lugar do numero quer seria o i - pra usar o printf de cima colocar +2 espaços aqui
    }
    printf("\n");

    // agora os numeros zero
    for (int i = 0; i < 10; i++) {
        printf("%d - ", i); // número da linha
        for (int j = 0; j < 10; j++) {
            printf("%d    ", tabuleiro[i][j]); //aqui ele pega o que a gente deixou como zero la em cima e imprime, podendo alterar para 3 pra representar o navio
        }
        printf("\n");
    }

    return 0;
}
