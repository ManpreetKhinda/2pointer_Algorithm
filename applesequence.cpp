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

/*There is a string of size n containing only 'A' and 'O'.
'A' stands for Apple, and 'O' stands for Orange.
We have m number of spells, each spell allows us to 
convert an orange into an apple.

Find the longest subarray of apples you can make, 
given a string and the value of m.*/
int longestseq(int n, int m, string s){
    int j=0,maxlen=0,oranges=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='O')oranges++;
        while(j<n && oranges> m){
            if(s[j]=='O'){
                oranges--;
            }
            j++;
        }
        maxlen=max(maxlen,i-j+1);
    }
    return maxlen;
}