#include<bits/stdc++.h>
typedef unsigned long long int ll;

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDJE
     freopen("input.txt","r",stdin);
     freopen("output.txt","r",stdout);
     #endif


     //start the code;
    int n;
    cin>>n;
    vector<int> A(n);
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    int find_element;
    cin>>find_element;
    int lo=0,hi=n-1;

    //condition for check the find_element;
     while(hi-lo>1)
     {
         int mid =(hi+lo)/2;
         if(A[mid]<find_element)
         {
             lo=mid+1;
         }
         else
         {
             hi=mid;
         }
     }
     if(A[lo]==find_element)
     {
         cout<<"element is found at index\n"<<lo<<endl;
     }
     else if(A[hi]==find_element)
     {
         cout<<"element is found\n"<<hi<<endl;
     }
     else
     {
         cout<<"element is not found\n";
     }
     return 0;

}