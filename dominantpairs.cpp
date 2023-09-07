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

int dominantpairs(int arr[], int n){
    int count=0;
    sort(arr,arr+n/2);
    sort(arr+n/2, arr+n);
    int i=0, j=n/2;
    while(i<n&&j<n){
        if(arr[i]>=5*arr[j]){
            count+=n/2-i;
            j++;
        }
        else i++;
    }
    return count;
}