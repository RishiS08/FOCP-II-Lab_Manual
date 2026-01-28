#include <iostream>
using namespace std;

class AutoDetect{
    private:
    char ch;

    public:
    void getData();
    void displayResult();
};

void AutoDetect::getData(){
    cout<<"Enter a character: ";
    cin>>ch;
}

void AutoDetect::displayResult(){
    if(ch>='0' && ch<='9'){
        cout<<"It is a number\n";
    }

    else if((ch>='a' && ch<='z') || (ch>='A'&& ch<='Z')){
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'|| ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
            cout<<"It is a Vowel\n";
        }
        else{
            cout<<"It is a Consonant\n";
        }
    }
    else{
        cout<<"It is a Special Character\n";
    }
}
int main(){
   AutoDetect a1;
   a1.getData();
   a1.displayResult();
    return 0;
}