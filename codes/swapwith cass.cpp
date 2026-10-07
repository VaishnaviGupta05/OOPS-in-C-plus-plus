#include <iostream>
using namespace std;
class SwapNumbers
{
private:
	int first;
	int second;
public:
	void getData()
	{
		cout << "Enter two numbers: ";
		if (!(cin >> first >> second))
		{
			cerr << "Invalid input. Please enter two integers." << endl;
			exit(1);
		}
	}
	void swapValues()
	{
		int temporary = first;
		first = second;
		second = temporary;
	}
	void display()
	{
		cout << "First number = " << first << ", Second number = " << second << endl;
	}
};
int main()
{
	SwapNumbers numbers;
	numbers.getData();
	cout << "Before swapping: ";
	numbers.display();
	numbers.swapValues();
	cout << "After swapping: ";
	numbers.display();
	return 0;
}
