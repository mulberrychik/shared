<<<<<<< HEAD
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
=======
class Solution {
public:
    
    vector<int> hourcount(vector<int>& piles, int k){
        int hour = 0;
        int max = -1;
        for(int i = 0; i< piles.size();i++){
            if(piles[i] > max) max = piles[i];
            hour = hour + ceil(piles[i]/k);
        }
        return {hour ,max};
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        //ans lies between k ans piles.max
        int max;
        int hours = 0;
        hours = hourcount(piles , 1)[0];
        max = hourcount(piles , 1)[1];
        if (max == 1) return 1;

        int low = 1;
        int high = max;
        while(low <= high){
            int mid = low + (high - low)/2;

            if(hourcount(piles , mid)[0] <= h){
                high = mid - 1;
            }
            else if (hourcount(piles, mid)[0] > h){
                low = mid + 1;
            }
        }
        return low;

    }
};
>>>>>>> a48558b4cd03467ed12727d48f0da382e3dbbfa1
