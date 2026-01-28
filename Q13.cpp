#include <iostream>
#include <cmath>
using namespace std;

class Quadratic{
    private:
    int a,b,c,r1,r2;

    public:
    public:
    void getData();
    void displayResult();
};

void Quadratic::getData(){
    cout<<"ax\u00B2+bx+c\n";
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
}

void Quadratic::displayResult(){
    int sr=sqrt((b*b)-(4*a*c));
    r1=(-b+sr)/2*a;
    r2=(-b-sr)/2*a;

    cout<<"Solutions of the Quadratic Equation are "<<r1<<" and "<<r2<<endl;
}

int main(){
    Quadratic a1;
    a1.getData();
    a1.displayResult();
    return 0;
}