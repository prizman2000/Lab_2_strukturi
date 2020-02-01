#include <iostream>
#include "matrix_search.h"

using namespace std;

void FillingMatrix(int **matrx) {

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {

            cout << "Введите значение элемента " << i + 1 << " строки и " << j + 1 << " столбца: ";
            cin >> matrx[i][j];
            cout << endl;
        }
    }
}

void DisplayingMatrix(int **matrx) {

    cout << "Ваша матрица:" << endl << endl;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < column; j++) {

            cout << matrx[i][j] << " ";
        }
        cout << endl << endl;
    }
}
