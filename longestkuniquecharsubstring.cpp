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
int longestksubstr(string s,int k){
    int i=0,count=0, ans=INT_MIN;
    int map[256]={0};
    for(int j=0;j<s.size();j++){
        if(map[s[j]]==0)count++;
        map[s[j]]++;
        if(count==k){
            ans=max(ans,j-i+1);
        }
        if(count>k){
            map[s[i]]--;
            if(map[s[i]]==0)count--;
            i++;
        }
    }
    if(ans==INT_MAX)return -1;
    return ans;
}
/* longest subarray with non negative integers*/
int longestsubarry(int arr[], int n){
    int i=0, maxlen=0;
    for(int j=0;j<n;j++){
        if(arr[j]<0)i=j+1;
        else{
            maxlen=max(maxlen, j-i+1);
        }
    }
    return maxlen;
}