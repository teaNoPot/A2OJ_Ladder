#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(NULL);

using namespace std;


int main()
{
    int n,val;
    int nums[8]={0};
    
    // INPUT
    cin >> n;
    for(int i=0;i<n;++i) 
    {
        cin >> val;
        nums[val]+=1;
    }
    
    if(nums[5]==0 && nums[7]==0 
        && nums[1]==nums[4]+nums[6]&& nums[1]==nums[2]+nums[3] 
        && nums[2]>=nums[4])
    {
        for(int i=0; i<nums[4];++i)
            cout << "1 2 4" << endl;
        nums[2]-=nums[4];
        for(int i=0;i<nums[2];++i)
            cout << "1 2 6" << endl;
        for(int i=0;i<nums[3];++i)
            cout << "1 3 6" << endl;
    }
    else 
    {
        cout << -1 << endl;
    }
    
    return 0;
}
