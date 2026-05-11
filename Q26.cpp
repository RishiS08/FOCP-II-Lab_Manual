#include <iostream>
using namespace std;

class Marks{
    private:
    int marks, sum=0;

    public:
    void getData();
    void displayResult();
};

void Marks::getData(){
    for(int i=1; i<6; i++){
        cout<<"Enter marks of subject "<<i<<": ";
        cin>>marks;
        sum+=marks;
    }
}

void Marks::displayResult(){
    int percentage;
    percentage=(sum*100)/500;

    cout<<"Total marks of the Student is (out of 500): "<<sum<<endl;
    cout<<"Percentage of the Student is: "<<percentage<<endl;
}

int main(){
    Marks a1;
    a1.getData();
    a1.displayResult();
    return 0;
}