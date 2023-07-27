#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Global vaiables
char blackPawn = '$';
char blackBishop = '!';
char blackKnight = '#';
char blackRook = '%';
char blackQueen = '(';
char blackKing = ')';

char whitePawn = '@';
char whiteBishop = '&';
char whiteKnight = '^';
char whiteRook = '?';
char whiteQueen = '<';
char whiteKing = '>';


void chessBoard()
{    
    // char blackPawnRow[][1] = blackPawn * 8;
    // char whitePawnRow[][6] = whitePawn * 8;

    char rows[8][8];

    rows[0][0] = blackRook;
    rows[0][1] = blackKnight;
    rows[0][2] = blackBishop; 
    rows[0][3] = blackQueen;
    rows[0][4] = blackKing;
    rows[0][5] = blackBishop;
    rows[0][6] = blackKnight;
    rows[0][7] = blackRook;

    rows[1][0] = blackPawn;
    rows[1][1] = blackPawn;
    rows[1][2] = blackPawn;
    rows[1][3] = blackPawn;
    rows[1][4] = blackPawn;
    rows[1][5] = blackPawn;
    rows[1][6] = blackPawn;
    rows[1][7] = blackPawn;

    rows[2][0] = ' ';
    rows[2][1] = ' ';
    rows[2][2] = ' ';
    rows[2][3] = ' ';
    rows[2][4] = ' ';
    rows[2][5] = ' ';
    rows[2][6] = ' ';
    rows[2][7] = ' ';

    rows[3][0] = ' ';
    rows[3][1] = ' ';
    rows[3][2] = ' ';
    rows[3][3] = ' ';
    rows[3][4] = ' ';
    rows[3][5] = ' ';
    rows[3][6] = ' ';
    rows[3][7] = ' ';

    rows[4][0] = ' ';
    rows[4][1] = ' ';
    rows[4][2] = ' ';
    rows[4][3] = ' ';
    rows[4][4] = ' ';
    rows[4][5] = ' ';
    rows[4][6] = ' ';
    rows[4][7] = ' ';

    rows[5][0] = ' ';
    rows[5][1] = ' ';
    rows[5][2] = ' ';
    rows[5][3] = ' ';
    rows[5][4] = ' ';
    rows[5][5] = ' ';
    rows[5][6] = ' ';
    rows[5][7] = ' ';

    rows[6][0] = whitePawn;
    rows[6][1] = whitePawn;
    rows[6][2] = whitePawn;
    rows[6][3] = whitePawn;
    rows[6][4] = whitePawn;
    rows[6][5] = whitePawn;
    rows[6][6] = whitePawn;
    rows[6][7] = whitePawn;

    rows[7][0] = whiteRook;
    rows[7][1] = whiteKnight;
    rows[7][2] = whiteBishop; 
    rows[7][3] = whiteQueen;
    rows[7][4] = whiteKing;
    rows[7][5] = whiteBishop;
    rows[7][6] = whiteKnight;
    rows[7][7] = whiteRook;

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            printf("%c", rows[i][j]);
            printf("\n");
}

int main(void)
{
    chessBoard();
}