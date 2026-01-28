#include <iostream>
using namespace std;

class Temperature{
    private:
    int x;

    public:
    void getdata();
    void displayResult();
};

void Temperature::getdata(){
    cout<<"Choose the operation\n";
    cout<<"Centigrade to Fahrenheit(1)\nFahrenheit to Centigrade(2)\n";
    cout<<"Enter your choice: ";
    cin>>x;
}

void Temperature::displayResult(){
    if(x==1){
        int c,f;
        cout<<"Enter the temperature in Centigrade: ";
        cin>>c;
        f=(1.8*c)+32;
        cout<<"Temperature in Fahrenheit is "<<f<<"\n";
    }
    if(x==2){
        int c,f;
        cout<<"Enter the temperature in Fahrenheit: ";
        cin>>f;
        c=(f-32)*0.56;
        cout<<"Temperature in Centigrade is "<<c<<"\n";
    }
}

int main(){
    Temperature a1;
    a1.getdata();
    a1.displayResult();
    return 0;
}