#include<bits/stdc++.h>

#include <iostream>
#define pb push_back
#define sort_incr(v) sort(v.begin(),v.end());
#define sort_decr(v) {sort(v.begin(),v.end()); reverse(v.begin(),v.end());}
#define take_input(v,n) for(ll i=0,temp;i<n;i++){cin>>temp;v.pb(temp);}
#define fastio {ios_base::sync_with_stdio(false);    cin.tie(NULL);}
#define ALL(v) v.begin(),v.end()

typedef long long ll;
using namespace std; 



////*********           REMOVE DUPLICATES FROM VECTOR       **********///////


vector<int>  remove_duplicate_elements(vector<int> v)
{
    vector<int>::iterator ip;
    ip = unique(v.begin(), v.end()); 
    v.resize(std::distance(v.begin(), ip)); 
    return v;
}


//// **************                CONVERT STRING TO UNIQUE CHARACTERS              **************////                  
string make_unique_string(string s)
{
    string s1="";
    for(int i=0;i<s.length();i++)
    {
        bool flag=true;
        for(int j=0;j<s1.length();j++)
        {
            if(s1[j]==s[i])
            {flag=false;break;}
        }
        
        if(flag)
        s1=s1+s[i];
        
    }
    return s1;
}

//////// Three Element Vector 
struct vec_thre
{
    int first ,second,third;
};


/////// Comparing on sorting a vector


bool comp(vec_thre a , vec_thre b)
{
    if (a.first != b.first ) 
        return a.first < b.first; 
    if (a.second != b.second) 
            return a.second < b.second; 
}

/////////Sorting vector on the basis of second Element of vector 

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 


// Driver function to sort the vector elements by  first element of pair in descending order, 
//if first is same than second is consdidered 
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
    
        if(a.first!=b.first)
       return (a.first > b.first);
       
       return (a.second>b.second);

} 


int main() 
{
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int cnt=0;
            if(i>0 && a[i-1][j]=='o')
            cnt++;
            if(i<n-1 && a[i+1][j]=='o')
            cnt++;
            if(j>0 && a[i][j-1]=='o')
            cnt++;
            if(j<n-1 && a[i][j+1]=='o')
            cnt++;
            
            
            if((cnt%2))
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";
    
    return 0; 
} 






















