#include <iostream>
using namespace std;
int main() {
	int num1,num2;
	cin >> num1 >> num2;
	int x=num1^(num1+1);
	for(int i=num1+2; i<=num2; i++){
		x = x ^ i;
	}

	if(x%2==0) cout<<"even";
	else cout<<"odd";

	return 0;
}