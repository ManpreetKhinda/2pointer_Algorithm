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
struct Node{
    int data;
    struct Node* next;
    struct Node*prev;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
Node* deletemid(Node*head){
    if(!head || !head->next)return NULL;
    Node* slow=head, *fast=head;
    if(!head->next->next){
        head->next=NULL;
        return head;
    }
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    *slow=*(slow->next);
    return head;
}
/*
find the first node of loop in linked list
*/

int firstnode(Node* head){
    if(!head)return -1;
    Node*slow=head,*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)break;
    }
    if(slow!=fast)return -1;
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow->data;
}
/* pair with certain sum in dll*/
vector<pair<int,int>> pairswithgivensum(Node*head,int t){
    vector<pair<int,int>> ans;
    Node*temp=head;
    Node*i=head;
    while(temp->next)temp=temp->next;
    while(i->data < temp->data){
        int sum=i->data+temp->data;
        if(sum>t)temp=temp->prev;
        else if(sum<t)i=i->next;
        else{
            ans.push_back({i->data,temp->data});
            i=i->next;
            temp=temp->prev;
        }

    }
    return ans;
}
void removeloop(Node*head){
    if(head==NULL)return ;
    Node*slow=head, *fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)break;
    }
    if(slow==head && fast==head){
        while(slow->next!=fast)slow=slow->next;
        slow->next=NULL;
        return;
    }
    if(slow==fast){
        slow=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
    }
}
