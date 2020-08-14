#include <iostream>
using namespace std;

int main() {
	int t,n,a,b,z=1;
	char *p;
	cin>>t;
	while(t){
	    cin>>n;
	    p=new char[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    a=0,b=0;
	    for(int i=0;i<n;i++){
	        if(p[i]=='A'){
	            a++;
	        }
	        else
	            b++;
	    }
	    if((a-b)==1||(b-a)==1){
	        cout<<"Case #"<<z++<<": Y"<<endl;
	    }
	    else
	    cout<<"Case #"<<z++<<": N"<<endl;
	    
	    t--;
	}
	return 0;
}
