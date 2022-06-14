#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int **allocate_board(int Rows, int Cols)
{    
    // allocate Rows rows, each row is a pointer to int
    int **board = (int **)malloc(Rows * sizeof(int *)); 
    int row;

    // for each row allocate Cols ints
    for (row = 0; row < Rows; row++) {
        board[row] = (int *)malloc(Cols * sizeof(int));
    }

    return board;
}


void test(int **ptr, int M, int N) {
    for(int i = 0; i < M; i++) {
        for(int j = 0; j< N; j++) {
            ptr[i][j] = (i*N)+j;
            printf("%d ", ptr[i][j]);
        }
    }

}

// you must supply the number of rows
void free_board(int **board, int Rows) 
{
    int row;

    // first free each row
    for (row = 0; row < Rows; row++) {
         free(board[row]);
    }

    // Eventually free the memory of the pointers to the rows
    free(board);
 }

 int main() {
    int M = 4;
    int N = 3;
    int **ptr = allocate_board(M, N);
    test(ptr,M,N);
    printf("%d", **ptr);
    

    free_board(ptr, M);
 }
