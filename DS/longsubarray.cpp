#include <bits/stdc++.h>
using namespace std;

//give an array and a TARGET find the longest subarray who sums to target
int subarray(vector<int> & arr,int target){
    int sum = 0;
    int len = 0;
    int n = size(arr);
    map<int , int> m;
    for(int i = 0;i<n ; i++){
        sum += arr[i];
        m[sum] = min(i,m[sum]);
        if(sum == target) len = max(len,i);
        if(m.find(sum-target) != m.end()){
            len = max(len , i - m[sum-target]);
        }

        }
    return len;

}


int main(){
    int n;
    int target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i = 0; i< n;i++) cin >> arr[i];
    int len = subarray(arr , target);
    cout << len;
}