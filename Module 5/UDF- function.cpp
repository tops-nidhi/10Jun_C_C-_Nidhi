#include<iostream>
using namespace std;
//int id;
//string nm;
//int getdata()
//{
//    cout<<"Enter your id:";
//    cin>>id;
//    cout<<"Emter your name:";
//    cin>>nm;
//}
int showdata(int id, string nm)
{
    cout<<"\nYour id is:"<<id;
    cout<<"\nYour name is:"<<nm;
}
int main()
{
//    getdata();
	int id;
	string nm;
	cout<<"Enter your id:";
	cin>>id;
	cout<<"Enter your name:";
	cin>>nm;
    showdata(id,nm);
}
