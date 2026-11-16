void change(int *x){
    *x = 100;
}

int main (){
    int num = 10;
    change(&num);
    cout << num;
    return 0;
}