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
/*count number of substrings(not necessarily distinct)
that have exactly k distinct characters*/
int atmostk(string s, int k){
    int ans=0;
    int map[26]={0};
    int count=0, i=0;
    for(int j=0;j<s.size();j++){
        if(map[s[j]-'a']==0)count++;
        map[s[j]-'a']++;
        while(count>k){
            map[s[i]-'a']--;
            if(map[s[i]]==0)count--;
            i++;
        }
        if(count<=k)ans+=j-i+1;
    }
    return ans;
}
int substrcount(string s, int k){
    return atmostk(s,k)-atmostk(s,k-1);
}
/*total number of subarrays having total distinct elements same as
that of the parent array*/
int atmostkdist(int arr[], int n,int k){
    int i=0,ans=0;
    unordered_map<int,int> um;
    for(int j=0;j<n;j++){
        um[arr[j]]++;
        while(um.size()>k){
            um[arr[i]]--;
            if(um[arr[i]]==0)um.erase(arr[i]);
            i++;
        }
        ans+=j-i+1;
    }
    return ans;
}
int countdistinctsubarray(int arr[], int n){
    unordered_set<int> tempset;
    for(int i=0;i<n;i++){
        tempset.insert(arr[i]);
    }
    int distinct=tempset.size();
    return  atmostkdist(arr,n,distinct)-atmostkdist(arr,n,distinct-1);
    
}