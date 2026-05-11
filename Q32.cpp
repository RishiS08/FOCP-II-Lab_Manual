#include <iostream>
using namespace std;

class largest{
    private:
    int num;
    int arr[5];

    public:
    void getData();
    void displayResult();
};

void largest::getData(){
    for(int i=0;i<5;i++){
        cout<<"Enter num "<<i+1<<": ";
        cin>>num;
        arr[i]=num;
    }
}

void largest::displayResult(){
    int large=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    int secondlarge=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>secondlarge && arr[i]<large){
            secondlarge=arr[i];
        }
    }

    cout<<"Largest number in the array is: "<<large<<endl;
    cout<<"Second largest number in the array is: "<<secondlarge<<endl;
}

int main(){
    largest a1;
    a1.getData();
    a1.displayResult();
    return 0;

}