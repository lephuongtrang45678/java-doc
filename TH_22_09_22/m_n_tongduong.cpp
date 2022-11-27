#include <iostream>
using namespace std;
const int MAX = 100;
int a[MAX], n, m, dem = 0, dem2 = 0;
void print(int m) {
	cout <<n<<" = ";
	for (int i = 1; i < m; i++){
		cout << a[i]<<"+";	
	}
	cout<<a[m];
//	if(dem2 < dem){
		cout<<endl;	
//	}
}

void gen_soluong(int k) {
	int sum = 0;
	for (int i = 1; i < k; i++) {
		sum += a[i];
	}
	if (k > m) {
		if(sum ==  n){
			dem++;
		}
		return;
	}

	for (int i = 1; i <= n - sum - (m-k); i++) {
		a[k] = i;
		gen_soluong(k+1);
	}		
}

void gen(int k) {
	int sum = 0;
	for (int i = 1; i < k; i++) {
		sum += a[i];
	}
	if (k > m) {
		if(sum ==  n){
			dem2++;
			print(m);	
		}
		return;
	}

	for (int i = 1; i <= n - sum - (m-k); i++) {
		a[k] = i;
		gen(k+1);
	}		
}
// Nhap hai so nguyen duong N va M
//In ra man hinh tat ca cac phan tich so N thanh tong cua M so nguyen duong.
void input(){
	cout<<"Nhap n = ";cin>>n;	
	cout<<"Nhap m = ";cin>>m;
}
int main() {
	input();
//	n=3; m=7;
	a[0] = 0;
//	gen_soluong(1);
	gen(1);
}
