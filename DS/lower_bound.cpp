#include <bits/stdc++.h>
using namespace std;

pair<int, int> ceiling(vector<int> &nums , int num){
    int high = nums.size()-1;
    int low = 0;
    int c = -1;
    int f = -1;

    
    while(high >= low){
        int mid = low + (high - low)/2;

        if(nums[mid] > num){
            high = mid - 1;
            c = mid;}
        else if(nums[mid] < num){
            low = mid + 1;
            f = mid;}
        else return {mid, mid};
        
    }
    return {f,c};
}

int main(){
    int n;
    int target;
    cin >> n >> target;
    cout << n << endl;
    vector<int> arr(n);
    for(int i = 0; i< n;i++) cin >> arr[i];
    
    pair<int ,int>len = ceiling(arr , target);
    if (len.first > 0 && len.second > 0)
    {cout << arr[len.first] << " " << arr[len.second];}

    else cout << "not found" ;
}