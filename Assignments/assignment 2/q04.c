/** 
*Programmer : Riya Bhart
*Desc: ASSIGNMENT 2; q04
*Date: 29/10/23
*/
#include<stdio.h>
int main(){
	
	    char arr[5][5] = {
        {'S', '0', '0', 'W', 'W'},
        {'0', 'W', '0', 'W', 'W'},
        {'0', '0', '0', 'W', '0'},
        {'W', 'W', '0', 'W', '0'},
        {'W', 'W', '0', 'E', 'W'}
		 };
    printf("INPUT ORIGINAL MAZE :\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" %c ", arr[i][j]);
        }
        printf("\n");
    }
    int x = 0, y = 0;
    int N = 5, M = 5;
    printf("OUTPUT MAZE AFTER TRAVERSAL : \n");

    while (arr[x][y] != 'E') {
        printf("(%d,%d)\t", x, y);
        arr[x][y] = 'X'; 
        if (y + 1 < M && arr[x][y + 1] != 'W' && arr[x][y + 1] != 'X') {
            y++;
        }
        else if (x + 1 < N && arr[x + 1][y] != 'W' && arr[x + 1][y] != 'X') {
            x++;
        } else {
            printf("No solution exists!\n");
        }
    }
    printf("(%d,%d)\t", x, y);

    return 0;
	
}
