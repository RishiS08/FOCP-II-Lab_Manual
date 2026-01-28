#include <iostream>
using namespace std;

class Calculator{
    private:
    int choice;
    double a,b;

    public:
    void displayResult();
};

void Calculator::displayResult(){
    do{
        cout<< "\n------ MENU DRIVEN CALCULATOR ------\n";
        cout<< "1. Addition\n";
        cout<< "2. Subtraction\n";
        cout<< "3. Multiplication\n";
        cout<< "4. Division\n";
        cout<< "5. Exit\n";
        cout<< "Enter your choice: ";
        cin>> choice;

        if(choice>=1 && choice<=4){
            cout<<"Enter 1st number: ";
            cin>>a;
            cout<<"Enter 2nd number: ";
            cin>>b;
        }

        switch (choice)
        {
        case 1:
            cout<<"Result = "<<a+b<<endl;
            break;

        case 2:
            cout<<"Result = "<<a-b<<endl;
            break;

        case 3:
            cout<<"Result = "<<a*b<<endl;
            break;

        case 4:
            if(b!=0){
               cout<<"Result = "<<a/b<<endl;
            }
            else
               cout<<"Division by Zero error\n";
            break;

        case 5:
            cout<<"Exiting!!\n";
            break;

        default:
            cout<<"Invalid Choice! Please try again.\n";
            break;
        }

    }while(choice!=5);
}

int main(){
    Calculator a1;
    a1.displayResult();
    return 0;
}