#include <iostream>
using namespace std;

class Lowest{
    private:
    int temp;
    int arr[30];

    public:
    void getData();
    void displayResult();
};

void Lowest::getData(){
    for(int i=0;i<30;i++){
        cout<<"Enter the temperature of Day "<<i+1<<": ";
        cin>>temp;
        arr[i]=temp;
    }
    
}

void Lowest::displayResult(){
    int lowest=arr[0];
    for(int i=1;i<30;i++){
        if(arr[i]<lowest){
            lowest=arr[i];
        }
    }

    cout<<"The Minimum temperature of the month is: "<<lowest<<endl;
};

int main(){
    Lowest a1;
    a1.getData();
    a1.displayResult();
    return 0;
}

