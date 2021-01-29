#include<bits/stdc++.h>
#include<iostream>
using namespace std;
stack<int> g;
void stack_operation(stack<int> d){
	if(!d.empty()){
	g.push(d.top());
	d.pop();
	stack_operation(d);

	}
}
int main(){
stack<int> s;
s.push(10);
s.push(20);
s.push(30);
s.push(40);
int m=s.size();


stack_operation(s);

for(int i=0;i<m;i++){
	cout<<s.top()<<"deleted"<<endl;
	s.pop();
}
s=g;
for(int j=0;j<m;j++){
	cout<<s.top()<<endl;
	s.pop();

}
return 0;
}
