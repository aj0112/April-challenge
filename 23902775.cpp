

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int ind(char s[],char k,int n)
{
    for(int i=0;i<n;i++)
    {
        if(s[i]==k)
        return i;
    }
    return -1;
}
int in(char s[],char k,int n,int l)
{
    for(int i=l;i<n;i++)
    {
        if(s[i]==k)
        return i;
    }
    return -1;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    char s[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    char k;
	    cin>>k;
	    int l=ind(s,k,n);int q;
	    int a[n];long long int sum=0;
	    for(int j=0;j<n;j++)
	    {
	    	if(j<=l)
	       	{
       		 a[j]=n-l;
	        sum+=a[j];}
	        if(j>l){
	        	q=in(s,k,n,j);
	        	//cout<<q<<"@"<<endl;
	      	  if(q>0)
	       	 {
	       	 	
	           	 a[j]=n-q;
	           	 //cout<<a[j]<<"&"<<endl;
	          	  sum+=a[j]; 
	          	  
	       	 }
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}