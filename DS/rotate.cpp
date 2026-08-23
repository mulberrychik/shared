#include <bits/stdc++.h>
using namespace std;

void left1rotate(int arr[],int n){
    
    for(int i = 0;i<n-1;i++){
        if(i != 0)
        {
            swap(arr[i-1],arr[i]);
        }
        else swap(arr[0],arr[n-1]);
    }
}

/*void leftKrotate(int arr[],int n,int k){
    int temp[k];
    for(int i = 0;i< n ;i++){
        if(i < k){
            temp[i]=arr[i];
        }
        else 
        arr[i-k] = arr[i];
    }

    for(int i = 0;i<k;i++){
        arr[n-k+i]=temp[i];
    }
    
}
*/

void leftKrotate(int arr[],int n,int d) //optimal
    {reverse(arr , arr+d);
        reverse(arr+d , arr+n);
        reverse(arr , arr+n);
    }




int main()
{
    int n,k;
    cin >>  n >> k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }

    leftKrotate(arr ,n,k);
    for(int i = 0;i<n;i++){
        cout << arr[i] <<" ";
    }
}