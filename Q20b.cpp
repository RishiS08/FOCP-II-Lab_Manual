#include <iostream>
using namespace std;

class Pattern{
    public:
    void displayResult();
};

void Pattern::displayResult(){
    for(int i=0;i<5;i++){
        for(int j=5;j>i;j--){
            cout<<j;
        }
        cout<<endl;
    }
}

int main(){
    Pattern a1;
    a1.displayResult();
    return 0;
}