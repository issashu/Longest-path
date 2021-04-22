#ifndef SEARCHOPS_H
#define SEARCHOPS_H

#include <stdbool.h>

int searchBFS(int rows, int cols);
void checkNeighbors(int x, int y, int rows, int cols, int keyValue);
bool isValid(int x, int y, int rows, int cols, int keyValue);

#endif /* SEARCHOPS_H */