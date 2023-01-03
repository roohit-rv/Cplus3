#include<iostream>
using namespace std;
int main()
{
	int *ptr;
	{
		int x=10;
		ptr=&x;
		cout<<ptr<<" "<<*ptr<<endl;
	}
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	return 0;
}
