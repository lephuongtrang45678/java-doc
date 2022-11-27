#include <iostream>
#include <map>
using namespace std;

map<int, long long> mp;
int n;

long long g_4(int n){
	if(n==1 || n == 3) return n;
	
	map<int, long long>::iterator it;
	it = mp.find(n);
	
	if(mp.find(n) != mp.end()) return mp.find(n)->second;
	if(n%4 == 1){
		int k = n/4;
		
	}
	
	if(n%4 == 0){
		int k = n/4;
		val = g_4(k);
	}
	val = g_4(k);
	if(n % 4 == 1){
		int k = n/4;
		val =  2*g_4(2*k + 1) - g_4(k);
	}
	if(n % 4 == 3) {
		int k = (n-3)/4;
		val = 3*g_4(2*k + 1) - 2* g_4(k);
	}
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
	g_4(n);
	output();
	return 0;	
}

