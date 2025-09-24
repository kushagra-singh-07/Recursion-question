#include <iostream>
using namespace std;

void palindrome(string n, int start, int end)
{
    if(start >= end){
        cout << "palindrome" << endl;
        return;
    }
    if(n[start] != n[end]){
        cout << "not palindrome" << endl;
        return;
    }
    palindrome(n, start + 1, end - 1); 
}
int main()
{
    string n;
    cin >> n;
    palindrome(n, 0, n.size() - 1);
    return 0;
    
}

