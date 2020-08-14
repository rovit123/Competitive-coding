#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin>>n;
     char a[3][n];
	for(int i=0;i<3;i++){
	    for(int j=0;j<n;j++){
	        cin>>a[i][j];
	    }
	}
	for(int i=0;i<n;i++){
	    if(a[0][i]=='#'){
	        cout<<'#';
	        
	    }
	    else if(a[0][i]=='*'&&a[0][i+1]=='*'&&a[0][i+2]=='*'){
	        if(a[1][i]=='*'&&a[1][i+1]=='*'&&a[1][i+2]=='*'){
	            cout<<'E';
	            i=i+2;
	        }
	        else if(a[1][i]=='*'&&a[1][i+2]=='*'){
	            cout<<'O';
	            i=i+2;
	        }
	        else if(a[1][i+1]=='*'){
	            cout<<'I';
	            i=i+2;
	        }
	    }
	    else if(a[0][i]=='*'&&a[0][i+2]=='*'&&a[0][i+1]=='.'){
	        cout<<'U';
	        i=i+2;
	    }
	    else if(a[0][i+1]=='*'&&a[0][i]=='.'&&a[0][i+2]=='.'){
	        cout<<'A';
	        i=i+2;
	    }
	}
	return 0;
}
