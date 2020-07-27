#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    if(n==1){
        cout<<n<<endl;
    }
    else{
        cout<<n<<" ";
        while(1){
            if(n%2==0){
                n/=2;
                if(n==1){
                    cout<<n<<endl;
                    break;
                }
                else{
                    cout<<n<<" ";
                }
            }
            else{
                n=n*3+1;
                if(n==1){
                    cout<<n<<endl;
                    break;
                }
                else{
                    cout<<n<<" ";
                }
            }
        }
    }
}
