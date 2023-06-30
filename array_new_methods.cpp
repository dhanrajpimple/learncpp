#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int n[10];	
//with the help of setw we can set the with of the element 
for(int i=0; i<10; i++){
	n[i] = i + 100;
}
	cout<<"elemtent" <<setw(13)<<"value"<<endl;
	
	for(int j=0; j<10; j++){
		cout<<setw(7)<<j<<setw(13)<<n[j]<<endl;
	}
	return 0;
	
}
