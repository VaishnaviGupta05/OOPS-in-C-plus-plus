class student{
    private: int marks;
    public:
    student(int m){
        marks = m;
    }
    friend void display(student s);
};
void display(student s){
    cout<<"marks = "<<s.marks;
}
int main(){
    student s1(95);
    display(s1);
    return 0;
}