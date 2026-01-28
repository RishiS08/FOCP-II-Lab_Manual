#include <iostream>
using namespace std;

class isPrime{
    private:
    int num;
    int isprime=1;

    public:
    void getData();
    void displayResult();

};

void isPrime::getData(){
    cout<<"Enter a number: ";
    cin>>num;
}

void isPrime::displayResult(){
    if(num<=1){
        isprime=0;
    }
    else{

    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            isprime=0;
            break;
        }
    }
}

    if(isprime==0){
        cout<<num<<" is not a prime number.\n";
    }
    else{
        cout<<num<<" is a prime number.\n";
    }
}


int main(){
    isPrime a1;
    a1.getData();
    a1.displayResult();
    return 0;
}