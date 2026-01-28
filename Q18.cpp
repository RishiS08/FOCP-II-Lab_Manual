#include <iostream>
using namespace std;

class Palindrome{
    private:
    int num,remainder,ognum;
    int reverse=0;

    public:
    void getData();
    void displayResult();
};

void Palindrome::getData(){
    cout<<"Enter a number: ";
    cin>>num;
}

void Palindrome::displayResult(){
    ognum=num;

    while(num!=0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    }

    if(reverse==ognum){
        cout<<"It is a Palindrome\n";
    }
    else{
        cout<<"It is not a Palindrome\n";
    }
}

int main(){
    Palindrome a1;
    a1.getData();
    a1.displayResult();
    return 0;
}