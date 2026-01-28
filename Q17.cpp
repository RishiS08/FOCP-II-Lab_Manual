#include <iostream>
using namespace std;


class Classify{
    private:
    int num,sum=0,result=0,ognum,remainder;

    public:
    void getData();
    void displayResult();
};

void Classify::getData(){
    cout<<"Enter a number: ";
    cin>>num;
}

void Classify::displayResult(){
    ognum=num;
    
    for(int i=1; i<num; i++){
        if(num%i==0){
            sum+=i;
        }
    }

    while(num!=0){
        remainder=num%10;
        result+=remainder*remainder*remainder;
        num/=10;
    }

    if(sum==ognum){
        cout<<"It is a Perfect number\n";
    }
    else if(result==ognum){
        cout<<"It is an Armstrong number\n";
    }

    else{
        cout<<"It is neither Perfect nor Armstrong number\n";
    }
}

int main(){
    Classify a1;
    a1.getData();
    a1.displayResult();
    return 0;
}