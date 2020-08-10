#include<iostream>
#include<string>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int len = arr.size(),i;
    int maxim=1,co=1;
    for(i=0;i<len-1;i++){
        if(arr[i]==arr[i+1]){
            co++;
        }
        if((arr[i]!=arr[i+1] || i==len-2) && co>1){
            if(maxim>co){
                co=1;
                continue;
            }
            else{
                maxim = co;
                co=1;
            }
        }
    }
    cout<<maxim<<endl;
}
