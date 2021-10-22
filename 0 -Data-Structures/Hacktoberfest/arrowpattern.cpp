#include <iostream>
#include <cmath>
using namespace std;
//arrow
int main(){
	int n;
	cin>>n;
	int half = (n+1)/2;
	for(int i=1;i<=n;i++){
		//left spaces
		for(int j=1;j<=2*(half-i);j++){
			if (i>=half)
			break;
			cout<<"**";}
		//numbers upper
		int k=i;
		for(int j=1;j<=i;j++){
			if (i>half)
			break;
			cout<<k<<" ";
			k--;}
		
		
		
	cout<<endl;	
	}
}
