//����ƥ�䣨�������㷨�� 
//Ѱ�Ҷ���ͼ��������ƥ����ٶ�
//ƥ�����=�����߶α����������ٵ��� 
#include<bits/stdc++.h>
using namespace std;

const int MAXN=520;
int un,vn;//un�洢����������vn�洢Ů�� 
int g[MAXN][MAXN];//����ͼ 
int linker[MAXN];//�洢Ů������ 
bool used[MAXN];//�洢Ů���Ƿ��ж��� 
bool dfs(int u){//��������u������ 
	for(int v=0;v<vn;v++){
		if(g[u][v]&&!used[v]){
			used[v]=true;
			if(linker[v]==-1||dfs(linker[v])){
				linker[v]=u;
				return true;
			}
		}
	}
	return false;
} 
int hungary(){
	int res=0;
	memset(linker,-1,sizeof(linker));
	for(int u=0;u<un;u++){
		memset(used,false,sizeof (used));//���� 
		if(dfs(u)res++;
	}
	return res;
}
int main(){
	int k;
	while(cin>>un==1&&un){
		cin>>vn>>k;
		memset(g,0,sizeof(g));
		int id,u,v;
		while(k--){
			cin>>id>>u>>v;
			if(u!=0&&v!=0){
				g[u][v]=1;
			}
			cout<<hungary();
		}
	}
	return 0;
}
