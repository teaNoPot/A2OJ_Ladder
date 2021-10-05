#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);
using namespace std;

int _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);


int mergeSort(int arr[], int arr_size) {
    int temp[arr_size];
    return _mergeSort(arr, temp, 0, arr_size-1);
}


/* sort the input array and return the number of inversions */
int _mergeSort(int arr[], int temp[], int left, int right) {

    int mid, inv_count = 0;
    if (right > left) {
    
        mid = (left+right)/2;

        // sum of inversion in the left part, the right part and inversions in merge
        inv_count += _mergeSort(arr,temp, left,mid);
        inv_count += _mergeSort(arr,temp, mid+1,right);
        // Merge both parts
        inv_count += merge(arr,temp,left,mid+1,right);

    }
    return inv_count;
}

int merge(int arr[], int temp[], int left, int mid, int right) {
    
    int i,j,k;
    int inv_count=0;

    i=left; // index of left array
    j=mid; // index of right array
    k=left; // result of merged array

    while((i<=mid-1) && (j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        } else {
            cout << mid - i << endl;
            temp[k++] = arr[j++];
            // if a[i] > a[j] then 
            // we have all (mid-1) indexes bigger than a[j] => mid - i inversions
            inv_count = inv_count + (mid-i);
        }
    }

    // Copy the remaining elements from left array and right array
    while(i<=mid-1)
        temp[k++]=arr[i++];
    while(j<=right)
        temp[k++]=arr[j++];
    
    // Copy to main array
    for(int i=left;i<=right;i++)
        arr[i]=temp[i];

    return inv_count;
}


int main() {
    
    // InversionSort: arr[]={8,4,2,1} => 6 inversions 
    //  (maximum number of inversions is : n(n-1)/2)
    // 8 4 2 1 
    int arr[]={1, 20, 6, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
   
    cout << mergeSort(arr,n) << endl;

    return 0;
}
