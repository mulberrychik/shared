#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            long long n;
            cin >> n;
            while(n%2 != 1){
                n = n/2;
            }
            cout << (n != 1 ? "yes" : "NO") << endl;
        }
    }
    return 0;
}