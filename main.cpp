#include <iostream>
#include "matrix_search.h"

using namespace std;

int main() {

    int **matrix;
    int value;
    int *linMass;
    int *interMass;

    matrix = new int *[line];
    for (int i = 0; i < line; i++) {
        matrix[i] = new int[column];
    }

    FillingMatrix(matrix);

    DisplayingMatrix(matrix);

    cout << "Что ищем: ";
    cin >> value;
    cout << endl << "Линейный поиск:" << endl << endl;
    linMass = LinearSearch(matrix, value);

    for (int i = 0; i < column; i++) {
        if (linMass[i] == -1) {
            cout << "Элемент в " << i + 1 << " строке не найден!\n";
        } else {
            cout << "Во " << i + 1 << " столбце. В " << linMass[i] + 1 << " строке." << endl;
        }
    }

    cout << endl << "Интерполяционный поиск:" << endl << endl;

    interMass = InterpolarSearch(matrix, value);

    for (int i = 0; i < column; i++) {
        if (interMass[i] == -1) {
            cout << "Элемент в " << i + 1 << " строке не найден!\n";
        } else {
            cout << "Во " << i + 1 << " столбце. В " << interMass[i] + 1 << " строке." << endl;
        }
    }

    return 0;
}