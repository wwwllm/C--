#include<bits/stdc++.h>
using namespace std;


/*void f(int n,int k){//kΪ������
	if(n==0){
		cout<<"0";
		return ;
	}
	if(n==2){
		cout<<"2";
		return ;
	}
	if(n==1){
		cout<<"2(0)";
		return ;
	}	
	if(n==3){
		cout<<"2+2(0)";
		return ;
	}
	if(n==(1<<k)){
		cout<<"2(";
	
		int r=k,i=0;
		while(r>0){
			r=r>>1;
			i++;
		}
		f(k,i-1);
		cout<<")";
		return ;
	}
	cout<<"2(";
	int r=k,i=0;
	while(r>0){
		r=r>>1;
		i++;
	}
	f(k,i-1);
	cout<<")+";
	n=n-(1<<k);
	int z=n,j=0;
	while(z>0){
		z=z>>1;
		j++;
	}
	f(n,j-1);
	
}*/
void f(int x)
{
    for(int i=14;i>=0;i--) //��������������2��14��
    {
        if(pow(2,i)<=x){
        //pow��n��m����cmath���У�����n^m��ö�ٳ���һ���ݴη�
            if(i==1) cout<<"2"; //2��1������������ֽ�����2^1���Ϊ2����������
            else if(i==0) cout<<"2(0)"; //2��0��Ҳ����������ֽ��ˣ���������
            else{ //��i>1������ֽ�ָ��i
                cout<<"2(";
            fff(i);
            cout<<")";
            }
            x-=pow(2,i); //����ѭ���ֽ����µ�
            if(x!=0) cout<<"+";
            //�ӺŴ������򵥷���������x��û�ֽ��꣬����滹����������һ��+��
        }
    }
}
int main(){
	int n;
	cin>>n;
	int r=n,k=0;
	while(r>0){
		r=r>>1;
		k++;
	}
	f(n,k-1);
	return 0;
}
