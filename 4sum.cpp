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
vvi foursum(vi& nums, int t){
    vvi ans;
    int n=nums.size();
    set<vi> s;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            int l=j+1, r=n-1;
            while(l<r){
                int sum=nums[i]+nums[j]+nums[l]+nums[r];
                if(sum==t){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    s.insert(temp);
                    l++;r--;
                }
                else if(sum<t)l++;
                else r--;
            }

        }
    }
    for(auto i: s){
        ans.push_back(i);
    }
    return ans;
}