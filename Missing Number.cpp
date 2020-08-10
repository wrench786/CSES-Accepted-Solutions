#include<iostream>
using namespace std;

int main()
{
    long long int n,sum=0,x;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>x;
        sum+=x;
    }
    cout<<n*(n+1)/2 - sum<<endl;
}
