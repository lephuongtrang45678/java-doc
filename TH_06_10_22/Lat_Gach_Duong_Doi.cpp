#include <iostream>
#include <vector>
using namespace std;
int n;
const int MAX = 1000;
int a[MAX];
long long lat_gach(int n) {
	if(n < 2){
		return a[n] = n;
	}
	if(a[n] == -1){
		a[n] = lat_gach(n-1) + 2*lat_gach(n-2);
	}
	return a[n];
}
void input(){
	cout<<"N = ";
	cin>>n;
//	for(int i = 0; i <= n; i++){
//		a[i] = -1;
//	}
}
void output(){
	cout<<"So phuong an = "<<lat_gach(n);
}
int main() {
	input();
	a[0] = 1; a[1] = 1;	
	for(int i = 2; i <= n; i++){
		a[i] = a[i-1] + 2*a[i-2];
	}
	cout<<"So phuong an = "<<a[n];
//	output();	
}

