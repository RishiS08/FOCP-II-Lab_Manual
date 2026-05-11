#include <iostream>
using namespace std;

class Transpose{
    private:
    int num;
    int arr[3][3];
    int trans[3][3];

    public:
    void getData();
    void displayResult();
};

void Transpose::getData(){
    cout<<"Enter the elements of MATRIX 1"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element: ";
            cin>>num;
            arr[i][j]=num;
        }
    }
}

void Transpose::displayResult(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            trans[i][j]=arr[j][i];
        }
    }

    cout<<"Orginal MATRIX"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    cout<<"Transpose MATRIX"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<trans[i][j];
        }
        cout<<endl;
    }
}

int main(){
    Transpose a1;
    a1.getData();
    a1.displayResult();
    return 0;
}