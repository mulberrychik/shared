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
            int high = 0;
            cin >> temp2;
            n--;
            while(n--){
                cin >> temp1;
                int diff = temp1-temp2;
                if(diff > high) high = diff;
                temp2 = temp1;
            }
            int last;
            cin >> last;
            if ((x-last)*2 > high) cout << (x-last)*2;
            else cout << high << " ";
            
            
        }
    }
    return 0;
}