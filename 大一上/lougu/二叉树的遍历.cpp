//�������ı��� 
#include<bits/stdc++.h>
using namespace std;

const int MAXN=1050
struct Node{
	int left,right;
}t[MAXN];
int n;//nΪ�ڵ��� 
void bfs(int root) {//��α��� 
	queue<int>Q;
	Q.push(root);
	while(!Q.empty()){
		int u=Q.front();
		Q.pop;
		cout<<u<<' ';
		if(t[u].left)Q.push(t[u].left);
		if(t[u].right)Q.push(t[u].right);
	}
}
void dfsq(int root){//ǰ����� 
	cout<<root<<' ';
	if(t[root].left)dfs(t[root].left) ;
	if(t[root].right)dfs(t[root].right) ;
}
void dfsz(int root){//������� 
	if(t[root].left)dfs(t[root].left) ;
	cout<<root<<' ';
	if(t[root].right)dfs(t[root].right) ;
}
void dfsh(int root){//�������� 
	if(t[root].left)dfs(t[root].left) ;
	if(t[root].right)dfs(t[root].right) ;
	cout<<root<<' ';
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i].left>>t[i].right;
	}
	
	return 0;
}
