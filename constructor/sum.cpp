// write sum of two number using the constructor 
#include<iostream>
using namespace std;
class Example{
	int a, b;

public:
	Example(int x, int y) : a(x), b(y) {}

	void displaySum() const {
		cout << "Sum = " << a + b << endl;
	}
};

int main() {
	Example example(10, 20);
	example.displaySum();
	return 0;
}

// example E1= Example(10,20)  calling constructor expertcially 
//Example E2(100,200) calling constructor implicitly 