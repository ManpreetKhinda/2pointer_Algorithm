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
/*find the length of smallest substring that contains all 0 12*/
int smallestwindow(string s){
    int i=0, count=0, maxlen=INT_MAX;
    int map[3]={0};
    for(int j=0;j<s.size();j++){
        if(map[s[j]-'0']==0)count++;
        map[s[j]-'0']++;
        while(count>=3){
            if(count==3)maxlen=max(maxlen,j-i+1);
            map[s[i]-'0']--;
            if(map[s[i]-'0']==0)count--;
            i++;
        
        }
    }
    if(maxlen==INT_MAX)return -1;
    return maxlen;
}