#include<stdio.h>
#include<time.h>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, k = 0, a[9999];
	cin>>n;
	for(int i = 1; i<=n; i++){
		cin>>a[i];
	}
	//	Hàm xap xep
	sort(a+1, a+n+1);
	//	Neu k <= a[i] thì tang trong gach
	for(int i = 1; i<=n; i++){
		if(k<=a[i]) k++;
	}
	cout<<k;
//	clock_t begin = clock();
	
//	clock_t end = clock();
//	printf("\nThuat toan chay trong: %f s", (double)(end - begin)/CLOCKS_PER_SEC);
	return 0;
}
