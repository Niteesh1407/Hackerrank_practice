//link: https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem?isFullScreen=true

CODE:

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int>v;
    stringstream ss;  //We can take out integers using stringstream
    ss<<str;
    int k;
    char ch;
    while(ss>>k)
    {
        v.push_back(k);
        ss>>ch;
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
