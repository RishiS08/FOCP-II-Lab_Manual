#include <iostream>
using namespace std;


class Product{
    private:
    int m,n,p,q;
    int num;
    

    public:
    int check();
    void getData();
};

int Product::check(){
    cout<<"Enter the number of rows(m) of MATRIX 1: ";
    cin>>m;

    cout<<"Enter the number of columns(n) of MATRIX 1: ";
    cin>>n;

    cout<<"Enter the number of rows(p) of MATRIX 2: ";
    cin>>p;

    cout<<"Enter the number of columns(q) of MATRIX 2: ";
    cin>>q;

    if(n!=p){
        cout<<"Multiplication not possible"<<endl;
        return 0;
    }
}

void Product::getData(){
    int arr1[m][n];
    int arr2[p][q];
    cout<<"Enter elements of MATRIX 1";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<"Enter element: ";
            cin>>num;
            arr1[i][j]=num;
        }
    }
    cout<<endl;

    cout<<"Enter elements of MATRIX 2";
    cout<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<"Enter element: ";
            cin>>num;
            arr2[i][j]=num;
        }
    }

    int product[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<n;k++){
                product[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<endl;
    cout<<"MATRIX 1";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"MATRIX 2";
    cout<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Product";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    Product a1;
    int x = a1.check();
    if(x==0){
        return 0;
    }
    a1.getData();
    return 0;

}