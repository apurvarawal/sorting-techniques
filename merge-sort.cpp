#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int s, int e){
    int mid = (s+e)/2;
    int k=s, i=s, j=mid+1;
    int temp[100];
    while(i<=mid && j<=e){
            if(arr[i]<arr[j]){
                temp[k++]=arr[i++];
            }else{
                temp[k++]=arr[j++];
            }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }

    for(int i=0; i<e; i++){
        temp[i]=arr[i];
    }
}

void mergesort(int arr[],int s, int e){
    if(s>=e){
        return;
    }

    //1. DIVIDE
    int mid = (s+e)/2;
    //2. SORT
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    //3. MERGE
    merge(arr,s,e);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;  i<n; i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" , ";
    }
    return 0;
}