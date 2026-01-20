#include <iostream>

using namespace std;
int main(){
    int in,q,up,tp,fp;
    cout<<"Enter the item no.: ";
    cin>>in;
    cout<<"Enter the quantity: ";
    cin>>q;
    cout<<"Enter the unit price: ";
    cin>>up;
    tp=q*up;
    fp=tp-(0.2*tp);
    cout<<"Total Price before discount is "<<tp<<"\n";
    cout<<"Total Price after 20"<<"%"<<" discount is "<<fp<<"\n";
}