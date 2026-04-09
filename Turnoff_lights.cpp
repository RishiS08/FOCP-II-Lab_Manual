#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canTurnOff(int n,int k,int L,const string& bulbs) {
    int ops=0;
    for (int i=0;i < n;){
        if(bulbs[i]=='1'){
            ops++;
            i+=L;
        }else{
            i++;
        }
    }
    return ops<=k;
}

int main(){
    int n,k;
    cin>>n>>k;
    string bulbs;
    cin >> bulbs;

    int left=1,right=n;
    int ans=n;

    while(left<=right){
        int mid=left+(right-left)/2;
        if(canTurnOff(n,k,mid,bulbs)){
            ans=mid;
            right=mid-1;
        }else{
            left=mid+1;
        }
    }

    cout<<ans<<endl;
    return 0;
}