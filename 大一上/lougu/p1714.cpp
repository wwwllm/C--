#include<bits/stdc++.h>
using namespace std;

//ǰ׺�ͣ��������� 
//���е����� 
//���г��Ȳ�����m
//��=��β-���� 
const int maxn=5e5+50;
int n,m,ans=0;
int dq[maxn],l=1,r=1,h[maxn];
int main(){
	cin>>n>>m;
	h[0]=0;
	for(int i=1;i<=n;i++){
		int p;
		cin>>p;
		h[i]=h[i-1]+p;
	}
	dq[r++]=0;
	for(int i=1;i<=n;i++){
		while(l!=r&&i-dq[l]>m)l++;
		ans=max(ans,h[i]-h[dq[l]]);
		while(l!=r&&h[dq[r-1]]>h[i]){
			r--;
		} 
		dq[r++]=i;
	}
	cout<<ans<<endl;
	return 0;
}
