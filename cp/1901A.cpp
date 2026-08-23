#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            int n, x;
            cin >> n >> x;
            int temp1,temp2;
            cin >> temp2;
            int high = temp2;
            n--;
            while(n--){
                cin >> temp1;
                int diff = temp1-temp2;
                if(diff > high) high = diff;
                temp2 = temp1;
            }
            int last;
            last = temp2;
            if ((x-last)*2 > high) cout << (x-last)*2 << endl;
            else cout << high << endl;
            
            
        }
    }
    return 0;
}