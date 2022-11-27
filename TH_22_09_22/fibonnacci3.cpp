#include<stdio.h>
#include<time.h>
#include<iostream>
#include <map>
using namespace std;
long long f[60000000];
void fibo3_test(long long n){
	for(int i = 0; i<=n; i++) {		
		if(i<3)	f[i] = i;
		else {
			if(i%3 == 0)	f[i] = f[2*i/3];
			if(i%3 == 1)	f[i] = f[2*(i-1)/3] + f[2*(i-1)/3 + 1];
			if(i%3 == 3)	f[i] = f[2*(i-2)/3] + f[2*(i-2)/3 + 1] + f[2*(i-2)/3 + 2];
		}
//		cout<<"f("<<i<<") = "<< f[i]<<endl;
	}
}
int main(){
	long long n;
	cout<<"Nhap n = ";
//	while(n<0 || n >= 2000000000){
		cin>>n;	
//	}
	for(int i = 0; i<=n;i++) {
		f[i] = -1;
	}
//	clock_t begin = clock();
	//---------bai tap ----------//
	fibo3_test(n);
	cout<<"f("<<n<<") = "<< f[n];
//	clock_t end = clock();
//	printf("\n%f s", (double)(end - begin)/CLOCKS_PER_SEC);
	return 0;
}
