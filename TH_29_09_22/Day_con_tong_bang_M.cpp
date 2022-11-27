#include <iostream>
using namespace std;
const int MAX = 100;
int a[MAX], n, m,dem;
void print(){
	dem++;
}

void gen(int tong,int stt) {
	if (tong > m) return;
	if (tong == m) {
		print();
		return;
	}
	for (int i = stt ; i <n; i++) {
		gen(tong+a[i],i+1);
	}
}

int main() {
	cout << "Nhap m = "; cin >> m;
	cout << "Nhap n = "; cin >> n;
	
	for(int i=0;i<n;i++) {
		cout<<"a["<<i<<"] = "; cin>>a[i];
	}
	
	gen(0,0);
	
	cout <<"Co tat ca "<< dem <<" cach phan tich.";
}


