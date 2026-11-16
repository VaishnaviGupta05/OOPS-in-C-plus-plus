#include<iostream>
using namespace std;
class Rectangle {
private:
   float length = 10;
   float breadth = 10;
public:
   void Breadth(float value = 10) {
      breadth = value;
   }
   float area() const;
};
float Rectangle::area() const {
   return length * breadth;
}
int main() {
   Rectangle rectangle;
   rectangle.Breadth();
   cout << "Area of rectangle: " << rectangle.area() << endl;
   return 0;
}

