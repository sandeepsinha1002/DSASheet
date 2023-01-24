#include<iostream>
using namespace std;
#include<vector>

void printF(int i,vector<int> &ans,int arr[],int n)
{
    if(i==n)
    {
        for(auto it : ans)
        {
            cout<<it<<" ";
        }
        if(ans.size()==0)
        {
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    printF(i+1,ans,arr,n);
    ans.push_back(arr[i]);
    printF(i+1,ans,arr,n);
    ans.pop_back();

}
int main()
{
    int arr[]={4,3,2,1};
    int n =sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    printF(0,ans,arr,n);
    return 0;
}