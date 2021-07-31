//Ali and Helping innocent people


#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	string nummy;
	cin >> nummy;										
	
	
	int len=nummy.length();
	if (isdigit(nummy[2])==true){
		cout<<"invalid"<<endl;
		return 0;
	}
	char b=nummy[2];
	char lett[6]={ 'A','E','I','O','U','Y'};
	for(int m=0;m<6;m++){
		if(b==lett[m]){
			cout<<"invalid"<<endl;
			return 0;
		}
	}
	
	
	for (int i=0;i<len-1;i++){
		
		if(i==1 || i==2 || i==5 || i==6 ){
			continue;
	   	}
		//char g=nummy[i];
		//char h=nummy[i+1];
        int a=(int)nummy[i];
		int b=(int)nummy[i+1];
		if((a+b)%2!=0){
			cout<<"invalid"<<endl;
			return 0;
		}
   
	}
	
	cout<<"valid"<<endl;
	

	return 0;
			
}

