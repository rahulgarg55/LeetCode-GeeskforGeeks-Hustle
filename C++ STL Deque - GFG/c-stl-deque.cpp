// { Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
void print(deque <int> &A);
void add_in_back(deque <int> &A,int x);
void remove_from_back(deque <int> &A);
void remove_from_front(deque <int> &A);
void sort(deque <int> &A);
void reverse(deque <int> &A);
int size(deque <int> &A);
void add_in_front(deque <int> &A,int x);
int element_at_front(deque <int> &A);
int element_at_back(deque <int> &A);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        deque<int> A;
        while(q--)
        {
            int c;
            cin>>c;
            switch(c)
            {
                case 1:{
                    int x;
                    cin>>x;
                    add_in_front(A,x);
                    print(A);
                    break;
                    }
                case 2: {
                    int x;
                    cin>>x;
                    add_in_back(A,x);
                    print(A);
                    break;
                    }
                case 3:{
                    if(A.empty())
                            cout<<"-1"<<endl;
                    else
                    {remove_from_front(A);
                    print(A);}
                    break;
                }
                case 4: {
                    if(A.empty())
                            cout<<"-1"<<endl;
                    else
                     {remove_from_back(A);
                     print(A);}
                     break;
                }
                case 5: {
                    if(A.empty())
                            cout<<"-1"<<endl;
                       else
                     {sort(A);
                     print(A);}
                     break;
                }
                case 6: {
                    if(A.empty())
                            cout<<"-1"<<endl;
                    else
                    {reverse(A);
                    print(A);}
                    break;
                }
                case 7:
                    {
                        if(A.empty())
                            cout<<"-1"<<endl;
                       else
                        print(A);
                        break;
                    }
                case 8:
                    {
                       cout<<size(A)<<endl;
                        break;
                    }
                case 9:
                    {
                        if(A.empty())
                            cout<<"-1"<<endl;
                       else
                       cout<<element_at_front(A)<<endl;
                        break;
                    }
                case 10:
                    {
                        if(A.empty())
                            cout<<"-1"<<endl;
                       else
                        cout<<element_at_back(A)<<endl;
                        break;
                    }
                default: return 0;
            }
        }
    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++
/*You are required to complete below methods*/

/*prints space separated 
elements of the deque A*/
void print(deque<int> &A)
{
	//Your code here
	//if the queue is empty then print -1 with a newline
	//else print the elements from front to back
	if(A.empty())cout<<"-1";
	else
	for(auto it=A.begin();it!=A.end();it++){
	    cout<<*it<<" ";
	}
	cout<<endl;
	
}

/*inserts an element x at 
the front of the deque A*/
void add_in_front(deque<int> &A,int x)
{
	//Your code here
	A.push_front(x);
	
}

/*inserts an element x at 
the back of the deque A */
void add_in_back(deque<int> &A,int x)
{
	//Your code here
	A.push_back(x);
}

/*remove element from 
back of the deque A*/



void remove_from_back(deque <int> &A)
{
   //Your code here
   if(A.empty())cout<<"-1";
   else
   A.pop_back();
}
/*remove element from 
front of the deque A*/
void remove_from_front(deque<int> &A)
{
   //Your code here
   if(A.empty())cout<<"-1";
   else 
   A.pop_front();
}

/*sort the the deque A in ascending order*/
void sort(deque<int> &A)
{
	//Your code here
	sort(A.begin(),A.end());
}

/*reverses the deque A*/
void reverse(deque<int> &A)
{
	//Your code here
	reverse(A.begin(),A.end());
}

/*returns the size of the deque  A */
int size(deque<int> &A)
{
	//Your code here
	return A.size();
    
}

/* returns element at front
of the deque*/
int element_at_front(deque <int> &A)
{
    //Your code here
    return A.front();
}

/*returns element at end
of the deque*/
int element_at_back(deque <int> &A)
{
    //Your code here
    return A.back();

}