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
struct petrolpump{
    int petrol; int distance;
};
int tour(petrolpump p[], int n){
    int prev=0,curr=0,start=0;
    for(int i=0;i<n;i++){
        curr+=p[i].petrol-p[i].distance;
        if(curr<0){
            prev+=curr;
            start=i+1;
            curr=0;
        }
    }
    return prev+curr>0? start:-1;
}