#include<stdio.h>
#include<time.h>
#include<iostream>
#include<cmath>

using namespace std;
//Fibonacci
long long fi_bigger_k(long long k){
	long long F1 = 0, F2 = 1, next = 1;
	if(k<0){
		return F1;
	}
	while(true){
		F1 = F2;
		F2 = next;
		next = F1+F2;
		if(next > k) return next;
	}
}
int main(){
//	-2^(31-1)->2^(31-1) ~2ty
	long long k;
	cin>>k;
//	clock_t begin = clock();
//	int fi_bigger_k_min = fi_bigger_k(k);
	cout<<fi_bigger_k(k);
	
//	clock_t end = clock();
//	printf("\nThuat toan chay trong: %f s", (double)(end - begin)/CLOCKS_PER_SEC);
	return 0;
}
