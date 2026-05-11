#include <iostream>
using namespace std;

class Sum{
    private:
    int num,evensum=0,oddsum=0;
    int arr[5];

    public:
    void getData();
    void displayResult();
};

void Sum::getData(){
    for(int i=0;i<5;i++){
        cout<<"Enter num "<<i+1<<": ";
        cin>>num;
        arr[i]=num;
    }
}

void Sum::displayResult(){
    for(int i=0;i<5;i++){
        if(arr[i]%2==0){
            evensum+=arr[i];
        }
        else{
            oddsum+=arr[i];
        }
    }

    cout<<"Sum of all even numbers: "<<evensum<<endl;
    cout<<"Sum of all odd numbers: "<<oddsum<<endl;
}

int main(){
    Sum a1;
    a1.getData();
    a1.displayResult();
    return 0;
}