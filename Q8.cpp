#include <iostream>
using namespace std;

class BuzzFuzz{
    private:
    int N;

    public:
    void getData();
    void displayResult();
};

void BuzzFuzz::getData(){
    cout << "Enter N: ";
    cin >> N;
}

void BuzzFuzz::displayResult(){
    for (int i = 1; i <= N; i++) {
        if (i%15==0) {
            cout<< i << " -> BuzzFuzz\n";
        } 
        else if (i%3==0) {
            cout<< i << " -> Buzz\n";
        } 
        else if (i%5==0) {
            cout<< i << " -> Fuzz\n";
        } 
        else {
            cout<< i << "\n";
        }
    }
}
int main() {
    BuzzFuzz a1;
    a1.getData();
    a1.displayResult();
    return 0;
}