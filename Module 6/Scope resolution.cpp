#include<iostream>
using namespace std;
int c=90;
int main()
{
	int a=10;
	int b=30;
	int c=a+b;
	cout<<"Local variable c is:"<<c<<endl;
	cout<<"Gloabl variable C is:"<<::c;
}

