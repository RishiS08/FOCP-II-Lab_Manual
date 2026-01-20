#include <iostream>

using namespace std;
int main(){
    int a,b,c,winner;
    float avg;
    cout<<"Enter 1st player's Score: ";
    cin>>a;
    cout<<"Enter 2nd player's Score: ";
    cin>>b;
    cout<<"Enter 3rd player's Score: ";
    cin>>c;
    winner=a;
    if(b>a && b>c){
        winner=b;
    }
    if(c>a && c>b){
        winner=c;
    }

    if(winner==a){
        cout<<"Player 1 is the winner\n";
    }
    if(winner==b){
        cout<<"Player 2 is the winner\n";
    }
    if(winner==c){
        cout<<"Player 3 is the winner\n";
    }

    return 0;
}