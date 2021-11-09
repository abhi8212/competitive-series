#include<bits/stdc++.h>
using namespace std;
//convert decimal to binary number using right shift;
void printbinary(int num)
{
    for (int  i = 5; i>=0; --i)
    {
        /* code */
        cout<<((num>>i) &1);
    }
    cout<<endl;
    
}
int main()
{
    printbinary(9);
    return 0;

}