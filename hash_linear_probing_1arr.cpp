#include<iostream>
using namespace std;
int size = 10;
int a[10]={0};


int hash(int k, int n){
	const int p=7;
	int l=k%p;
	while(a[l]!=0){
		l++;
		if(l==n){ 
			l=0;
		}
	}
	return l;
}

int main(){
	int n, k, l, i;
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\nEnter key ";
		cin>>k;
		l=hash(k,n);
		a[l]=k;
	}
	
	for(i=0;i<n ;i++){
		cout<<a[i]<<endl;
	}
}


