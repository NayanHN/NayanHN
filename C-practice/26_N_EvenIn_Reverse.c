#include <stdio.h>
int main()

 {
    int num,n;
    printf("enter the range:");
    scanf("%d", &n);
    num=n*2;
    while (num >= 0) {
        if(num%2==0){
            
           printf("%d ", num); 
        }
        
        num--;
    }
}
