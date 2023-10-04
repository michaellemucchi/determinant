#include "matrix.h"

double determinant(double a, double b, double c, double d) {
  return ((a*b) - (c*d));
}

double simplifymatrix(int num_cols, double matrix[num_cols][num_cols], int a, int b) {
  int c = 0;
  int d = 0;
  matrix = matrix[num_cols - 1][num_cols - 1];
  for (int i = 0; i < num_cols; ++i) {
    if (i != a) {
      for (int j = 0; j < num_cols; ++j) {
        if (b != j) {
          matrix[c][d] = matrix[i][j];
          d++;
        }
      }
      c++;
    }
  }
  return matrix;
}


double find_determinant(int rows, struct matrix matrix) {
  double determinant = 0;
  if (matrix.rows == 2) {
    return determinant(matrix[0][0], matrix[1][1], matrix[1][0], matrix[0][1]);
  } else {
    for (int j = 0; j < matrix.cols; ++j) {
      determinant += matrix[0][j] * find_determinant(matrix.cols - 1, simplifymatrix(matrix.cols, matrix, 0, j));
    }
  }
  return determinant;
}
