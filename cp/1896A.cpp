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
            int a[n];
            for(int i = 0;i < n; i++){
                cin >> a[i];
            }
            if (a[0] > a[1] ) {
                cout << "No" << endl;
                continue;
            }
            for(int i = 1;i<n-1;i++){
                if (a[i-1] < a[i] && a[i] > a[i+1]){
                    if ( a[i-1] > a[i+1]){
                        cout << "No";
                        continue;
                    }
                }
            }

            cout << "yes";

        }
    }
    return 0;
}