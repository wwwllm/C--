#include<iostream>
using namespace std;

int main(){//�Ż��� 
	int n,m,sum=0,msum=0;
	cin>>n>>m;
	int *p=new int[n];
	for(int i=0;i<n;i++){
		cin>>p[i];
		if(i<m){
			sum+=p[i];
			msum+=p[i];
		}
		else{
			sum=sum+p[i]-p[i-m];
			msum=sum<msum?sum:msum;
			
		}
		
	}
	cout<<msum; 
	return 0;
} 

/*�Ż�ǰ 
int main(){
	int n,m,msum=300000,sum=0;
	cin>>n>>m;
	int *p=new int[n];
	for(int i=0;i<n;i++)cin>>p[i];
	for(int i=0;i<n-m+1;i++){
		sum=0;
		
		for(int j=0;j<m;j++){
			sum+=p[i+j];
		}
		if(sum<msum){
			msum=sum;
		}
		
	}
	cout<<msum;
	delete[] p;
	return 0;
}�Ż�������ǰm����ֵ��Ϊsum����m+1...n��ɨ�裬ÿ�μ�ȥ���������ֵ�������½����������ֵ���ٸ��´𰸾Ϳ����� */

