//
#include<iostream>
using namespace std;
template<typename T>
T selection(T a[],int n)
{
	int i,j;
	for(j=0;j<n-1;j++)
	{
		int imin=j;
		for(i=j+1;i<n;i++)
		{
			if(a[i]<a[imin])
			{
				imin=i;
			}
		}
			if(imin!=j)
			{
				swap(a[j],a[imin]);
			}
	
	}
}

int main()
{	int i;
	int a[6]={1,2,6,9,4,7};
	float b[6]={1.1,2.5,1.7,8.5,9.5,5.2};
	selection(a,6);

	cout<<"\nsorted integer numbers are:\n";
	for(i=0;i<6;i++)
	{
		cout<<" "<<a[i];
	}
	selection(b,6);
	cout<<"\nsorted float numbers are:\n";
	for(i=0;i<6;i++)
	{
		cout<<" "<<b[i];
	}
	cout<<"\n";
return 0;
}
