#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int nums[]={0,1,1,0,1,2,1,2,0,0,0,1};
    int n = sizeof(nums)/sizeof(nums[0]);
    int low =0;
    int mid=0;
    int high=n-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    for (int i = 0; i < n; ++i) {
    cout << nums[i] << "  ";
    }
    return 0;
}