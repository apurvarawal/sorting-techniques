#include<bits/stdc++.h>
using namespace std;

void selectionsort(int* arr, int n){
    
    for(int i=0; i<=n-2;i++){
        int min=i;
        for(int j=i+1; j<=n-1; j++){
            if(arr[j]<=arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" , ";
    }
    return 0;
}