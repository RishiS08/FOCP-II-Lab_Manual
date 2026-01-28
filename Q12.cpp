#include <iostream>
using namespace std;

class Triangle{
    private:
    int a,b,c;

    public:
    void getData();
    void displayResult();
};

void Triangle::getData(){
    cout<<"Enter 1st side of the triangle: ";
    cin>>a;
    cout<<"Enter 2nd side of the triangle: ";
    cin>>b;
    cout<<"Enter 3rd side of the triangle: ";
    cin>>c;
}

void Triangle::displayResult(){
    if(a==b && b==c){
        cout<<"It is an Equilateral Triangle\n";
    }

    else if(a!=b && a!=c && b!=c){
        cout<<"It is a Scalene Triangle\n";
    }

    else{
        cout<<"It is an Isosceles Triangle\n";
    }
}
int main(){
    Triangle a1;
    a1.getData();
    a1.displayResult();
    return 0;
}