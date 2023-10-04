#ifndef MATRIX_H
  #define MATRIX_H
  #include <stdlib.h>
  #include <stdio.h>
  struct matrix {
    int rows;
    int cols;
    double matrix[10][10];
  } matrix;
  double determinant(double a, double b, double c, double d);
  double simplifymatrix(int num_cols, double matrix[num_cols][num_cols], int a, int b);
  double find_determinant(int rows, struct matrix matrix);

#endif
