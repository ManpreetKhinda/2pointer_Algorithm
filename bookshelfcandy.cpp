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
int maxcandy(int height[], int n){
    int low=0, high=n-1;
    int candy=0;
    while(low<high){
        candy=max(candy, min(height[low],height[high])*(high-low-1));
        if(height[low]<height[high])low++;
        else high--;
    }
    return candy;
}