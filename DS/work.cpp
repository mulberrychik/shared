#include <iostream>
#include <string>
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
        cin.ignore();
        string cells;
        getline(cin , cells);
        int front = 1;
        int count=0;
        int i = 0;
        while(cells[front] == '#'){

            front++;
            i++;
        }
        int k = n;
        if(n > 0) count++;
        cout << "value" << n << " ";
        // .# edge case  
        if (n == 2){
            if (cells[1] == '#'){
                cout << count << endl;
                continue;
            }
        }
        bool _empty = 0;
        for(;i< n;i++){
            cout << " " << n << " ";
           if(cells[front] == '.' ){
                if (_empty){
                    count++;
                    front++;
                    _empty = 0;
                }
                else{
                    front++;
                    _empty = 1;
                }
               }
               else if(cells[front] == '#'){
                    if(_empty){
                        count++;
                        front++;
                        _empty = 0;
                    }
                    else{
                        front++;
                    }
               }
            }
            if (cells[n-1] == '.') count++;
            cout << count << endl;
        }
        
    }
    return 0;
}