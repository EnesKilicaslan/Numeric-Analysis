/*

        ENES KILICASLAN
        141044088

        Golden Ratio Search

  @Algorithm Referance: Steve C. Chapra & Raymond P. Canale' book
  
  
  goldenRatioSearch function takes two arguments as boundDown and boundUp
  and calculates the golden ratio of the function named “function”

  And you can change function function whatever you want


*/
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define  R  (0.61803) //golden ratio

double goldenRatioSearch(double xAlt, double xUst);

double getEpsilon(double xalt, double xust, double xopt);

//This is our function f(x) = -1.5x^6  -  2x^4  + 12x
double function(double x)
{
  return (-1.5 * pow(x,6)  - 2 * pow(x,4) + 12 * x);
}

int main()
{
  double optimum = goldenRatioSearch(0, 2);
  printf("The Optimum: %f\n", optimum);


  return 0;
}

double goldenRatioSearch(double xalt, double xust)
{
    int counter = 0;

    double xopt;
    double xa = xalt;
    double xu = xust;

    //double epsilon = ( 1 - R) * (fabs( fabs(xu) - fabs(xa) ) ) / fabs()
    double d = R * (xust - xalt);

    double x1 = xa + d;
    double x2 = xu - d;

    while(counter < 10)
    {
        if(fabs(function(x1)) > fabs(function(x2)) )
        {

              xa = x2;
              x2 = x1;
              d = R * (xu  - xa);
              x1 = xu - d;
        }

        else if( fabs(function(x2)) > fabs(function(x1)) )
        {
              xopt = x2;
              xu = x1;
              x1 = x2;
              d = R * (xu - xa);
              x2 = xa + d;
        }

        else
              break;

        xopt = (xa + xu)/2 ;        
        ++counter;
        printf("iteration %3d:  xalt = %f     xust = %f   Epsilon = %f\n", counter, xa, xu, getEpsilon(xa, xu, xopt));

    }

    return xopt;
}

double getEpsilon(double xalt, double xust, double xopt)
{
    return   (1 - R) *  (fabs( fabs(xust) - fabs(xalt) ) ) / fabs(xopt);
}
