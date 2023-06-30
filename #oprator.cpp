#include<iostream>
using namespace std;

#define MKSTR(x) #x

int main(){
	cout<< MKSTR(hello c++) <<endl;
	return 0;
}
