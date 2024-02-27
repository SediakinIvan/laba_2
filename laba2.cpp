#include "Matrix.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Matrix::Matrix(unsigned int rows, unsigned int cols) : m(rows), n(cols) {
    data = new int* [m];
    for (unsigned int i = 0; i < m; ++i) {
        data[i] = new int[n]();
    }
}

Matrix::~Matrix() {
    for (unsigned int i = 0; i < m; ++i) {
        delete[] data[i];
    }
    delete[] data;
}

int* Matrix::operator[](unsigned int index) {
    return data[index];
}

void Matrix::fillRandom() {
    srand(time(0));
    for (unsigned int i = 0; i < m; ++i) {
        for (unsigned int j = 0; j < n; ++j) {
            data[i][j] = rand() % 10;
        }
    }
}

std::ostream& operator<<(std::ostream& os, const Matrix& matrix) {
    for (unsigned int i = 0; i < matrix.m; ++i) {
        for (unsigned int j = 0; j < matrix.n; ++j) {
            os << matrix.data[i][j] << " ";
        }
        os << std::endl;
    }
    return os;
}

Matrix Matrix::operator+(const Matrix& otherMatrix) const {
}

Matrix& Matrix::operator+=(const Matrix& otherMatrix) {
}

Matrix Matrix::operator-(const Matrix& otherMatrix) const {
}

Matrix& Matrix::operator-=(const Matrix& otherMatrix) {
}

Matrix Matrix::operator*(const Matrix& otherMatrix) const {
}

bool Matrix::operator==(const Matrix& otherMatrix) const {
}

bool Matrix::operator!=(const Matrix& otherMatrix) const {
}

int main() {
    const unsigned int rows = 3;
    const unsigned int cols = 4;

    Matrix myMatrix(rows, cols);

    myMatrix.fillRandom();

    std::cout << myMatrix;

    return 0;
}
