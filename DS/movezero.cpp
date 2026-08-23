#include <bits/stdc++.h>
using namespace std;

// void merge(int n, int arr[]){
//     vector <int> v;
//     if(arr[n]== 0)
//     {

//     }
// }

// void movezero(int arr[],int n){
//     if(n < 2) return;
//     merge()
    
// }
void leftshift(int arr[],int low , int high){
    for(int i = low+1;i<=high-1; i++){
        arr[i-1] = arr[i];
    }
}

// void movezero(int arr[],int n){
//     for(int i = 0;i<n;i++){
//         if(arr[i]==0){
//             leftshift(arr,i+1,n-1);
//             arr[n-1] = 0;
//         }
//     }
// }


void movezero(int arr[],int low , int high){

    for(int i = low;i<high;i++){
        if(arr[i]==0){
            movezero(arr,i+1,high-i);
            leftshift(arr,i,high);
            arr[high-1] = 0;
        }
    }
}

// void optmvzero(int arr[],int n){
//     int i = 1,j =0;
//     while(i != n-1 && j != n-1){
//         if(arr[i]!= 0 && arr[j]!=0);
//         j++;
//         i++;

//         if(arr[i] == 0 && arr[j] != 0){
//         j = i;
//         i++;}

//         if(arr[i]!=0 && arr[j] == 0){
//             swap(arr[i],arr[j]);
//             j++;

//         if(arr[i]==0 && arr[j] == 0){
//             i++;
//         }
        
//         }

//     }
// }

void mvzero(int arr[],int n){
    int i = 1;
    int j = 0;
    for(;i< n;i++){
        if(arr[j]==0){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        else j++;
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
//    movezero(arr ,0, n);
//    optmvzero(arr , n);
    mvzero(arr,n);
    for(int i = 0;i<n;i++){
        cout << arr[i] <<" ";
    }
}