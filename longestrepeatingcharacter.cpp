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
/*length of longest substr containing same letter after performing
operations*/
int charreplace(string s,int k){
    int i=0, count=0, maxlen=0;
    int map[26]={0};
    for(int j=0;j<s.size();j++){
        map[s[j]-'A']++;
        count=max(count,map[s[j]-'A']);
        if(j-i+1-count>k){
            map[s[i]-'A']--;
            i++;
        }
        maxlen=max(maxlen,j-i+1);
    }
    return maxlen;
}