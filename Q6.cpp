#include <iostream>

using namespace std;
int main(){
    int basicSalary,FinalSalary,bonus;
    cout<<"Enter the basic Salary: ";
    cin>>basicSalary;
    bonus=0.2*basicSalary;
    FinalSalary=basicSalary+bonus;
    cout<<"Bonus is: "<<bonus<<"\n";
    cout<<"Net Salary is: "<<FinalSalary<<"\n";
    return 0;
}



