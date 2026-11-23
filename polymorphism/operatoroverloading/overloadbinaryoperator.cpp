#include <iostream>
using namespace std;
class Complex {
public:
	int real, imaginary;

	Complex(int r, int i) : real(r), imaginary(i) {}

	Complex operator+(const Complex& other) {
		return Complex(real + other.real, imaginary + other.imaginary);
	}

	void display() {
		cout << real << " + " << imaginary << "i" << endl;
	}
};

int main() {
	Complex first(2, 3);
	Complex second(4, 5);

	Complex sum = first + second;
	cout << "Sum: ";
	sum.display();

	return 0;
}