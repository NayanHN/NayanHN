#include <stdio.h>
int main()

{
    int row=1,rowcount=5, i, j;
    
    while(row<=6){
        for (i = 1; i < row; i++) {
            printf(" ");
        }
        for(j=1; j<=rowcount; j++){
            printf("B");
        }
        rowcount--;
        row++;
        printf("\n");
        
    }
}
