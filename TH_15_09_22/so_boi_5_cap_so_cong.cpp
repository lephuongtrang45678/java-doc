#include<iostream>
#include <algorithm> 
using namespace std;
bool timkiem (int a[], int k, int n){
	for(int i = 0; i< n; i++){
		if(k == a[i])
			return true;
	}
	return false;
}
//Cho d�y A gom N so nguy�n d�i mot kh�c nhau.
// �em xem c� bao nhi�u c�ch lay ra tu A d�ng 5 phan tu de 5 phan tu
//d� tao th�nh mot CSC
int main(){
	int n = 0;
	while(n < 1 || n > 199){
		cin>>n;
	}
	int a[n-1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//	Sap xep lai mang nhap vao
	sort(a,a+n);
	//	Dem so c�ch ra tu A d�ng 5 phan tu de 5 phan tu d� tao th�nh mot CSC
	int count = 0;
	for(int i = 0;i < n-4;i++){
		for(int j = i+1; j < n; j++){
			int dem = 0;
			int d= a[j] - a[i];	
			
			for(int k = i;k < i+5; k++){
//				Kiem tra xem co ton tai so l� so cap so cong cua a[i] khong
				if(timkiem(a, a[i] + (k-i)*d,n)==0){
					dem++;  
					break;
				}
			}
			if(dem==0){
				count++;
			}
		}
	}
	cout<<count;
}
