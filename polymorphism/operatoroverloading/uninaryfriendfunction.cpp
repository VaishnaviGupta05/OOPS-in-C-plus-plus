#include <iostream>
using namespace std;
class Example {
	int a;
public:
	void getdata(int value);
	void display();
	friend Example operator-(Example);
};
void Example::getdata(int value) {
	a = value;
}
void Example::display() {
	cout << a << endl;
}
Example operator-(Example value) {
	value.a = -value.a;
	return value;
}
int main() {
	Example number;
	number.getdata(10);
	cout << "Original value: ";
	number.display();
	Example negated = -number;
	cout << "Negated value: ";
	negated.display();
	return 0;
}
