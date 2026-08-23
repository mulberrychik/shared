#include <bits/stdc++.h>
#include <vector>
#include <cmath>
using namespace std;

int sqrtBS(int n){
    int low = 0;
    int high = n;
    int candi = 0;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(mid*mid < n) {
            low = mid + 1;
            candi = mid;}
        
        else if(mid*mid > n){
            high = mid - 1;
        }
        else if (mid*mid == n) return mid;}
    return candi;}

int nth_rootBS(int m,int n){
    int low = 0;
    int high = n;
    while(low <= high){
        int mid = low + (high - low)/2;
        float sq = pow(mid, m);
        if(sq < n) {
            low = mid + 1;}
        
        else if(sq > n){
            high = mid - 1;
        }
        else if (sq == n) return mid;}
        
    return -1;}


int main(){
    int n,m;
    cin >> m >> n ;
    int ans = nth_rootBS(m , n);
    cout << ans;

}