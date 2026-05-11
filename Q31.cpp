#include <iostream>
using namespace std;

class Defect{
    private:
    int num;
    int arr[5];
    int sum=0;

    public:
    void getData();
    void displayResult();
};

void Defect::getData(){
    for(int i=0;i<5;i++){
        cout<<"Enter num "<<i+1<<": ";
        cin>>num;
        arr[i]=num;
    }
}

void Defect::displayResult(){
    cout<<"[ ";
    for(int i=0;i<5;i++){
        if(arr[i]%15==0){
            sum+=1;
        }
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    cout<<endl;
    cout<<"Total number of elements which are divisible by 3 and 5 are: "<<sum<<endl;

}

int main(){
    Defect a1;
    a1.getData();
    a1.displayResult();
    return 0;
}