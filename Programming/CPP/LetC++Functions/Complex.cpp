#include <iostream>

using namespace std;

struct complex
{
    double real, imag;
};

complex complex_set(double r, double i);
complex complex_add(complex a, complex b);

void complex_print(complex c);

int main()
{
    cout << "SVP, JSR, ONS!!!\n";

    complex a, b, c;

    a = complex_set(1.0, 1.0);
    b = complex_set(2.0, 2.0);
    c = complex_add(a, b);

    cout << "c = ";
    complex_print(c);
}
complex complex_set(double r, double i)
{
    complex temp;
    temp.real = r;
    temp.imag = i;
    return temp;
}

void complex_print(complex t)
{
    cout <<"(" << t.real <<',' << t.imag << ")\n";
}

complex complex_add(complex c1, complex c2)
{
    complex t;
    t.real = c1.real + c2.real;
    t.imag = c1.imag + c2.imag;

    return t;

}