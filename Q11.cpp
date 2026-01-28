#include <iostream>
using namespace std;

class Bill{
    private:
    int quantity,unitprice,bill,discountbill;

    public:
    void getData();
    void displayResult();
};

void Bill::getData(){
    cout<<"Enter the unit price of the item: ";
    cin>>unitprice;
    cout<<"Enter the total quantity: ";
    cin>>quantity;
}

void Bill::displayResult(){
    bill=unitprice*quantity;
    discountbill=bill-(0.1*bill);

    if(quantity>1000){
        cout<<"Discount applied\n";
        cout<<"Final bill is "<<discountbill<<endl;
    }
    else{
        cout<<"Final bill is "<<bill<<endl;
    }
}
int main(){
    Bill a1;
    a1.getData();
    a1.displayResult();
    return 0;
}