#include <iostream>
using namespace std;
void sieverEratosthenes(int n)
{
    int prime[100]={0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    // cout<<i<<" "<<endl;
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;
}
int main()
{
    //   its an principle of all prime no. best approach
    int n;
    cin >> n;
    sieverEratosthenes(n);
    return 0;
}