#include <iostream>
using namespace std;

class Prime{
    private:
    int ll,ul;

    public:
    void getData();
    void displayResult();
};

void Prime::getData(){
    cout<<"Enter the lower limit of the range: ";
    cin>>ll;
    cout<<"Enter the upper limit of the range: ";
    cin>>ul;
}

void Prime::displayResult(){
    for(int j=ll; j<=ul; j++){
        int isprime=1;
            for(int i=2;i<=j/2;i++){
            if(j%i==0){
                isprime=0;
                break;
            }
        }

        if(isprime==0){
            cout<<j<<" is not a prime number.\n";
        }
        else{
            cout<<j<<" is a prime number.\n";
        }
    }
}

int main(){
    Prime a1;
    a1.getData();
    a1.displayResult();
    return 0;
}