//
//  Created by Enes Kılıçaslan on 28/03/16.
//  Copyright © 2016 Enes Kılıçaslan. All rights reserved.
//
//
//  *** leastSquaresRegression  ****
//
//  Feel free to change the contents of the arrays X and Y


#include <stdio.h>
#include <math.h>
#define SIZE 11

double X[] = { 6, 7, 11, 15, 17, 21, 23, 29, 29, 37, 39 };
double Y[] = { 29, 21, 29, 14, 21, 15, 7, 7, 13, 0, 3};

void leastSquaresRegression();

int main(int argc, const char * argv[]) {

    leastSquaresRegression();
    return 0;
}

void leastSquaresRegression()
{
    int n = SIZE;
    int i=0;
    double x, y, Ex = 0, Ey = 0, Exy = 0, Exsquare = 0, rSquare = 0, Eysquare = 0;
    double a1, a0;

    for(i=0; i<n ; i++)
        Ex += X[i];

    printf("Ex: %f\n", Ex );

    for(i=0; i<n ; ++i)
        Ey += Y[i];
    printf("Ey: %f\n", Ey );

    for(i=0; i<n; ++i)
        Exy += X[i] * Y[i];
    printf("Ex.y: %f\n", Exy );

    for(i=0; i<n; ++i)
        Exsquare += (X[i] * X[i]);
    printf("Ex2: %f\n", Exsquare );

    for(i=0; i<n; ++i)
        Eysquare += (Y[i] * Y[i]);

    x = Ex / n;
    y = Ey / n;

    a1 = (n * Exy - Ex * Ey )/(n * Exsquare - Ex * Ex );
    a0 = y - a1 * x;

    printf("\n\nEquation: %f + %fx\n", a0, a1);

    rSquare = ( n * Exy  -  Ex * Ey ) / ( sqrt(fabs(n * Exsquare - Ex * Ex)) * sqrt(fabs(n * Eysquare - Ey * Ey) ) );
    rSquare *= rSquare;

    printf("\nr2:   %f\n\n", rSquare);
}
