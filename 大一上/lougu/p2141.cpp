#include<iostream>
using namespace std;

/*�Ż�ǰ O(n^3)
void px(int *p,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(p[j]>p[j+1]){
				p[j]=p[j]-p[j+1];
				p[j+1]+=p[j];
				p[j]=p[j+1]-p[j];
			}
		}
	}
}
int main()
{
	int n,*p,*q,count=0;
	cin>>n;
	p=new int[n];
	q=new int[n];
	int sum;
	for(int i=0;i<n;i++)cin>>p[i];
	px(p,n);
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			sum=p[i]+p[j];
			if(sum>p[n-1])break;
			else
			{
				for(int k=j;k<n;k++)
				{
					if(p[k]==sum&&q[k]==0)q[k]=1;
				}
			}
		}
	}
	for(int i=0;i<n;i++)count+=q[i];
	cout<<count;
	delete[] p;
	delete[] q;
	return 0;
}
�Ż�������Ͱ 
*/
const int M=20005;//20005�������ֵ��10000+10000=20000��const int�Ǿ�̬���壬������ֵ����M)�޷��޸ġ�
int t[M];//t��Ͱ��t[i]��ʾֵΪi�����ڼ�����������ӳ����˼���
int main(){
	int n,*p,count=0;
	cin>>n;
	p=new int[n];
	for(int i=0;i<n;i++)cin>>p[i];
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			t[p[i]+p[j]-1]++;
		}
	}
	for(int i=0;i<n;i++){
		if(t[p[i]-1]!=0){
			count++;
			t[p[i]-1]=0;
		}
	}
	cout<<count<<endl;
	return 0;
} 
