#include <stdio.h>
#include <stdlib.h>
#include "queueOps.h"
#include "matrixOps.h"
#include "fileParser.h"

bool isChar(char c);

char** parseData(char *argv, int *rows, int *cols) {
    char readChar = 'E';
    FILE *inputFP;
    inputFP = fopen(argv, "r");
    if (inputFP == NULL){
        printf("Could not open the file!\n");
        exit(1);
    }
    fscanf(inputFP, "%d %d", rows, cols);
    char **mat = (char**)matrixInit(*rows, *cols);

    for (int i = 0; i < *rows; i ++){
        for (int j = 0; j < *cols; j ++){
            while(!isChar(readChar = fgetc(inputFP))){}
            mat[i][j] = readChar;
        }
    }
    fclose(inputFP);
    return mat;
}

bool isChar(char c) {
    if (c != ' ' && c != '\n') {
        return true;
    }
    else { 
        return false;
    }
}