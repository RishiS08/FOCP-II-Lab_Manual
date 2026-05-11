#include <iostream>
using namespace std;

class Pattern{
    private:
    int n;

    public:
    void getdata();
    void displayResult();
};

void Pattern::getdata(){
    cout<<"Enter the number of rows for Pascal's Triangle: ";
    cin>>n;
}

void Pattern::displayResult(){
    int k=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=k){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        k--;
        cout<<endl;
    }
}

int main(){
    Pattern a1;
    a1.getdata();
    a1.displayResult();
    return 0;
}