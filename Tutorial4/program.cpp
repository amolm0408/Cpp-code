#include <iostream>
using namespace std;


class complex
{
    float real, img;


public:


    void accept()
    {
        cout << "Enter real part: ";
        cin >> real;


        cout << "Enter imaginary part: ";
        cin >> img;
    }


    void display()
    {
        if (img >= 0)
            cout << real << "+i" << img;
        else
            cout << real << "-i" << -img;
    }


    complex addi(complex b)
    {
        complex sum;


        sum.real = real + b.real;
        sum.img = img + b.img;


        return sum;
    }


    complex subt(complex b)
    {
        complex subt;
         subt.real = real - b.real;
        subt.img = img - b.img;


        return subt;
    }


    complex mult(complex b)
    {
        complex mult;


        mult.real = (real * b.real) - (img * b.img);
        mult.img = (real * b.img) + (img * b.real);


        return mult;
    }


    complex divi(complex b)
    {
        complex divi;


        float d = b.real * b.real + b.img * b.img;


        divi.real = (real * b.real + img * b.img) / d;
        divi.img = (img * b.real - real * b.img) / d;


        return divi;
    }
};


int main()
{
    complex c1, c2, c3, c4, c5, c6;


    cout << "Enter first complex number:\n";
    c1.accept();


    cout << "Enter second complex number:\n";
    c2.accept();


    c3 = c1.addi(c2);
    cout << "\nThe addition of 2 complex numbers is:\n";
    c3.display();


    c4 = c1.subt(c2);
    cout << "\nThe subtraction of 2 complex numbers is:\n";
    c4.display();


    c5 = c1.mult(c2);
    cout << "\nThe multiplication of 2 complex numbers is:\n";
    c5.display();


    c6 = c1.divi(c2);
    cout << "\nThe division of 2 complex numbers is:\n";
    c6.display();


    return 0;
}
