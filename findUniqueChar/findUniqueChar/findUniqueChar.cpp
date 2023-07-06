#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

inline void keep_window_open() { char ch; cin >> ch; }

    int firstUniqChar(string s) {
        for (int i = 0; i <= s.size(); i++) {
            if (!(s.find(s[i],i+1))) {
                return i;
            }
        }
        return -1;
    };

int main()
{
    string s = "leetcodel";

     cout << firstUniqChar(s);

     return 0;
}
