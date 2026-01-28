#include <iostream>
using namespace std;

class Salary{
    private:
    int basicSalary,FinalSalary,bonus;

    public:
    void getData();
    void displaySalary();
};

void Salary::getData(){
    cout<<"Enter the basic Salary: ";
    cin>>basicSalary;
}

void Salary::displaySalary(){
    bonus=0.2*basicSalary;
    FinalSalary=basicSalary+bonus;
    cout<<"Bonus is: "<<bonus<<"\n";
    cout<<"Net Salary is: "<<FinalSalary<<"\n";
}
int main(){
    Salary a1;
    a1.getData();
    a1.displaySalary();
    return 0;
}



