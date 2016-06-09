//
//  main.c
//  question1
//
//
//  NEWTON's  INTERPOLATION
//  feel free to change x and fx values
//
//
//  **************   ENES    KILICASLAN  **************
//
//
//  Created by Enes Kılıçaslan on 17/04/16.
//  Copyright © 2016 Enes Kılıçaslan. All rights reserved.
//
#include <stdio.h>
#include <math.h>

#define DATA 4

double x0 = 3, fx0 = 19;
double x1 = 5, fx1 = 99;
double x2 = 2, fx2 = 6;
double x3 = 7, fx3 = 291;
double x4 = 1, fx4 = 3;

void interpolation();

int main()
{
    interpolation();

    return 0;
}

void interpolation()
{
  double b0, b1, b2, b3, b4;

  double result;


  printf("X0 = 3 f(x0) = f(3) = 19\n" );
  printf("X1 = 5 f(x1) = f(5) = 99\n" );

  b0 = fx0;
  b1 = (fx1 - fx0) / (x1 - x0);

  result = fx0 + b1 * (DATA - x0);
  printf("First Degre interpolation\n f1(4) =  %f\n", result );

  printf("\n**********************************************\n\n");

  printf("X0 = 3 f(x0) = f(3) = 19\n" );
  printf("X1 = 5 f(x1) = f(5) = 99\n" );
  printf("X2 = 2 f(x1) = f(2) = 6 \n" );

  b2 = ( ( (fx2 - fx1) / (x2 - x1) )  -  b1 ) / (x2 - x0);

  result = result + b2 * (DATA - x0) * (DATA - x1);
  printf("Second Degre interpolation\n f2(4) =  %f\n", result );

  printf("\n**********************************************\n\n");

  printf("X0 = 3 f(x0) = f(3) = 19\n" );
  printf("X1 = 5 f(x1) = f(5) = 99\n" );
  printf("X2 = 2 f(x2) = f(2) = 6 \n" );
  printf("X3 = 7 f(x3) = f(7) = 291 \n" );

  b3 = (( (fx3 - fx2) / (x3 - x2) )  -  b2 ) / ( x3 - x0);

  result = result + b3 * (DATA - x0)*(DATA - x1)*(DATA - x2);

  printf("Third Degre interpolation\n f3(4) =  %f\n", result );

  printf("\n**********************************************\n\n");

  printf("X0 = 3 f(x0) = f(3) = 19  \n" );
  printf("X1 = 5 f(x1) = f(5) = 99  \n" );
  printf("X2 = 2 f(x2) = f(2) = 6   \n" );
  printf("X3 = 7 f(x3) = f(7) = 291 \n" );
  printf("X4 = 1 f(x4) = f(1) = 3   \n" );

  b4 = (( (fx4 - fx3) / (x4 - x3) )  -  b3)  / ( x4 - x0);

  result =  result  + b4 * (DATA - x0)*(DATA - x1)*(DATA - x2)*(DATA - x3);

  printf("Fourth Degre interpolation\n f4(4) =  %f\n", result );

}
