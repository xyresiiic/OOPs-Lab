#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter values of a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) 
	{
        cout << "It's a linear equation." << endl;
    } 
	else 
	{
        double D = b*b - 4*a*c;

        if (D > 0) 
		{
            double r1 = (-b + sqrt(D)) / (2*a);
            double r2 = (-b - sqrt(D)) / (2*a);
            cout << "Two real and distinct roots: " << r1 << " and " << r2 << endl;
        } 
		else if (D == 0) 
		{
            double r = -b / (2*a);
            cout << "Two real and equal roots: " << r << " and " << r << endl;
        } 
		else 
		{
            double real = -b / (2*a);
            double imag = sqrt(-D) / (2*a);
            cout << "Complex roots: " << real << " + " << imag << "i and "
                 << real << " - " << imag << "i" << endl;
        }
    }

}

