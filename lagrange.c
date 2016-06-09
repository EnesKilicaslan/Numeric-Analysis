//
//  main.c
//  question2
//
//
//  LAGRANGE's  INTERPOLATION
//  feel free to change the values x0, x1, x2, x3 and fx0, fx1, fx2, fx3
//
//
//  **************   ENES    KILICASLAN  **************
//  *******************  141044088  *******************
//
//
//  Created by Enes Kılıçaslan on 17/04/16.
//  Copyright © 2016 Enes Kılıçaslan. All rights reserved.
//
//
//
//
#include <stdio.h>
#include <math.h>

#define DATA 4

double x0 = 3, fx0 = 19;
double x1 = 5, fx1 = 99;
double x2 = 2, fx2 = 6;
double x3 = 7, fx3 = 291;

void lagrangeInterpolation();

int main()
{
    lagrangeInterpolation();

    return 0;
}


void lagrangeInterpolation()
{

  double result;

  printf("\nX0 = 3 f(x0) = f(3) = 19\n" );
  printf("X1 = 5 f(x1) = f(5) = 99\n" );

  result = ((DATA - x1) / ( x0 - x1) ) * fx0  +   (( DATA - x0) / ( x1 - x0)) * fx1;

  printf("First Degre interpolation: f1(4) =  %f\n", result );
  printf("\n**********************************************\n\n");

  printf("X0 = 3 f(x0) = f(3) = 19\n" );
  printf("X1 = 5 f(x1) = f(5) = 99\n" );
  printf("X2 = 2 f(x1) = f(2) = 6 \n" );


  result =  (( DATA - x1) * (DATA - x2) / ( x0 - x1) / (x0 - x2)) * fx0
                                +
            (( DATA - x0) * (DATA - x2) / ( x1 - x0) / (x1 - x2)) * fx1
                                +
            (( DATA - x0) * (DATA - x1) / ( x2 - x0) / (x2 - x1)) * fx2;


  printf("Second Degre interpolation: f2(4) =  %f\n", result );
  printf("\n**********************************************\n\n");

  printf("X0 = 3 f(x0) = f(3) = 19\n" );
  printf("X1 = 5 f(x1) = f(5) = 99\n" );
  printf("X2 = 2 f(x2) = f(2) = 6 \n" );
  printf("X3 = 7 f(x3) = f(7) = 291 \n" );

  result =  (( DATA - x1) * (DATA - x2) * (DATA - x3) / ( x0 - x1) / (x0 - x2) / (x0 - x3)) * fx0
                                              +
            (( DATA - x0) * (DATA - x2) * (DATA - x3) / ( x1 - x0) / (x1 - x2) / (x1 - x3)) * fx1
                                              +
            (( DATA - x0) * (DATA - x1) * (DATA - x3) / ( x2 - x0) / (x2 - x1) / (x2 - x3)) * fx2
                                              +
            (( DATA - x0) * (DATA - x1) * (DATA - x2) / ( x3 - x0) / (x3 - x1) / (x3 - x2)) * fx3;

  printf("Third Degre interpolation: f3(4) =  %f\n", result );
}
