#include <iostream>
#include <vector>
using namespace std;
int m,n;
const int MAX = 1000;
int a[MAX], b[MAX], C[MAX][MAX];
long long tong_max(int m, int n) {
	if(m == 0 || n == 0){
		return 0;
	}
	if(C[m][n] == -1){
		if(a[m] == b[n])
			C[m][n] = tong_max(m-1, n-1) + a[m];
		else
			C[m][n] = max(tong_max(m-1,n), tong_max(m,n-1));
	}
	return C[m][n];
}
void input(){
	cout<<"Nhap m = ";
	cin>>m;
	for(int i = 1; i <= m; i++){
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"Nhap n = ";
	cin>>n;
	for(int i = 1; i <= n; i++){
		cout<<"b["<<i<<"] = ";
		cin>>b[i];
	}
	for(int i = 0; i < MAX; i++){
		for(int j = 0; j < MAX; j++){
			C[i][j] = -1;
		}
	}
}
void output(){
	cout<<"Day con co tong lon nhat = "<<tong_max(m,n);
}
int main() {
	input();
//	tong_max(m,n);
	output();	
}

