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
pair<long long, long long > minmax(vector<long long >&a, int l, int r){
    int low=l,high=r-1;
    long long minsum=0,maxsum=a[r]-a[l-1];
    while(low<=high){
        int mid=(low+high)/2;
        long long lsum=a[mid]-a[l-1],rsum=a[r]-a[mid];
        if(abs(rsum-lsum)<maxsum-minsum){
            minsum=min(lsum,rsum);
            maxsum=max(lsum,rsum);
        }
        if(lsum<rsum)low=mid+1;
        else high=mid-1;
    }
    return {minsum,maxsum};
}
long long mindiff(int n, vi&a){
    vector<long long> prefixsum(n+1,0);
    for(int i=1;i<=n;i++)prefixsum[i]=prefixsum[i-1]+a[i-i];
    long long ans=prefixsum[n];
    for(int i=1;i<n-2;i++){
        pair<long long ,long long > mml=minmax(prefixsum,1,i+1),mmr=minmax(prefixsum,i+2,n);
        ans=min(ans,max(mml.second,mmr.second)-min(mml.first,mmr.first));
    }
    return ans;
}