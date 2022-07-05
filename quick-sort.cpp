//Average time complexity: NlogN
//Worst case time complexity: N^2

#include<bits/stdc++.h>
using namespace std;

int partition(int* arr, int s, int e){
    int pivot=arr[e];
    int i=s-1, j=s; //'i' is the index of elements smaller than pivot and 'j' is the index of elements greater than pivot.
    for(;j<e; j++){
        if(arr[j]<=pivot){
            i=i+1;
            swap(arr[i],arr[j]);
        }
    }
    i=i+1;
    swap(arr[i],arr[e]);
    return i;
}

void quicksort(int* arr, int s,  int e){
    //base case
    if(s>=e){
        return;
    }

    //step1: choose pivot
    int p=partition(arr,0,e);

    //step2: smaller elements
    quicksort(arr,s,p-1);
    //step3: greater elements
    quicksort(arr,p+1,e);

    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" , ";
    }
    return 0;
}