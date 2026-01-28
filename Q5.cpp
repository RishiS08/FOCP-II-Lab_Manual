#include <iostream>
using namespace std;

class Swap{
    private:
    int a,b;

    public:
    void getData();
    void displaySwap();
};

void Swap::getData(){
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
}

void Swap::displaySwap(){
    a=a*b;
    b=a/b;
    a=a/b;
    
    cout<<"a="<<a;
    cout<<" b="<<b<<"\n";
}

int main(){
    Swap a1;
    a1.getData();
    a1.displaySwap();
    return 0;
}