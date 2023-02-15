#include <stdio.h>

int main() {

  int A[3][3], B[3][3], C[3][3], D[3][3], i, j, k;

  printf("Enter Matrix A : ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++)
      scanf("%d", &A[i][j]);
  }

  printf("Enter Matrix B : ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++)
      scanf("%d", &B[i][j]);
  }

  // Sum
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++)
      C[i][j] = A[i][j] + B[i][j];
  }

  printf("Addition of A and B : ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++)
      printf("%d\t", C[i][j]);
    printf("\n");
  }

  // Multiplication
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      D[i][j] = 0;
      for (k = 0; k < 3; k++)
        D[i][j] = D[i][j] + A[i][k] * B[k][j];
    }
  }

  printf("Multiplication of A and B : ");
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++)
      printf("%d\t", D[i][j]);
    printf("\n");
  }

  // Transpose

  int width = 3;
  int height = 3;

  int original[width][height];

  for (i = 0; i < width; i++) {
    for (j = 0; j < height; j++) {
      printf("Enter Original [%d][%d] Matrix Value : ", i, j);
      scanf("%d", &original[i][j]);
    }
  }

  int transpose[height][width];

  for (i = 0; i < width; i++) {
    for (j = 0; j < height; j++) {
      transpose[j][i] = original[i][j];
    }
  }

  printf("Transpose of Matrix : ");
  for (i = 0; i < height; i++) {
    for (j = 0; j < width; j++) {
      printf("%d\t", transpose[i][j]);
    }
    printf("\n");
  }

  return 0;
}
