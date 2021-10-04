#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;

void merge(int a[], int const l, int const m, int const r) {
    auto const left = m-l+1;
    auto const right = r-m;
    
    for(int i=l; i<r; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    auto *leftArray = new int[left],
         *rightArray = new int[right];
    
    // Copy arr[begin..mid], arr[mid+1..end] to new arrays
    for (auto i=0; i<left; i++) 
        leftArray[i] = a[l+i];
    for (auto j=0; j<right; j++)
        rightArray[j] = a[m+j+1];
        
    auto indexLeft = 0, indexRight = 0;
    int indexMergeLeft = l;
    
    // Merge tmp arrays back 
    while(indexLeft<left && indexRight<right) {
        if(leftArray[indexLeft]<=rightArray[indexRight]) {
            a[indexMergeLeft]=leftArray[indexLeft];
            indexLeft++;
        } else {
            a[indexMergeLeft]=rightArray[indexRight];
            indexRight++;
        }
        indexMergeLeft++;
    }
    
    // Copy the remaining elements of
    // left[], if there are any
    while (indexLeft < left) {
        a[indexMergeLeft] = leftArray[indexLeft];
        indexLeft++;
        indexMergeLeft++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (indexRight < right) {
        a[indexMergeLeft] = rightArray[indexRight];
        indexRight++;
        indexMergeLeft++;
    }

}

void mergeSort(int a[], int const l, int const r) {
    if (r > l) {
        auto m = l + (r-l)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    } else {
        return;
    }
}

int main()
{
    int a[] = { 1, 20, 6, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
  
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    
    // MERGE SORT
    mergeSort(a,0,n-1);
    
    for(int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
