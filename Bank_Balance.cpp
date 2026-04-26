#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Bank {
private:
    unordered_map<long long, long long> accounts;

public:
    bool create(long long x, long long y) {
        if (accounts.find(x) == accounts.end()) {
            accounts[x] = y;
            return true;
        }
        accounts[x] += y;
        return false;
    }

    bool debit(long long x, long long y) {
        if (accounts.count(x) && accounts[x] >= y) {
            accounts[x] -= y;
            return true;
        }
        return false;
    }

    bool credit(long long x, long long y) {
        if (accounts.count(x)) {
            accounts[x] += y;
            return true;
        }
        return false;
    }

    long long balance(long long x) {
        return (accounts.count(x)) ? accounts[x] : -1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int Q;
    if (!(cin >> Q)) return 0;
    
    Bank b;
    while (Q--) {
        string cmd;
        cin >> cmd;
        if (cmd == "CREATE") {
            long long x, y; cin >> x >> y;
            cout << (b.create(x, y) ? "true" : "false") << "\n";
        } else if (cmd == "DEBIT") {
            long long x, y; cin >> x >> y;
            cout << (b.debit(x, y) ? "true" : "false") << "\n";
        } else if (cmd == "CREDIT") {
            long long x, y; cin >> x >> y;
            cout << (b.credit(x, y) ? "true" : "false") << "\n";
        } else if (cmd == "BALANCE") {
            long long x; cin >> x;
            cout << b.balance(x) << "\n";
        }
    }
    return 0;
}