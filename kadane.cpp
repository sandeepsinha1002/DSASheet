#include<iostream>
using namespace std;
int main()
{
    int arr[]  = {2,3,-3,4,-5,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    int maxSum=arr[0];
    int curSum=0;
    for(int i=0;i<n;i++)
    {
        curSum=curSum+arr[i];
        if(curSum>maxSum)
        {
            maxSum=curSum;
        }
        if(curSum<0)
        {
            curSum=0;
        }
        
    }
    cout<<maxSum<<endl;
    return 0;
}