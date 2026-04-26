#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>
using namespace std;

class MovieTicket {
private:
    unordered_map<int,unordered_set<int>> m;
    const int CAP=100;

public:
    bool book(int x,int y){
        auto& s=m[y];
        if(s.count(x)||s.size()>=CAP)return false;
        s.insert(x);return true;
    }
    bool cancel(int x,int y){
        if(m.find(y)==m.end()||!m[y].count(x))return false;
        m[y].erase(x);return true;
    }
    bool is_booked(int x,int y){
        return m.count(y)&&m[y].count(x);
    }
    int available_tickets(int y){
        return m.count(y)?CAP-m[y].size():CAP;
    }
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int Q;
    if(!(cin>>Q)) return 0;
    MovieTicket mt;
    while(Q--){
        string c;cin>>c;
        if(c=="BOOK"){
            int x,y;
            cin>>x>>y;
            cout<<(mt.book(x,y)?"true":"false")<<"\n";
        }
        else if(c=="CANCEL"){
            int x,y;
            cin>>x>>y;
            cout<<(mt.cancel(x,y)?"true":"false")<<"\n";
        }
        else if(c=="IS_BOOKED"){
            int x,y;
            cin>>x>>y;
            cout<<(mt.is_booked(x,y)?"true":"false")<<"\n";
        }
        else if(c=="AVAILABLE_TICKETS"){
            int y;
            cin>>y;
            cout<<mt.available_tickets(y)<<"\n";
        }
    }
    return 0;
}