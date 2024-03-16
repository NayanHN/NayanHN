#include <stdio.h>
int main()

{
    printf("Multiplication table of 3:\n");
    for (int i = 1; i <= 10; ++i) {
        printf("3 x %d = %d\n", i, 3 * i);
    }
}

