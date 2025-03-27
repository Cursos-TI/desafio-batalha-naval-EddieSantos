#include <stdio.h>

/*
    Desafio: Nível Novato - Posicionando Navios no Tabuleiro
    
    Curso ADS - Introdução à Programação de Computadores
    Tema 4 - Jogo de Batalha Naval
    Exercício: Desafio Nível Novato - Posicionando Navios no Tabuleiro
    Data: 27 de Março de 2025
    Aluno: Ednilson Graciano dos Santos
    Matrícula: 202503249997 
    Versão: 0.1.0v
*/

int main() {

    int tabuleiro[10][10];
    int navio1[3] = {3, 3, 3},
        navio2[3] = {3, 3, 3},
        navio3[2] = {3, 3},
        navio4[2] = {3, 3}
    ;
    int linha, coluna, index;

    printf("### Bem-vindos ao Jogo Batalha Naval! ###\n");
    printf("### Tabuleiro do Jogo ###\n");
    // Exibe o tabuleiro inicialmente 0 com zeros
    index = -1;
    printf("    A  B  C  D  E  F  G  H  I  J\n");
    for (int i = 0; i < 10; i++) {
        printf("%d -", index += 1);
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Posiciona o Navio 1 (vertical)
    linha = 2; //  Aqui é a coordenada inicial da linha 
    coluna = 3; // Aqui é a coordenada inicial da coluna
    for (int i = 0; i < 3; i++) { // 3 posições para o navio1 na vertical
        tabuleiro[linha + i][coluna] = navio1[i]; // [coluna] mantém a mesma coluna, ou seja, 3º coluna a direita a partir da coordenada inicial da coluna = 3
        // [linha + i] incrementa 3 linhas na mesma coluna, ou seja, 3 linhas abaixo a partir da coordenada inicial da linha = 2, e o navio1[i] é o valor do navio1[i] 

        // Enquanto i for menor que 3, incrementa 1 em i e repete o processo, e coluna mantém a mesma coluna 3, e navio1[i] é o valor do navio1[i] 3 três vezes
    }
    // Assim acontede com os outros navios, só muda a coordenada inicial da linha e coluna e o tamanho do navio

    // Posiciona o Navio 2 (horizontal
    linha = 5;
    coluna = 4;
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha][coluna + i] = navio2[i];
        // coluna + i incrementa 3 posições na horizontal
    }
    // Posiciona o Navio 3 (vertical)
    linha = 7;
    coluna = 6;
    for (int i = 0; i < 2; i++) {
        tabuleiro[linha + i][coluna] = navio3[i];
    }
    // Posiciona o Navio 4 (horizontal)
    linha = 9;
    coluna = 7;
    for (int i = 0; i < 2; i++) {
        tabuleiro[linha][coluna + i] = navio4[i];
    }
    // Exibe o tabuleiro
    printf("\nTabuleiro com 4 navios posicionados\n");
    index = -1;
    printf("    A  B  C  D  E  F  G  H  I  J\n");
    for (int i = 0; i < 10; i++) {
        printf("%d -", index += 1);
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}