/*
set<int>ds			:����һ������bs��Ԫ������Ϊint�ļ���
ds.insert(x)		:�ڼ����в���һ��Ԫ�أ�������Ԫ�ش��ڣ���ʲôҲ����
ds.erase(x)			:�ڼ�����ɾ��һ��Ԫ�أ�������Ԫ�ز����ڣ���ʲôҲ����
ds.erasr(it)		:ɾ�������е�ַΪit��Ԫ��
ds.end()			:���ؼ��������Ԫ�ص���һ��Ԫ�صĵ�ַ�������������ֱ��ʹ�ã�
					 ������������������бȽϣ�һȷ��ĳ��Ԫ���Ƿ���ڡ�
ds.find(x)			:��ѯx�ڼ����еĵ�ַ���������������ڣ��򷵻�ds.end()��
ds.lower_bound(x)	:��ѯ��С��x����С�����ڼ����еĵ�ַ���������������ڣ��򷵻�ds.end()��
ds.upper_bound(x)	:��ѯ����x����С�����ڼ����еĵ�ַ���������������ڣ��򷵻�ds.end()��	
ds.empty()			:�������Ϊ���򷵻�1�����򷵻�0 ��
ds.size()			:����Ԫ�ظ�����	
*/
#include<bits/stdc++.h>
using namespace std;

int n,opt,lenth;
set<int>ds;
int main(){
	cin>>n;
	while(n--){
		cin>>opt>>lenth;
		if(opt==1){
			if(ds.find(lenth)!=ds.end())cout<<"Already Exist"<<endl;
			else	ds.insert(lenth);
		}
		else if(ds.empty())	
			cout<<"Empty"<<endl;
		else{
			set<int>::iterator i=ds.lower_bound(lenth),j=i;//iteratorΪ������ 
			if(j!=ds.begin())--j;
			if(i!=ds.end()&&lenth-(*j)>(*i)-lenth)j=i;
			cout<<(*j)<<endl;
			ds.erase(j);
		}
	}
	return 0;
}   
