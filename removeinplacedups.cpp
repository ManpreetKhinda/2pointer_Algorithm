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

int removedups(int arr[], int n){
    int idx=0;
    for(int i=0;i<n;i++){
        if(arr[idx]!=arr[i]){
            idx++;
            arr[idx]=arr[i];
        }
    }
    return idx+1;
}