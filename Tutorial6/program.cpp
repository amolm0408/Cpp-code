#include<iostream>
using namespace std;

class complex {
    int real, img;

public:

    void accept() {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> img;
    }

    void display() {
        if (img >= 0) {
            cout << real << " + " << img << "i";
        }
        else {
            cout << real << " - " << -img << "i";
        }
    }

    complex operator+(complex b) {
        complex sum;
        sum.real = real + b.real;
        sum.img = img + b.img;
        return sum;
    }

    complex operator-(complex b) {
        complex sub;
        sub.real = real - b.real;
        sub.img = img - b.img;
        return sub;
    }
};

int main() {
    complex c1, c2, c3, c4;

    cout << "Enter first complex number:\n";
    c1.accept();

    cout << "Enter second complex number:\n";
    c2.accept();

    c3 = c1 + c2;
    cout << "\nThe addition of two complex numbers is: ";
    c3.display();

    cout << endl;

    c4 = c1 - c2;
    cout << "The subtraction of two complex numbers is: ";
    c4.display();

    cout << endl;

    return 0;
}
