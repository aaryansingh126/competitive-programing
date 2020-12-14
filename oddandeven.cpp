#include <iostream>
using namespace std;
#define ll long long


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	   ll a,b;
	   cin>>a>>b;
	   ll even1,odd1,even2,odd2;
	   ll no_of_pairs=0;
	   if(b&1)
	   {
	       even1=b/2;
	       odd1=even1+1;
	       if(a&1)
	       {
	           even2=a/2;
	           odd2=even2+1;
	       }
	       else
	       {even2=a/2;
	           odd2=even2;
	       }
	       no_of_pairs=(even2*even1)+(odd2*odd1);
	       cout<<no_of_pairs<<endl;
	       
	       } else{
	           
	           even1=b/2;
	           odd1=even1;
	           if(a&1)
	       {
	       even2=a/2;
	       odd2=even2 + 1;
	       
	       }
	       else{
	           even2=a/2;
	           odd2=even2;
	           
	   }
	    no_of_pairs=(even2*even1)+(odd2*odd1);
	     cout<<no_of_pairs<<endl;
	}}
	return 0;
}