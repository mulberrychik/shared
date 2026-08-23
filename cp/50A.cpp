#include <iostream>
using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

            int m ,n;
            cin >> m >> n;
            if (m*n %2 == 1){
                cout << (m*n-1)/2;
            }
            else cout << (m*n)/2;
            return 0;
}