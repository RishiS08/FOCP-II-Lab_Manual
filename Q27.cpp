#include <iostream>
using namespace std;

class Largest{
    private:
    int price;
    int arr[10];

    public:
    void getData();
    void displayResult();
};

void Largest::getData(){
    for(int i=0;i<10;i++){
        cout<<"Enter the price of the item "<<i+1<<": ";
        cin>>price;
        arr[i]=price;
    }
    
}

void Largest::displayResult(){
    int large=arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }

    cout<<"The Maximum price of an item is: "<<large<<endl;
};

int main(){
    Largest a1;
    a1.getData();
    a1.displayResult();
    return 0;
}

