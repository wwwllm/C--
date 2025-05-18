#include<iostream>
#include"string" 
using namespace std;
void dw(long long n){
	if(n>=0&&n<1200)cout<<"Newbie ";
		else if(n<1400)cout<<"Pupi ";
		else if(n<1600)cout<<"Specialist ";
		else if(n<1900)cout<<"Expert ";
		else if(n<2100)cout<<"Candidate Master ";
		else if(n<2300)cout<<"Master ";
		else if(n<2400)cout<<"International Master ";
		else if(n<2600)cout<<"Grandmaste ";
		else if(n<3000)cout<<"International Grandmaster ";
		else if(n<4000)cout<<"Legendary Grandmaster ";
		else cout<<"Touris ";
}
int main(){
	int n;
	cin>>n;
	long long *p;
	p=new long long[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
		
	}
	for(int i=0;i<n;i++){
		dw(p[i]);
		cout<<(p[i]>=1700?"Yes\n":"No\n");
	}
	delete[] p;
	return 0;
} 
