#include<iostream>
using namespace std;
int size = 10;
int a[10]={0};

int hash(int n){
	const int p=7;
	int l=n%p;
	return l;
}

int main(){
	int n, k, l, i;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nEnter key ";
		cin>>k;
		
		l=hash(k);
		a[l]=k;
	}
	
	for(i=0;i<7;i++){
		cout<<a[i]<<endl;
	}
}


