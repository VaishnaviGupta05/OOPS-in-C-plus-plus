// swap the two number using constructor
#include<iostream>
using namespace std;
class Swap {
public:
	Swap(int &a, int &b) {
		int temp = a;
		a = b;
		b = temp;
	}
};
int main() {
	int first, second;
	cout << "Enter two numbers: ";
	cin >> first >> second;

	Swap swapNumbers(first, second);

	cout << "After swapping: " << first << " " << second << endl;
	return 0;
}
