//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
bool isprime(int n){
    if(n==1)return false;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)return false;
    }
    return true;
}
    Node *primeList(Node *head){
        int x=1;
        Node *temp=head;
        Node* curr=head;
     
        while(curr!=NULL){
            
            int x=curr->val;
            int sp=x;
            int lp=x;
            if(x==1){curr->val=2;
            curr=curr->next;
            continue;
            }
            if(x==2 or x==3){
                curr=curr->next;
                continue;
            }
        while(!isprime(sp)){
            sp--;
        }
        while(!isprime(lp)){
            lp++;
        }
    if(x-sp<=lp-x)
        curr->val=sp;
        else curr->val=lp;
    
    curr=curr->next;
        }
        return head;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends