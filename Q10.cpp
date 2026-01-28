#include <iostream>
using namespace std;

class Leap{
    private:
    int year;

    public:
    void getData();
    void displayResult();
};

void Leap::getData(){
    cout<<"Enter the Year: ";
    cin>>year;
}

void Leap::displayResult(){
    if(year%4==0){
        cout<<"It is a leap year\n";
    }
    else{
        cout<<"It is not a leap year\n";
    }
}

int main(){
    Leap a1;
    a1.getData();
    a1.displayResult();
    return 0;
}