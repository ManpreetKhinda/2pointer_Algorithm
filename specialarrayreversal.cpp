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
/*is array palindrome ignoring spaces and other characters*/
bool ispalindrome(string s){
    int l=0,h=s.size()-1;
    while(l<h){
        while(!isalnum(s[l]))l++;
        while(!isalnum(s[h]))h--;
        if(tolower(s[l])==tolower(s[h])){
            l++;h--;
        }
        else return false;
        return true;
    }
}
string specialreverse(string s){
    int low=0,high=s.size()-1;
    while(low<high){
        if(!((s[low]>='a' &&s[low]<='z')||(s[low]>='A' &&s[low]<='Z'))){
            low++;continue;
        }
        if(!((s[high]>='a' &&s[high]<='z')||(s[high]>='A' &&s[high]<='B'))){
            high--;
            continue;
        }
        swap(s[low],s[high]);
        low++,high--;
    }
    return s;
}
/* reverse array keeping the spaces intact*/
string reversewithspacesintact(string s){
    int i=0,j=s.size()-1;
    while(i<j){
        if(s[i]==' ')i++;
        else if(s[j]==' ')j--;
        else swap(s[i++],s[j--]);
    }
    return s;
}