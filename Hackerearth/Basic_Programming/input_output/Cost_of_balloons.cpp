//Cost of balloons
#include <iostream>

using namespace std;

int main() {
	int testcase;
	cin>>testcase;
    int sumoffirst=0;
	int sumoffsecond=0;
	for (int i=0;i<testcase;i++){
	int participants,green,purple;
	cin>>green;
	cin>>purple;
	cin>>participants;
	for(int j=0; j<participants;j++){
		int a,b;
        cin>>a;
		cin>>b;
		int costofpair1=a*green+b*purple;
		int costofpair2=a*purple+b*green;
		sumoffirst=sumoffirst+costofpair1;
		sumoffsecond=sumoffsecond+costofpair2;
	  }	
    if(sumoffirst>sumoffsecond){
		cout<<sumoffsecond<<endl;
	}else{
		cout<<sumoffirst<<endl;
	}
	sumoffirst=sumoffsecond=0;
	}								
}