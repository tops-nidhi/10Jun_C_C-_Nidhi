#include<iostream>
using namespace std;
class Encapsul
{
 
	public:
		int add(int a, int b)
		{
			x=a;
			y=b;
			return x+y;
		}
};
int main()
{
	int a,b;
	Encapsul en;
	cout<<"Enter any 2 no:";
	cin>>a>>b;
	cout<<en.add(a,b);
}
