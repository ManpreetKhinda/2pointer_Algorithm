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
/* given string s extract all integers form s*/
vector<string> extract(string s){
    vector<string> ans;
    for(int j=0;j<s.size();j++){
        string temp="";
        if(isdigit(s[j])){
            while(isdigit(s[j])){
                temp+=s[j];
                j++;
            }
            ans.push_back(temp);

        }
    }
    return ans;
}