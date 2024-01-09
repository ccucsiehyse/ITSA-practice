#include <stdio.h>

int main(){
    int n, row, col;

    scanf("%d", &n); //scan n

    //scan and print array (n times)
    for(int i=0; i<n; i++){
        scanf("%d %d", &row, &col);
        int a[row][col];

        //scan array
        for(int j=0; j<row; j++)
            for(int k=0; k<col; k++)
                scanf("%d", &a[j][k]);

        //print array
        if(i!=0) printf("\n");
        for(int j=0; j<row; j++){
            for(int k=0; k<col; k++)
                (a[j][k] && !((j==0||a[j-1][k]) && (k==0||a[j][k-1]) && (j==row-1||a[j+1][k]) && (k==col-1||a[j][k+1]))) ? printf("0 ") : printf("_ ");
            printf("\n");
        }
    }
}