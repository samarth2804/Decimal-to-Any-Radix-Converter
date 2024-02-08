#include<bits/stdc++.h>

using namespace std;

string convertFromDecimal(int n,int r){
    string ans="";
    
    while(n<0 || n>abs(r)){
       
        int rem=n%(r);
        rem= (rem+abs(r))%r;
        ans+=to_string(rem);
        
       //cout<<rem<<"  "<<n<<endl;
        if(n<0 && rem!=0){
        	n= n/r;	
        	n++; 
        }
        else{
        	n= n/r;
        }
    }
    
    ans+=to_string(n);
    reverse(ans.begin(),ans.end());
    
    return ans;
}

int32_t main(){
	int n=15;
	int r=-2;
	cout<<convertFromDecimal(n,r);
    return 0;
}
