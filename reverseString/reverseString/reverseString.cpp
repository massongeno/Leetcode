#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


void reverseString(vector<char>& s) {
    for (int i = 0; i < (s.size()/2); i++) {
        iter_swap(s.begin() + i, s.end() - i - 1);
    }
}


int main() {
	vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    
    reverseString(s);

    for (int i = 0; i < s.size();i++) {
        cout << s[i];
    }
}


