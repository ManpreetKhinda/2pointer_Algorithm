#include <iostream>
#include <cmath>
#include <stack>
#include <string>
#include <stdlib.h>
#include <unordered_set>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;
#define vi vector<int>
#define vvi vector<vi>
#define pii vector<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
/* if any repeating char is encountered remove the first
and reverse the string and do it over*/
string f(string&s){
    int mp[26]={0};
    for(char ch:s)mp[ch-'a']++;
    bool flag=true;
    int i=0,j=s.size()-1;
    int cnt=0;
    string begin="",end="";
    while(i<=j){
        char ch;
        if(flag)ch=s[i++];
        else ch=s[j--];
        if(mp[ch-'a']>1){
            mp[ch-'a']--;
            cnt++;
            flag=!flag;
        }
        else{
            if(flag)begin+=ch;
            else end=ch+end;
        }
        string ans=begin+end;
        if(cnt&1)reverse(s.begin(),s.end());
        return ans;
    }
}