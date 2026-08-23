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
            int low = 0,mid = 0,high = 0;
            cin >> low >> mid >> high;
            n -= 3;
            while(n--){
                if(low < mid){
                    if(mid > high){
                        cout << "Yes" << endl;
                        continue;
                    }
                    else{
                        low = mid;
                        mid = high;
                        cin >> high;
                    }

                }
                else{
                    cout << "Yes" << endl;
                    continue;
                }
            }
            cout << "NO" << endl;

        }
    }
    return 0;
}