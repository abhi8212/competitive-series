#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         string s,s1,s2;
        cin>>s;
         
        int j=0,k=0;
        for(int i=0;i<s.length();i++)
        {
            s2[k++]=s[i];
            if(i%2)
            {
                s1[j]=s[i];
                j++;
            }
            else {
            s2[k]=s[i];
            k++;
            }
            
            
        }
      /*  for(int p=0;p<s1.length();p++)
        {
            cout<<s1[p];
        }
        cout<<" ";
         for(int m=0;m<s2.length();m++)
        {
            cout<<s2[m];
        }
        */
       cout<<s<<" "<<s1<<" "<<s2<<endl;
    }
    return 0;
}
