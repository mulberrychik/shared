#include <bits/stdc++.h>
using namespace std;

void union1(int arr[],int p,int arr1[],int n1,vector<int> & v){
    int m = 0;
    int n = 0;
    while(m < p && n < n1){
        if(arr[m]<= arr1[n]){
            if(v.empty() || v.back() != arr[m]){
                v.emplace_back(arr[m]);
                m++;
            }
            else {
                if (v.empty() || v.back() != arr1[n]){
                    v.emplace_back(arr1[n]);
                    n++;
                }
            }
        }
    }

    while(m < p){
        if(v.back() != arr[m] || v.empty()){
            v.emplace_back(arr[m]);
        }
        m++;
    }
    
    while(n < n1){
        if(v.back() != arr1[n] || v.empty()){
            v.emplace_back(arr1[n]);
        }
        n++;
    }
}

void inter(int arr[],int p,int arr1[],int n1,vector<int> & v){
    int m = 0;
    int n = 0;
    while (m < p && n< n1){
        if (arr[m] > arr1[n]) n++;
        else if (arr[m] == arr1[n]){
            if(v.empty() || v.back() < arr[m]){
                v.emplace_back(arr[m]);
                m++;
                n++;
            }
        else m++;
        }
    }


}

int main()
{
    int n;
    cin >>  n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }

    int n1;
    cin >>  n1;
    int arr1[n1];
    for(int i = 0;i<n1;i++){
        cin >> arr1[i];
    }

    vector<int> v;
//    union1(arr, n,arr1,n1,v);
    inter(arr, n,arr1,n1,v);

    int k = v.size();
    for(int i = 0;i<k;i++){
        cout << v[i] <<" ";
    }
}