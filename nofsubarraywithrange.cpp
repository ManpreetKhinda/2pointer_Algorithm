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
/* find the number of subarray such that the value of the
maximum array element in that subarray is at within range*/
int countsubarrys(int arr[], int n, int L,int R){
    int i=0, count=0, window=0;
    for(int j=0;j<n;j++){
        if(arr[j]<=R&& arr[j]>=L)window=j-i+1;
        else if(arr[j]>R)i=j+1;
        count+=window;
    }
    return count;
}