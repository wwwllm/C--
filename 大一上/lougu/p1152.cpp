#include<bits/stdc++.h>
using namespace std;
//��Ϊ����������Ϊn-1���������������ɵ�����һ������1��n-1��һ������ 
int t[1050]={0},p[1050]={0};
string jianyan(int n){//�ж��Ƿ�1--(n-1)������ 
	for(int i=1;i<n;i++){
		if(p[i]!=1)	return "Not jolly";
	}
	return "Jolly";
}
int main(){//��ľ���ֵ����������Խ��Ӷ����±��� 
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>t[i];
	}
	for(int i=1;i<n;i++){
		if(abs(t[i]-t[i+1])>n||p[abs(t[i]-t[i+1])]==1){
			cout<<"Not jolly";
			return 0;
		}
		p[abs(t[i]-t[i+1])]=1; 
	}
	cout<<jianyan(n);
	return 0;
} 
/*

int main(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>t[i];
	}
	for(int i=1;i<n;i++){
		p[i]=abs(t[i]-t[i+1]);
	}
	sort(p+1,p+n);
	for(int i=1;i<n;i++){
        if(p[i]!=i){
			cout<<"Not jolly\n";
			return 0;
		}//�ж����
    }
    cout<<"Jolly\n";//���δ���������Ϊ��ȷ��
    return 0;
} */
