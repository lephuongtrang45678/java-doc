#include <iostream>
#include <map>
using namespace std;

map<int, long long> mp;
int n;

long long fibo_bac_3(int n){
	if(n < 3) return n;
	
	map<int, long long>::iterator it;
	it = mp.find(n);
	
	if(mp.find(n) != mp.end()) return mp.find(n)->second;
	int k = n/3;
	long long val = fibo_bac_3(2 * k);
	if(n % 3 > 0) val += fibo_bac_3(2 * k + 1);
	if(n % 3 > 1) val += fibo_bac_3(2 * k + 2);
	mp[n] = val;
	return val;
}
void input(){
	cout<<"Nhap n = "; cin>>n;
}

void output(){
	cout<<"f("<<n<<") = "<<mp[n];
}
int main(){
	input();
	fibo_bac_3(n);
	output();
	return 0;	
}
