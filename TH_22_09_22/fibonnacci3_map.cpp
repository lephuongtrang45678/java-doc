#include<iostream>
#include <map>
using namespace std;
map<int, long long> f_map;
long long n;
long long fibo3_test(long long n){
	if(n < 3) {
		f_map[n] = n;
		return n;
	}
	//	con tro den vi tri tiep theo
	map<int, long long>::iterator it;
	// tìm dem vi tri i trong map
	it = f_map.find(n);
	
	if(f_map.find(n) != f_map.end()) return f_map.find(n)->second; //Tra ve gia tri cua i
	int k = n/3;
	long long val = fibo3_test(2 * k);
	if(n % 3 > 0) val += fibo3_test(2 * k + 1);
	if(n % 3 > 1) val += fibo3_test(2 * k + 2);
	f_map[n] = val;
	return val;
}

void input(){
		cout<<"Nhap n = ";cin>>n;
		while(n<0 || n >= 2000000000){
		cout<<"Nhap n = ";cin>>n;	
	}
}

void output(){
	cout<<"f("<<n<<") = "<< f_map[n];
}

int main(){
	input();
	fibo3_test(n);
	output();
	return 0;
}
