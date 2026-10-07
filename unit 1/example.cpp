#include<iostream>
using namespace std;
class Example {
	int value;
public:
	void getdata();
	void show();
};

void Example::getdata() {
	cin >> value;
}

void Example::show() {
	cout << value << endl;
}

int main() {
	Example example;
	example.getdata();
	example.show();
	return 0;
}