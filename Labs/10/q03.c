/*
 * Programmer: Riya Bhart
 * Date: 19/11/23
 * Description: dynamically create a 2d array and initialize it with prime numbers
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}


void ArrfillPrime(int** array, int r, int c) {
    int count = 0;
    int num = 2; 

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            while (!isPrime(num)) {
                num++;
            }

            array[i][j] = num;
            num++;
        }
    }
}

void printArray(int** array, int r, int c) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            printf("%4d ", array[i][j]);
        }
        printf("\n");
    }
    
}

int main() {
    int r, c;

    printf("number of rows: ");
    scanf("%d", &r);

    printf("number of columns: ");
    scanf("%d", &c);

    // Dynamically allocate memory for a 2D array
    int**array = (int*)malloc(r * sizeof(int));
    for (int i = 0; i < r; ++i) {
        array[i] = (int*)malloc(c * sizeof(int));
    }

    ArrfillPrime(array, r, c);

    printf("\nArray of prime numbers:\n");
    printArray(array, r, c);


    return 0;
}
