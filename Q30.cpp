#include <iostream>
using namespace std;

class Salary{
    private:
    int Salary, sum=0;
    float Avg;
    int arr[10];

    public:
    void getData();
    void displayResult();
};

void Salary::getData(){
    for(int i=0; i<10; i++){
        cout<<"Enter Salary of employee "<<i+1<<": ";
        cin>>Salary;
        sum+=Salary;
        Salary=arr[i];
    }
}

void Salary::displayResult(){

    Avg=sum/10.00;

    cout<<"Total Salary of the employees is: "<<sum<<endl;
    cout<<"Average Salary of the employee is: "<<Avg<<endl;
}

int main(){
    Salary a1;
    a1.getData();
    a1.displayResult();
    return 0;
}
