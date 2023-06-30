#include<iostream>
using namespace std;
int main(){
	int a = 21;
	int c;
	
	c=a;
	cout<<"the 1 output is :"<<c<<endl;
	
	c+=a;
	cout<<"the 2 output is :"<<c<<endl;
	
	c-=a;
	cout<<"the 3 output is :"<<c<<endl;
	
	c*=a;
	cout<<"the 4 output is  :"<<c<<endl;
	
	c/=a;
	cout<<"the 5 out put is :"<<c<<endl;
	
	c=1000;
	c%=a;
	cout<<"the 6 output is "<<c<<endl;
	
	c<<=2;
	cout<<"the 7 output is "<<c<<endl;
	
	c>>=2;
	cout<<"the 8 output is "<<c <<endl;
	
	c&=2;
	cout<<"the 9 output is "<<c<<endl;
	
	c^=2;
	cout<<"the 10 output is "<<c<<endl;
	
	c|=2;
	cout<<"the 11 output is "<<c<<endl;
	
	return 0;
}
