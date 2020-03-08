#include <iostream>
using namespace std;

int main(){
	int n;
	int a[n];
	int sum;
	cout<<"jumlah bilangan ";
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	for (int i=1;i<=n;i++){
		sum=sum+a[i];
	}cout<<"hasil penjumlahan "<<sum;
	
}

