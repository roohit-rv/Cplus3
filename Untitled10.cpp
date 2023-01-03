#include<iostream>
using namespace std;
int main()
{
	int x=10;
	int *ptr1=&x;
	int **ptr2=&ptr1;
	cout<<&x<<" "<<ptr1<<" "<<&ptr1<<" "<<ptr2<<endl;
	int ***ptr3=&ptr2;
	cout<<&ptr2<<"  "<<ptr3<<endl;
	int ****ptr4=&ptr3;
	cout<<&ptr3<<"  "<<ptr4<<endl;
	
	return 0;
}
