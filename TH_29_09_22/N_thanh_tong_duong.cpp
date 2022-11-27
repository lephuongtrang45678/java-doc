#include <iostream>
using namespace std;
const int MAX = 100;
int a[MAX], b[MAX], n, m, dem = 0;

void print(int m) {
	cout <<n<<" = ";
	for (int i = 1; i <= dem; i++){
		cout << b[i]<<"+";	
	}
	cout<<a[m];
		cout<<endl;
}

void gen(int k) {
	if(k = n){
		print(k);
	}
	dem++;
}
// Nhap so nguyen duong N
//In ra man hinh tat ca cac phan tich so N thanh tong cua cac so nguyen duong.
void input(){
	cout<<"Nhap n = ";cin>>n;	
}
int main() {
	input();
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	for (int i = n; i > 0; i--) {
		a[i] = i;
	}
	gen(n);

}
