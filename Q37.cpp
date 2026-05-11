#include <iostream>
using namespace std;

class Valid
{
private:
    string username;

public:
    void getData();
    void displayResult();
};

void Valid::getData()
{
    cout << "Enter your Username: ";
    cin >> username;
}

void Valid::displayResult()
{
    int isvalid = 1;
    for (int i = 0; i < username.length(); i++)
    {
        if ((username[i] >= '0' && username[i] <= '9') || (username[i] >= 'a' && username[i] <= 'z') || (username[i] >= 'A' && username[i] <= 'Z'))
        {
            isvalid = 1;
        }
        else
        {
            isvalid = 0;
            break;
        }
    }

    if (isvalid == 1)
    {
        cout << "Username Accepted" << endl;
    }
    else
    {
        cout << "Username Rejected" << endl;
    }
}

int main()
{
    Valid a1;
    a1.getData();
    a1.displayResult();
    return 0;
}