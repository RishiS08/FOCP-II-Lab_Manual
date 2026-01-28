#include <iostream>

using namespace std;

class Area{
    private:
    int r;
    int area;

    public:
    void getData();
    void displayArea();
};

void Area::getData(){
    cout<<"Enter the Radius of the fountain: ";
    cin>>r;
}

void Area::displayArea(){
    cout<<"Area covered by the fountain is "<<3.14*r*r<<"\n";
}
int main(){
    Area a1;
    a1.getData();
    a1.displayArea();
    return 0;
}