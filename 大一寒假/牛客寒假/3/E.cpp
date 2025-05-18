#include<bits/stdc++.h>
#define int long long
using namespace std;

struct dian{
	int x,v;
};
const int maxn=1e5+50;
dian p[maxn];
int s[maxn]={0},ans[maxn],top=0,m=0;
bool cmp(dian a,dian b){
	return a.x<b.x;
}
void solve(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>p[i].x>>p[i].v;
	}
	sort(p+1,p+1+n,cmp);
	int i=n;
	while(i){
		if(p[i].v==-1){
			s[++top]=p[i].x;
		}
		else{ 
			
		}
		i--;
	}
	sort(ans+1,ans+1+m);
	double time=0.0;
	if(m<k)cout<<"No"<<endl;
	else{
		cout<<"Yes"<<endl;
		time=ans[k];
		cout<<fixed<<setprecision(6)<<time/2<<endl;
	}
}
signed main(){
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t=1;
	//cin>>t;
	while (t--) solve();
	return 0;
}
