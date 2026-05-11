#include <iostream>
using namespace std;

class Marks{
    private:
    int marks;
    int arr[3][5];

    public:
    void getData();
    void displayReslt();
};

void Marks::getData(){
    for(int i=0;i<3;i++){
        cout<<"Enter the marks of Student "<<i+1<<endl;
        for(int j=0;j<5;j++){
            cout<<"subject "<<j+1<<": ";
            cin>>marks;
            arr[i][j]=marks;
        }
    }
}

void Marks::displayReslt(){
    cout<<"Marks in 2nd subject of 1st student: "<<arr[0][1]<<endl;
    cout<<"Marks in 5th subject of 3rd student: "<<arr[2][4]<<endl;
}

int main(){
    Marks a1;
    a1.getData();
    a1.displayReslt();
    return 0;
}