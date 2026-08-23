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
            int count = 0;
            string cells;
            getline(cin, cells);
            int front = 1;
            int back = 0;
            bool kempty = 0;
            while(cells[back] == '#'){
                n--;
                front++;
                back++;
            }
            if(n > 0) count++;
            for(int i = 0;i< n;i++){
               if(cells[front] == '.'){
                if (kempty){
                    if(front == n-1 && n > 2) {count +=2; break;}
                    if(cells[front + 1] == '.') {
                        count++; break;
                    }
                    count++;
                    front++;
                    back++;
                    kempty = 0;
                }
                else{
                    front++;
                    back++;
                    kempty = 1;
                }
               }
               else if(cells[front] == '#'){
                    if(kempty){
                        count++;
                        front++;
                        back++;
                        kempty = 0;
                    }
                    else{
                        front++;
                        back++;
                    }
               }
            }
            cout << count << endl;

        }
    }
    return 0;
}