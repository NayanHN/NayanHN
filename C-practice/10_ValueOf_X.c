#include <stdio.h>
int main()

{
    int v, i, r1, r2, r3;
    float x; 

    printf("Enter the values of v, i, r1, r2, r3:\n");
    scanf("%d%d%d%d%d", &v, &i, &r1, &r2, &r3);

    x = (float)(r2) / r1 * r3;

    printf("Value of x is: %.2f\n", x);
}
