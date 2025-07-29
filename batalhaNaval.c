#include <stdio.h>

int main() {
    //int num_coluna[10]; // se quiser da pra ativar pra melhorar o endereçamento da fita
    char colunas[10] = {'A', 'B', 'C','D','E','F', 'G', 'H', 'I','J'};
    int tabuleiro[10][10] = {}; // aqui ele faz o zero virar agua

    // Colocando os navios nos endereços, 0 É A - 1 É B E POR AI VAI a parte vertical
    tabuleiro[4][0] = tabuleiro[5][0] = tabuleiro[6][0] = 3;

    // aqui entra os horizontais - deixei zero pra ficar mais facil (se não tem que fazer sempre -1 pra bater)
    tabuleiro[9][3] = tabuleiro[9][4] = tabuleiro[9][5] = 3;


    //inserindo navios na diagonal que tem as coordenadas iguais - esquerda

    for(int i=0; i<3;i++){
        tabuleiro[i][i]=3; //facil aqui porque é só considerar o seguinte: cada i nesse loop for vai entrar repetido na matriz tabuleiro, representando a diagonal

    }

    //diagonal que vem da direita
    for(int i=0; i<3; i++){
        tabuleiro[i][9-i] = 3; //aqui a gente pega qual coluna quer fazer a diagonal e subtrai o numero dela do i (como o navio tem 3 casas o 2C é o limite pra ficar certo, se não ele aparece do outro lado)
    }

    // Exibindo o tabuleiro
    printf("\n\n\t    BATALHA NAVAL   \n\n"); // ajuste pra centralizar o texto

    //
    printf("    "); // aqui o\t não funcionou pra alinhar, tive que digitar 4 espaços... ai deu
    for (int i = 0; i < 10; i++) {
        printf("%d", i); // achei legal colocar o numero na frente para saber como identificar o numero da coluna
        printf("%c   ", colunas[i]); // mais espaços pra encaixar, e as letras da coluna vai entrar no lugar do numero quer seria o i
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
