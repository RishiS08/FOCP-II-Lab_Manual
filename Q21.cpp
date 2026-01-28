#include <iostream>
using namespace std;

class Pattern{
    public:
    void displayResult();
};

void Pattern::displayResult(){
    cout<<" ";
    for(int i=0; i<8; i++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=0; i<6; i++){
        cout<<"*        *";
        cout<<endl;
    }

    cout<<" ";
    for(int i=0; i<8; i++){
        cout<<"*";
    }
    cout<<endl;
}

int main(){
    Pattern a1;
    a1.displayResult();
    return 0;
}