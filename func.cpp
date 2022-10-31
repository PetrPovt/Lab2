#include <stdarg.h>
#include<cmath>
#include<iostream>
using namespace std;

double max(int n, ...)
{
    double result = INT_MIN;
    va_list factor;
    va_start(factor, n);
    for (int i = 0;i < n; i++)  result = (result > va_arg(factor, double)) ? result : va_arg(factor, double); 
    va_end(factor); 
    return result;
}

double min(int n, ...)
{
    double result = INT_MAX;
    va_list factor;
    va_start(factor, n);
    for (int i = 0;i < n; i++)  result = (result < va_arg(factor, double)) ? result : va_arg(factor, double); 
    va_end(factor); 
    return result;
}

extern double y, c, d;

double func(double x) {
    double result;
    if (x + y > 3)  return pow(x, 2) + log(pow(x + y, c * d)); 
    else {
        if (x + y < 0)  return pow(2, d) - c * x; 
        else  return 2.5 * max(3, x, c * y, min(2, c * x, d * y)); 
    }
}
