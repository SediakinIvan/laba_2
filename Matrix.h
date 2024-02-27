#ifndef MATRIX_H
#define MATRIX_H

class Matrix {
private:
    int** data;
    unsigned int m;
    unsigned int n;

public:
    Matrix(unsigned int rows, unsigned int cols);
    ~Matrix();
    int* operator[](unsigned int index);
    void fillRandom();
    friend std::ostream& operator<<(std::ostream& os, const Matrix& matrix);
    Matrix operator+(const Matrix& otherMatrix) const;
    Matrix& operator+=(const Matrix& otherMatrix);
    Matrix operator-(const Matrix& otherMatrix) const;
    Matrix& operator-=(const Matrix& otherMatrix);
    Matrix operator*(const Matrix& otherMatrix) const;
    bool operator==(const Matrix& otherMatrix) const;
    bool operator!=(const Matrix& otherMatrix) const;
};

#endif