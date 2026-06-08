#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n-1] , sum = 0;
    for(int i = 0;i< n-1;i++){
         cin >> arr[i];
         sum = sum + arr[i];
        }
    int total = (n*(n+1))/2;
    cout << total - sum ;
}