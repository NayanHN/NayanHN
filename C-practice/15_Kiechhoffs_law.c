#include <stdio.h>
int main()

 {
    // Declare variables
    float I1, I2, I3, I4, I5, I6, sumEntering, sumLeaving;

    // Input currents from the user
    printf("Enter the value of current I1,I2,I4,I5 entering the node: ");
    scanf("%f%f%f%f", &I1,&I2,&I4,&I5);

    printf("Enter the value of current I3,I6 leaving the node: ");
    scanf("%f%f", &I3,&I6);

    // Calculate sum of currents entering and leaving the node
    sumEntering = I1 + I2;
    sumLeaving = I3 + I4 + I5 + I6;

    // Check Kirchhoff's current law
    if (sumEntering == sumLeaving) {
        printf("Kirchhoff's current law is satisfied. The sum of currents entering the node is equal to the sum of currents leaving the node.\n");
    } else {
        printf("Kirchhoff's current law is not satisfied. The sum of currents entering the node is not equal to the sum of currents leaving the node.\n");
    }
}

