#include <iostream>
using namespace std;

class bill{
    private:
    int in,q,up,tp,fp;

    public:
    void getData();
    void displayBill();
};

void bill::getData(){
    cout<<"Enter the item no.: ";
    cin>>in;
    cout<<"Enter the quantity: ";
    cin>>q;
    cout<<"Enter the unit price: ";
    cin>>up;
}

void bill::displayBill(){
    tp=q*up;
    fp=tp-(0.2*tp);
    cout<<"Total Price before discount is "<<tp<<"\n";
    cout<<"Total Price after 20"<<"%"<<" discount is "<<fp<<"\n";
}
int main(){
    bill a1;
    a1.getData();
    a1.displayBill();
    return 0;
}