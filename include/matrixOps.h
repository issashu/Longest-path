#ifndef MATRIXOPS_H
#define MATRIXOPS_H

void* matrixInit(int rows, int cols);
void matrixDelete(void **baseMatrix, int rows);
void matrixReset(int **baseMatrix, int rows, int cols);

#endif /* MATRIXOPS_H */