#include <stdio.h>
int main()

{
   
    int row = 5, rowcount = 2, i, j, k;  

    while (row >0) {
        for (k = 0; k < row; k++) {
            printf(" ");
        }

        for (i = 1; i <=(rowcount/2); i++) {
            printf("A");  
        }

        for (j = 1; j <= (rowcount/2); j++) {
            printf("B");  
        }

        printf("\n");  

        rowcount=rowcount+2;
        row--;
    }
}


