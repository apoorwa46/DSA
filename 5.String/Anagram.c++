#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    vector<int> H(26,0);
    if(s.length()!=t.length()) return false;

    for(int i=0;i<s.length();i++){
            H[s[i]-'a']++;
    }
    for(int i=0;i<t.length();i++){
            H[t[i]-'a']--;        
    }
    for(int i=0;i<H.size();i++){
        if(H[i]!=0){
            return false;
        }
    }
    return true;
}

int main() {
    string s = "listen";
    string t = "silent";

    cout << (isAnagram(s, t) ? "Anagram" : "Not Anagram") << endl;
}