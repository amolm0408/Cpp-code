#include <iostream>
using namespace std;
class Shape {
public:
	virtual void draw() {
		cout << "Drawing a shape" << endl;
	}
	virtual ~Shape() {}
};
class Rectangle : public Shape {
public:
	void draw() override {
		cout << "Drawing a rectangle: " << endl;
		cout << "* * * * *" << endl;
		cout << "* *" << endl;
		cout << "* * * * *" << endl;
	}
};
class Circle : public Shape {
public:
	void draw() override {
		cout << "Drawing a circle: " << endl;
		cout << " *** " << endl;
		cout << " * * " << endl;
		cout << " *** " << endl;
	}
};
int main() {
	Shape *s;
	Rectangle r;
	Circle c;
	s = &r;
	s->draw();
	cout << endl;
	s = &c;
	s->draw();
	return 0;
}
