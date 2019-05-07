#include "Complex.h"
#include <math.h>

void Complex::set_Complex() {
    cout << "Real part: ";
    cin >> Re;
    cout << "Imaginary part: ";
    cin >> Im;
}
void Complex::get_Complex() {
    cout << "Re: " << Re << endl
         << "Im: " << Im << endl
         << "Module: " << sqrt(Re*Re + Im*Im) << endl;
}

Complex::Complex(double Re, double Im) : Re(Re), Im(Im) {}

Complex::Complex(const Complex &source): Re(source.Re), Im(source.Im) {}