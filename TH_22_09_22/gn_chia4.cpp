#include<stdio.h>
#include<time.h>
#include<iostream>
#include <map>
using namespace std;
long long n;

long long g_4(long long n){	
		if(n == 1 || n == 3)	return n;
		else {
			if(n%2 == 0)	return g_4(n/2);
			if(n%4 == 1){
				return 2*g_4(2*(n-1)/4 + 1) - g_4((n-1)/4);
			}
			if(n%4 == 3){
				int m = (n-3)/4;
				return 3*g_4(2*(n-3)/4 + 1) - 2*g_4((n-3)/4);
			}
		}
}
void input(){
		cout<<"Nhap n = ";cin>> n;
		while(n<0 || n >= 2000000000){
		cout<<"Nhap n = ";cin>>n;	
	}
}

void output(){
	cout<<"g("<<n<<") = "<< g_4(n);
}

int main(){
	input();
	g_4(n);
	output();	
	return 0;
}
