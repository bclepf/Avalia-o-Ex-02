#include <stdio.h>

int main() {

    int matriz[50][50];
    int tamanho = 0, diagonalPrincipal = 0, diagonalSecundaria = 0;
    printf("Insira a ordem da matriz quadrada: ");
    scanf("%d", &tamanho);
    
    printf("Insira os valores de cada elemento da matriz %d x %d:\n", tamanho, tamanho);
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < tamanho; i++) {
        diagonalPrincipal += matriz[i][i];
    }
    for (int i = 0; i < tamanho; i++) {
    diagonalSecundaria += matriz[i][tamanho - 1 - i];
    }
    printf("Soma da diagonalPrincipal: %d\n", diagonalPrincipal); 
    printf("Soma da diagonalSecundaria: %d\n", diagonalSecundaria);

    getch();

    return 0;
}