//task is completed;
#include<bits/stdc++.h>
using namespace std;
int lower_bound(vector<int> A,int n,int element)
{
    int lo=0,hi=n-1;
    while(hi-lo>1)
    {
        int mid=(hi+lo)/2;
        if(A[mid]<element)
        {
            lo=mid+1;

        }
        else
        {
            hi=mid;
        }
        
    }
    if(A[lo]>=element)
    {
        return A[lo];
    }
    else if (A[hi]>=element)
    {
        return A[hi];
    }
    
    return -1;
}
int main()
{
    int n,k;
    cout<<"enter the size\n";

    cin>>n;
    vector<int> A(n);
    cout<<"enter the elements\n";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"enter the element to find the lower boubnd\n";
    cin>>k;

    cout<<"the lower bound is \n"<<lower_bound(A,n,k);
    return 0;
    
}