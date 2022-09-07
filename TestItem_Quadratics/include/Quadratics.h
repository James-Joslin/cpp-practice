#include <iostream>
#include <cmath>
#include <complex>
#include <tuple>

using namespace std;

tuple<bool, string, double, double> quadratic(double a, double b, double c)
{
    double discriminant, real, imaginary, root1, root2;
    string explanation;
    bool complex;

    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0)
    {
        complex = false;
        explanation = "Roots are real and different";
        root1 = (-b - sqrt(discriminant))/(2 * a);
        root2 = (-b + sqrt(discriminant))/(2 * a);
    }
    else if (discriminant == 0)
    {
        complex = false;
        explanation = "Roots are real and the same";
        root1 = root2 = -b / (2 * a);
    }
    else
    {
        complex = true;
        explanation = "Roots are complex and different";
        real = -b/(2*a);
        imaginary =sqrt(-discriminant)/(2*a);
        return {complex, explanation, real, imaginary};
    };
    return {complex, explanation, root1, root2};
};