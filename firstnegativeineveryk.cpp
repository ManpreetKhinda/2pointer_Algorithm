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
vector<int> printfirstnegative(int arr[], int n, int k){
    int i=0,j=0;
    vector<int> ans;
    queue<int> q;
    while(j<n){
        if(arr[j]<0)q.push(arr[j]);
        if(j-i+1<k)j++;
        else if(j-i+1==k){
            if(q.empty())ans.push_back(0);
            else ans.push_back(q.front());
            if(arr[i]==q.front())q.pop();
            i++;j++;
        }
    }
    return ans;
}
