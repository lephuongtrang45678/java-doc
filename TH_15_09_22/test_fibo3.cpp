#include <iostream>
using namespace std;

long long a[200000000];

void Xuly(long long n){
	for(int i=0; i<=n ; i++){
		if(i<3) a[i] = i;
		else{
			int k = i/3;
			if(i%3 == 0) a[3*k] = a[2*k];
			if(i%3 == 1) a[3*k +1] = a[2*k] + a[2*k+1];
			if(i%3 == 2) a[3*k +2] = a[2*k] + a[2*k+1] + a[2*k+2];
		}
	}
}

int main(){
	long long n;
	cout<<"Nhap n = "; cin>>n;
//	cout<<"f("<<n<<") = "<<f(n);
	for(int i=0; i<=n; i++){
		a[i] = -1;
	}
	Xuly(n);
	cout<<"f("<<n<<") = "<<a[n];
	return 0;	
}
