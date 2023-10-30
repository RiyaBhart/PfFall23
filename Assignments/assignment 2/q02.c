/** 
*Programmer : Riya Bhart
*Desc: ASSIGNMENT 2; q02
*Date: 29/10/23
*/
#include <stdio.h>
int main(){
	
    int a, b, i, j;
    printf("Enter the number of rows and columns of the matrix: \n");
    printf("ROWS : ");
    scanf("%d", &a);
     printf("COLUMNS : ");
    scanf("%d", &b);   
    
    int matrix[10][10];
    printf("\nVALUES OF MATRIX : \n");
    for (i = 0; i < a; i++){
        for (j = 0; j < b; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("MATRIX : \n");
    for (i = 0; i < a; i++){
        for (j = 0; j < b; j++){
            printf("%d\t ", matrix[i][j]);
        }
        printf("\n");
    }
    int maxlength = 0;
    int maxrow = 0, maxcol = 0;
    int submatrix[10][10];
    for (i = 0; i < a; i++){
        submatrix[i][0] = matrix[i][0];
    }
    for (j = 0; j < b; j++){
        submatrix[0][j] = matrix[0][j];
    }
    for (i = 1; i < a; i++){
        for (j = 1; j < b; j++){
            if (matrix[i][j] == 1){
                submatrix[i][j] = 1 + (submatrix[i - 1][j - 1] > submatrix[i - 1][j] ? submatrix[i - 1][j] : submatrix[i - 1][j - 1]);
                if (submatrix[i][j] > maxlength){
                    maxlength = submatrix[i][j];
                    maxrow = i;
                    maxcol = j;
                }
            }
            else{
                submatrix[i][j] = 0;
            }
        }
    }
    printf("LARGEST SQUARE OF SUBMATRIX OF 1s :\n");
    for (i = maxrow; i > maxrow - maxlength; i--){
        for (j = maxcol; j > maxcol - maxlength; j--){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("DIMENSIONS OF MATRIX: %d & %d\n", i + 3, j + 3);
    return 0;
}
