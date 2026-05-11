#include <iostream>
using namespace std;

class Sum{
    private:
    int num;
    int arr1[3][3];
    int arr2[3][3];
    int sum[3][3];

    public:
    void getData();
    void displayResult();
};

void Sum::getData(){
    cout<<"Enter elements of MATRIX 1";
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element: ";
            cin>>num;
            arr1[i][j]=num;
        }
    }
    cout<<endl;

    cout<<"Enter elements of MATRIX 2";
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element: ";
            cin>>num;
            arr2[i][j]=num;
        }
    }
}

void Sum::displayResult(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    cout<<"MATRIX 1";
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"MATRIX 2";
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"SUM";
    cout<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    Sum a1;
    a1.getData();
    a1.displayResult();
    return 0;

}