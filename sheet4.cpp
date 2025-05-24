#include<iostream>
#include<string>
#include<algorithm>
#include<stdlib.h>
#include<map>

using namespace std;

int main() {
    int t = 1; 
    // cin >> t;

    while (t--)
    {
        string s1, s2;
        
        cin >> s1;

        map<char,int> m;
        int n =  s1.size();
        for(int i = 0; i < n; i++) {
            m[s1[i]]++;
        }
        
        for(char c = 'a' ; c <= 'z'; c++) {
            if(m[c]) cout << c << " : " << m[c] << endl;
        }
    }
    
    return 0;
}