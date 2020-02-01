#include <iostream>
#include "matrix_search.h"

using namespace std;

int *LinearSearch(int **matrix, int value) {

    int *mass = new int[column];
    for (unsigned int j = 0; j < column; j++) {
        bool found = false;
        for (unsigned int i = 0; i < line; i++) {

            if (matrix[i][j] == value) {
                mass[j] = i;
                found = true;
            }
        }
        if(!found){
            mass[j] = -1;
        }
    }
    return mass;
}

int *InterpolarSearch(int **matrix, int value) {

    int *mass = new int[column];

    for (int i = 0; i < column; i++) {
        unsigned int current = 0, left = 0, right = line - 1;
        bool found = false;
        while ((matrix[left][i] < value) && (matrix[right][i] > value) && !found) {

            current =
                    left +
                    ((value - matrix[left][i]) * (right - left)) / (matrix[right][i] - matrix[left][i]);

            if (matrix[current][i] < value) {
                left = current + 1;

            } else if (matrix[current][i] > value) {
                right = current - 1;

            } else {
                found = true;
            }
        }

        if (matrix[left][i] == value) {
            mass[i] = left;

        } else if (matrix[right][i] == value) {
            mass[i] = right;

        } else if (matrix[current][i] == value) {
            mass[i] = current;
        }
        else {
            mass[i] = -1;
        }
    }
    return mass;
}
