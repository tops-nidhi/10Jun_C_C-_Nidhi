#include<iostream>
using namespace std;
int main()
{
    int i,j,k,count=5,no;
    char ch='A';
    string str;
    cout<<"Enter Any petaren to peint pyramid:";
    cin>>str;
    
    for ( i = 1; i <= 5; i++)
    {
        /* code */
        
        for ( k = 0; k < count; k++)
        {
            /* code */
            cout<<" ";
        }
        count--;
        for (j = 1; j <= i; j++)
        {
            /* code */
            no=(int)ch;
            cout<<no<<" ";
            ch++; 
        }
        cout<<endl;
    }
    
}
