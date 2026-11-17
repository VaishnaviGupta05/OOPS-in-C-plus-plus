#include <iostream>
using namespace std;
class Counter {
public:
static int objectCount;
Counter() {
objectCount++;}
	static void showCount(){
		cout<<"Objects created:"<<objectCount<<endl;}
};
int Counter::objectCount = 0;
int main(){
	Counter first;
	Counter second;
	Counter::showCount();
	return 0;
}
