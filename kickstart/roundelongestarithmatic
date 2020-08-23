#include <iostream>
using namespace std;

int main() {
	int t,n,*a,m,count,z,y=0,j,i;
    cin>>t;
    while(t){
        cin>>n;
        a=new int[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
           count=0,z=0; 
        for(i=1;i<n;i=j){
           
            m=a[i-1]-a[i];
            count=2;
            for(j=i+1;j<n;j++){
                if(m==a[j-1]-a[j]){
                    count++;
                }
                else{
                    break;}
            }
            if(count>z){
                z=count;
            }
        }
        
        cout<<"Case #"<<++y<<": "<<z<<endl;
        
        t--;
    }
	return 0;
}
