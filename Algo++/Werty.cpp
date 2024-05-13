#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<char, char> keys {{'W', 'Q'}, {'E', 'W'}, 
                          {'R', 'E'}, {'T', 'R'}, 
                          {'Y', 'T'}, {'U', 'Y'}, 
                          {'I', 'U'}, {'O', 'I'}, 
                          {'P', 'O'}, {'[', 'P'}, 
                          {']', '['}, {'\\',']'}, 
                          {'S', 'A'}, {'D', 'S'}, 
                          {'F', 'D'}, {'G', 'F'}, 
                          {'H', 'G'}, {'J', 'H'}, 
                          {'K', 'J'}, {'L', 'K'}, 
                          {';', 'L'}, {'\'', ';'}, 
                          {'X', 'Z'}, {'C', 'X'}, 
                          {'V', 'C'}, {'B', 'V'}, 
                          {'N', 'B'}, {'M', 'N'}, 
                          {',', 'M'}, {'.', ','}, 
                          {'/', '.'}, {' ', ' '},
                          {'Q', 'Q'}, {'A', 'A'},
                          {'Z', 'Z'}, {'1', '`'}, 
                          {'2', '1'}, {'3', '2'}, 
                          {'4', '3'}, {'5', '4'}, 
                          {'6', '5'}, {'7', '6'}, 
                          {'8', '7'}, {'9', '8'}, 
                          {'0', '9'}, {'-', '0'}, 
                          {'=', '-'}, 
                          };

    string input;

    while(getline(cin >> ws, input))
    {
        string decoded = "";
        for (int i = 0; i < input.length(); i++)
        {
            decoded += keys[input[i]];
        }

        cout << decoded << endl;
    }
}