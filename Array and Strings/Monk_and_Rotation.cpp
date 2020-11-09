#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
	int t,n,k;
	int q;
	cin>>t;
	cout<<'\n';
    for (int p=0;p<t;p++){
	
	cin>>n;
	cin>>k;
	cout<<'\n';
	int a[n];
	int b[n];
	for(int i=0;i<n;i++){
		cin>>q;
		a[i]=q;
	}
	cout<<'\n';
	for(int j=0;j<n;j++){
		int d=j+k;
		if(d<n){
			b[d]=a[j];
		}else{
			int e=(n-1)-j;
			int y=k-e;
			int m= y-1;
			if(m>=n){
				int q=m%n;
				b[q]=a[j];
			}else{
			b[m]=a[j];}
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	}
}