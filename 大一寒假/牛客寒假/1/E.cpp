#include<bits/stdc++.h>
#define int long long
using namespace std;

//��λ��������һ�����������е�������һ���һ�������ͬ�ģ������λ�����貽����С
//���������� 
const int maxn=2e5+50;
int a[maxn];
int n;
int f(int x,int y){
	int ans=0;
	for(int i=1;i<=n/2;i++){
		ans+=abs(a[i]-x);
	}
	for(int i=n/2+1;i<=n;i++){
		ans+=abs(a[i]-y);
	}
	return ans;
}
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]; 
	sort(a+1,a+1+n);
	int k=n/2,midl,midr;
	if(k&1){
		midl=k+1>>1;
		midr=k+midl;
	}else{
		midl=k>>1;
		midr=k+midl+1;
	}
	int ans=0;
	if(a[midl]==a[midr]) ans=min(f(a[midl]-1,a[midr]),f(a[midl],a[midr]+1));
	else	ans=f(a[midl],a[midr]);
	cout<<ans<<endl;
}
signed main(){
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
