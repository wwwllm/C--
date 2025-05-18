#include<bits/stdc++.h>
#define int long long
using namespace std;

const int maxn=1000;
int p[maxn]={0},d[maxn],top=0;
bool cmp(int a,int b){
	return a>b;
}
void solve(){
	int n;
	int k;
	cin>>n>>k;
	for(int i=1;i*i<=n;i++){
		if(n%i==0&&i*i!=n){
			int x=n/i;
			p[++top]=i;
			p[++top]=x;
		}else if(n%i==0){
			p[++top]=i;
		}
	}
	sort(p+1,p+1+top);
	for(int i=1;i<top;i++){
		d[i]=p[i+1]-p[i]-1;
	}
	sort(d+1,d+top+1,cmp);
	int t=k,i=1,ans=0;
	while(t!=0&&i<=top){
		if(d[i]>d[i+1]){
			if(t>=i){
				ans+=d[i]*i;
				d[i]--;
				t-=i;
			}else{
				ans+=d[i]*t;
				t=0;
				break;
			}
		}else{
			i++;
		}
	}
	cout<<ans<<endl;
}
signed main(){
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t=1;
	//cin>>t;
	while (t--) solve();
	return 0;
}
