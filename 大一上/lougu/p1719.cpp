#include<bits/stdc++.h>
#define int long long
using namespace std;

//f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+a 
//�Ӿ����=f[a][b]-f[c-1][b]-f[a][d-1]+f[c-1][d-1]
//1.ö�������㣺O(n^4)
//2.ö���У�ȡ�������ͣ�O(n^3) 
const int maxn=125;
int n,a,ans=-100000000;
int f[maxn][maxn];
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a;
			f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+a;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int sum=0;
			for(int k=1;k<=n;k++){
				sum+=f[j][k]-f[i-1][k]-f[j][k-1]+f[i-1][k-1];
				ans=max(sum,ans);
				if(sum<0)sum=0;
			} 
		}
	}
	cout<<ans;
	return 0;
} 
 
