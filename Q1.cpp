#include <iostream>
using namespace std;

class Average{
    private:
    int num1,num2,num3;
    int avg;

    public:
    void getData();
    void displayAvg();

};

void Average::getData(){
    cout<<"Enter 1 Marks: ";
    cin>>num1;
    cout<<"Enter 2 Marks: ";
    cin>>num2;
    cout<<"Enter 3 Marks: ";
    cin>>num3;
}

void Average::displayAvg(){
    avg=(num1+num2+num3)/3;
    cout<<"Average: "<<avg<<endl;
}
int main(){
    Average a1;
    a1.getData();
    a1.displayAvg();
    return 0;
}