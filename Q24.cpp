#include <iostream>
using namespace std;

class Pattern{
    private:
    int n;

    public:
    void getData();
    void displayData();
};

void Pattern::getData(){
    cout<<"Enter the number of rows: ";
    cin>>n;
}

void Pattern::displayData(){
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<char('A'+j);
        }
        cout<<endl;
    }
}

int main(){
    Pattern a1;
    a1.getData();
    a1.displayData();
    return 0;
}