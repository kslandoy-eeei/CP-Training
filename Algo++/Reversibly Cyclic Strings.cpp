#include <bits/stdc++.h>
using namespace std;

bool isReversiblyCyclic(string str) 
{
    string original = str;
    string reversed = str;
    
    reverse(reversed.begin(), reversed.end());
    
    for (int i = 0; i < str.length(); i++) 
    {
        rotate(reversed.begin(), reversed.begin() + 1, reversed.end());
        if (reversed == original) 
        {
            return true;
        }
    }
    
    return false;
}

int main() 
{
    string s;
    cin >> s;
    
    if (isReversiblyCyclic(s)) cout << 1 << endl;
    else cout << 0 << endl;
}