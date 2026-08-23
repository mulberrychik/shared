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
            int arr[n];
            for(int i = 0; i < n;i++) cin >> arr[i];

            if(arr[0] == 1) cout << "Yes";
            else cout << "NO";
            cout << "\n";
        }
    }
    return 0;
}