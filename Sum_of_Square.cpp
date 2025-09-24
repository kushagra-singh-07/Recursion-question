#include <iostream>
using namespace std;

int printSquareSum(int n)
{
    if(n==0)
    return 0;
    else
    return (n*n)+printSquareSum(n-1);
}
int main()
{
    int n;
    cin>>n;
    printSquareSum(n);
    return 0;

}
