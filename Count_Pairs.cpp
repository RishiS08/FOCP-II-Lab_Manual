#include <iostream>
using namespace std;

void solve(){
    long long n;
    if(!(cin>>n)) return;
    
    if(n==1){
        cout<<1<<"\n";
        return;
    }

    long long distinct_primes=0;
    long long temp=n;

    for(long long i=2; i*i<=temp; i++){
        if(temp%i==0){
            distinct_primes++;
            while(temp%i==0){
                temp/=i;
            }
        }
    }
    
    if(temp>1){
        distinct_primes++;
    }

    long long ans=1LL<<distinct_primes;
    cout<<ans<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t;
    if (!(cin>>t)) return 0;
    while(t--){
        solve();
    }
    return 0;
}