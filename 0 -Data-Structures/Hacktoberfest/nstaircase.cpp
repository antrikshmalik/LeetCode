#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;
int stairs(int n){
	//base case 
	if(n==0){//0th case pe to sirf 1 way se khada ho sakta hai  na
		return 1;
	}
	if(n<0){//zameen ke andar se toh aayega nahi na 
		return 0;
	}
	//recursive case if k==3 return the ways to reach the last four steps.
	else{
		return stairs(n-1)+stairs(n-2)+stairs(n-3);
	}
}
int nstairs(int n,int k){//k is always <= n -> given
	//base case
	if(n==0){//0th case pe to sirf 1 way se khada ho sakta hai  na
		return 1;
	}
	if(n<0){//zameen ke andar se toh aayega nahi na 
		return 0;
	}
	//recursive casep
	int ans=0;
	for(int i=1;i<=k;i++){
		ans += nstairs(n-i,k);
	}
	return ans;
	
}
int main(){
	int n,k; cin>>n>>k;
	cout<<stairs(n)<<endl;
	// sample case should give the value 7 for the input of 5 just kidding
	cout<<nstairs(n,k)<<endl;
	


}
