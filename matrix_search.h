#ifndef LAB_2_STRUKTURI_MATRIX_SEARCH_H
#define LAB_2_STRUKTURI_MATRIX_SEARCH_H

const int line = 13;
const int column = 5;

void FillingMatrix(int **matrx);

void DisplayingMatrix(int **matrx);

int *LinearSearch(int **matrix, int value);

int *InterpolarSearch(int **matrix, int value);

#endif //LAB_2_STRUKTURI_MATRIX_SEARCH_H
