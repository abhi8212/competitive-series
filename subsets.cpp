#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;
void generates(vector<int> sub,int i,vector<int> nums)
{
    if(i==nums.size())
    {
        subsets.push_back(sub);
        return;
    }
    
    
        //first call the function without takinng any elements;
        generates(sub,i+1,nums);
        sub.push_back(nums[i]);
        // second call the function by taking the one data from the given sets;
        generates(sub,i+1,nums);
        sub.pop_back();
    
} 
// main function
int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    cout<<" enter the sets\n";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];

    }
    vector<int> empty;
    generates(empty,0,A);
    //print the subsets;
    cout<<"the subsets are\n";
    for(auto sub: subsets)
    {
        for(auto ele: sub)
        {
            cout<< ele <<" ";
        }
        cout<<endl;
    }

    return 0;

}