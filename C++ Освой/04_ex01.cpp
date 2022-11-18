// 04_ex01.cpp
// фигуры на шахматной доске

#include <iostream>

using namespace std;

// мое решение
// int main()
// {
//     const enum figurs {
//         king = 0,     // король
//         queen = 1,    // ферзь
//         rook = 2,     // ладья
//         elephant = 3, // слон
//         horse = 4,    // конь
//         pawn = 5,     // пешка
//         empty = 6     // пустая клетка
//     }

//     int chessBoard[8][8] =
//     {
//         {2, 4, 3, 1, 0, 3, 4, 2},
//         {5, 5, 5, 5, 5, 5, 5, 5},
//         {6, 6, 6, 6, 6, 6, 6, 6},
//         {6, 6, 6, 6, 6, 6, 6, 6},
//         {6, 6, 6, 6, 6, 6, 6, 6},
//         {6, 6, 6, 6, 6, 6, 6, 6},
//     }

//     return 0;
// }

// ответ из учебника
int main()
{
    enum Square
    {
        Empty = 0,
        Pawn,
        Rook,
        Knight,
        Bishop,
        King,
        Queen
    };
    Square chessBoard[8][8];

    chessBoard[0][0] = chessBoard[0][7];
    chessBoard[7][0] = chessBoard[7][7];

    return 0;
}