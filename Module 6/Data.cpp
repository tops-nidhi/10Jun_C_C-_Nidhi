#include<iostream>
using namespace std;
class STData
{
	 public:
    int no;
   private:
    int data()
    {
        cout<<"Enter any no:";
        cin>>no;
        return no;
	}
};
int main()
{
    // int no;
    STData st;
    // STData.no
    // st.no;
//    st.data();
    cout<<st.no;
}
