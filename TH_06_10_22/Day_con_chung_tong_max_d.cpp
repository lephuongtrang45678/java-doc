#include<iostream>
using namespace std;
const int MAX = 1000;
int m, n, a[MAX], b[MAX];
int s[MAX][MAX];

long long genMax(int m, int n){
	if(m == 0 || n == 0){
		return 0;
	}
	if(s[m][n] == -1){
		if(a[m] == b[n]){
			s[m][n] = genMax(m-1, n-1) + a[m];		//neu 2 day bang nhau, tong += phan tu dau cua day va giam day di 1
		}else{
			s[m][n] = max(genMax(m-1,n), genMax(m,n-1));
		}
	}
	return s[m][n];
}

void input(){
	cout<<"Nhap m = "; cin>>m;
	for(int i = 1; i <= m; i++){
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	cout<<"Nhap n = "; cin>>n;
	for(int i = 1; i <= n; i++){
		cout<<"b["<<i<<"] = "; cin>>b[i];
	}
	for(int i = 0; i < MAX; i++){
		for(int j = 0; j < MAX; j++){
			s[i][j] = -1;
		}
	}
}

void output(){
	cout<<"Day con co tong lon nhat = "<<genMax(m, n);
}
int main(){
	input();
	output();
	return 0;
}
