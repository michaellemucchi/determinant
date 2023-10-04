#include "matrix.h"


int main(int argc, char** argv) {
  struct matrix matrix;

  double determinant;
  int a = 0;
  FILE* file = fopen(argv[1], "r");
  fscanf(file, "%d", &matrix.rows);
  fscanf(file, "%d", &matrix.cols);
  double temp[matrix.rows * matrix.cols];
  for (int i = 0; i < matrix.rows * matrix.cols; ++i) {
    fscanf(file, "%lf", &temp[i]);
  }

  for(int i = 0; i < matrix.rows; ++i) {
    for (int j = 0; j < matrix.cols; ++j) {
      matrix[i][j] = temp[a];
      a++;
    }
  }
  determinant = find_determinant(matrix.cols, matrix);
  printf("The determinant is %.2lf.\n", determinant);
  fclose(file);
  return 0;
}
