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
/*
count triplet such that sum of two equals third
*/
int counttriplets(int arr[], int n){
    sort(arr,arr+n);
    int count=0;
    for(int i=n-1;i>=2;i--){
        int l=0, h=i-1;
        while(l<h){
            if(arr[l]+arr[h]==arr[i]){
                count++;
                l++;h--;
            }
            else if(arr[l]+arr[h]>arr[i])h--;
            else l++;
        }
    }
    return count;
}
bool doestripletexist(int arr[], int n,int x){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            int sum=arr[i]+arr[l]+arr[r];
            if(sum==x)return true;
            else if(sum>x)r--;
            else l++;
        }
        return false;
    }
}
/*count triplets such that such that their sum is smaller than x
*/
int counttriplets2(int arr[], int n, int x){
    sort(arr,arr+n);
    int ans=0;
    for(int i=0;i<n-2;i++){
        int l=i+1, r=n-1;
        while(l<r){
            int sum=arr[i]+arr[l]+arr[r];
            if(sum<x){
                ans+=r-l;
            }
            else r--;
            
        }
    }
    return ans;
}