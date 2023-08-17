#include<bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<"enter the number"<<endl;
    // int n;
    // cin>>n;
    // bool flag=false;
    // for(int i=2;i<sqrt(n);i++)
    // {
    //     if(n%i==0) 
    //     {
    //         flag=true;
    //         break;
    //     }
    // }

    //prime factors
    cout<<"enter the number"<<endl;
    int n;
    cin>>n;
    bool flag=false;

    //always one number exsist before root of n
    for(int i=2;i<sqrt(n);i++)
    {
       while(n % i==0)
       {
        cout<<i<<" ";
        n=n/i;
       }
       if(n>1) cout<<n;
    }

    

    
}