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
/*find the sum of subarray having maximum sum less than or equal to x
*/
int findmaxsubarrsum(int arr[], int n, int x){
    int i=0, sum=0,currsum=0;
    for(int j=0;j<n;j++){
        currsum+=arr[j];
        while(currsum>x){
            currsum-=arr[i];
            i++;

        }
        sum=max(sum,currsum);
    }
    return sum;
}