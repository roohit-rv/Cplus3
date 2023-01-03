#include<iostream>
using namespace std;
int main()
{
	int x=10;
	float f=3.34;
	void *ptr;
	ptr=&f;
	float *fptr=(float *)ptr;
	ptr=&x;
	int *iptr=(int *)ptr;
	cout<<ptr<<" "<<&f<<endl;
	cout<<*fptr<<endl;
	cout<<*iptr<<endl;
	
	
	return 0;
}
