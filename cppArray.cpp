#include<iostream>
using namespace std;
class cppArray
 {	public:
		int n,i;
		int a[50];
		int b[50];
		int read();
		int print();
		int range();
		int assign();
		int size();
		
 };
int cppArray::read()
 {
	cout<<"enter limit of array";
	cin>>n;
	cout<<"\nenter elements of array\n";
	for(i=0;i<n;i++)
	 {
		cout<<"a["<<i<<"]=";
                cin>>a[i];
	 }
 }
int cppArray::print()
 {
	cout<<"elements of the array are\n ";
	for(i=0;i<n;i++)
	 {      
		cout<<"\n"<<a[i];
	 }
 }
int cppArray::range()
 {
	cout<<"\nthe range of array is "<<a[0]<<" to  "<<a[n-1];
 }
int cppArray::assign()
 {	
	cout<<"\nThe new assigned array is:\n";
	for(i=0;i<n;i++)
	 {
	
		b[i]=a[i];
		cout<<"\nb["<<i<<"]="<<b[i];
	 }
 }
int cppArray::size()
 {
	cout<<"\n The size of Array is "<<n;
}
	
int main()
 {
	cppArray obj;
	obj.read();
	obj.print();
	obj.range();
	obj.assign();
	obj.size();
	return 0;
 }

