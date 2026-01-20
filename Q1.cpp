#include <iostream>

using namespace std;
int main(){
    int sum=0;
    int a,b,c;
    float avg;
    cout<<"Enter 1 Marks: ";
    cin>>a;
    cout<<"Enter 2 Marks: ";
    cin>>b;
    cout<<"Enter 3 Marks: ";
    cin>>c;
    sum=a+b+c;
    avg=sum/3;
    cout<<"Average marks of 3 students is: "<<avg<<"\n";

    return 0;
}