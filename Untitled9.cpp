#include<iostream>
using namespace std;
int main()
{
	int a[3][3];
	cout<<"enter the elements of the matrix\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"the given matrix is\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
				for(int k=i;k<=i;k++)
				{
					for(int l=0;l<3;l++)
					{
						a[k][l]=0;
					}
					
				}
			
			
				for(int m=0;m<3;m++)
				{
					for(int n=0;n<3;n++)
					{
						if(n==j)
						{
							a[m][n]=0;
					 
					     }
				}
				
				
			}
		}
		
	}
}
	cout<<"after changing required row and columns to zero the matrix is\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
	
}
