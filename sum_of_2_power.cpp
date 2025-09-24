#include <iostream>
#include <cmath>
using namespace std;

int printpower(int n)
{
    if(n==0)
    {
        return 1;
    }
    return  pow(2,n)+printpower(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<printpower(n);
    return 0;
}