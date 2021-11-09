#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    sort(s.begin(),s.end());
	   int sum=0;
	    for(int i=0;i<s.length();i++)
	    {
            cout<<s[i]<<" ";
            cout<<i<<" ";	        
	        sum=sum+ (i+1)*(int(s[i])-96);
	    }
        cout<<sum;
	    
	}
	return 0;
}
