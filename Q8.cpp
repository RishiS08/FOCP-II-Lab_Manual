#include <iostream>

using namespace std;
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
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
    return 0;
}