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
int mindiff(int arr[], int n, int k){
    sort(arr,arr+n);
    int maxdiff=arr[n-1]-arr[0];
    int maxx=arr[n-1]-k;
    int minn=arr[0]+k;
    for(int i=1;i<n;i++){
        if(arr[i]>=k){
            minn=min(minn, arr[i]-k);
            maxx=max(maxx, arr[i-1]+k);
            maxdiff=min(maxdiff, maxx-minn);
        }
    }
    return maxdiff;
}