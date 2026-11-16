// global ----> local variabe ma excess
int x = 10; // global
int main (){
    int x = 5;
    cout<<x; // print local variable 
    cout<<::x; // print global variable

}

// member fxn ko outside the class
class Circle{
    double r;
public:
double area();
};
double Circle::area(){
return 3.14*r*r;
}

// use to excess the static data member
class Counter{
    static int count;
    };
  int Counter::count=5;
  int main(){
    Counter::count=0;
  }

/// use to call the staic mem
class Math{
   static int square(int n) {return(n*n);}
};
int main(){
    cout<<Math::square(5);
}

