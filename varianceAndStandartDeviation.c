//
//  main.c
//
//  **  arithmetic mean, standart deviation, variance, coeeficient of variation  **
//  Created by Enes Kılıçaslan on 28/03/16.
//  Copyright © 2016 Enes Kılıçaslan. All rights reserved.
//
#include <stdio.h>
#include <math.h>

#define SIZE 25

double const dataSet[SIZE] =
{
    0.90, 1.42, 1.32, 1.35, 1.96,
    1.47, 1.85, 1.74, 2.29, 1.82,
    1.30, 1.55, 1.63, 1.47, 1.95,
    1.66, 1.92, 1.35, 1.05, 1.65,
    1.78, 1.71, 2.06, 2.14, 1.27
};

void operation(); //our operation for arithmetic mean, standart deviation, variance, coeeficient of variation

int main()
{
    operation();

    return 0;
}

void operation()
{
    double y = 0;
    int i = 0; //counter
    double Sy = 0, variance = 0, St = 0, coeff = 0;

    for (i=0; i< SIZE; ++i) {
        y += dataSet[i];
    }

    y = y / 24; // Arithmetic mean

    for (i=0; i<SIZE; ++i) {
        St += (dataSet[i] - y) * (dataSet[i] - y);
    }

    Sy = sqrt(St / (SIZE - 1)); // Standart Deviation
    variance = Sy * Sy; // Variance
    coeff = Sy / y * 100; //coefficient of variation

    printf("\nArithmetic Mean:          %f\n", y);
    printf("\nStandart Deviation:       %f\n", Sy);
    printf("\nVariance:                 %f\n", variance);
    printf("\nCoefficient of variation: %f\n\n", coeff);

}
