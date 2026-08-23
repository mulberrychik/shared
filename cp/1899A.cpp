#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            if( n %3 == 0){
                cout << "Second";
            }
            else cout << "First";
            cout << endl;
        }
        
    }
    return 0;
}