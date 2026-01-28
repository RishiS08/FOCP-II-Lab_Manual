#include <iostream>
using namespace std;

class Largest{
    private:
    int n,num;
    
    public:
    void getData();
    void displayResult();
};

void Largest::getData(){
    cout<<"Enter the number of entries: ";
    cin>> n;
}

void Largest::displayResult(){
    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter number "<<i+1<<": ";
        cin>>num;
        arr[i]=num;
    }
    int largest=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    cout<<"Largest number is "<<largest<<endl;
}

int main (){
    Largest a1;
    a1.getData();
    a1.displayResult();
    return 0;
}