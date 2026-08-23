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
            int a = -1;
            int b = -1;
            int temp;
            int acount = 0;
            int bcount = 0;
            bool ans = true;
            int half = n/2;
            while(n--){
                cin >> temp;
                if(temp == a){
                    acount++;
                }
                else if (temp == b){
                    bcount++; 
                }
                else{
                    if (a == -1){
                        a = temp;
                        acount++;
                    }
                    else if(b == -1){
                        b = temp;
                        bcount++;
                    }
                    else{
                        ans = false;
                    }
                }
            }
            if(ans){
            if ((acount != half && bcount != half) && bcount != 0){
                ans = false;
                }}

            cout << (ans ? "Yes" : "NO") << endl;
        }
    }
    return 0;
}