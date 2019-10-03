//create a calculator
#include<iostream>
using namespace std;
 class calc
 {	public :
	int a,b,c;
	char op;
	int get()
	{
		cout<<"enter a operand b\n";
		cin>>a>>op>>b;
        }
	int sum()
	{
		c=a+b;
		return c;
	}
	int sub()
	{
		c=a-b;
		return c;
	}
	int mul()
	{
		c=a*b;
	}
	int div()
	{
		c=a/b;
		return c;
	}
	int cal()
	{
		switch(op)
		{	
			case '+' : sum();
			break;
			case '-' : sub();
			break;
			case '*' : mul();
			break;
			case '/' : if (b==0)
					{cout<<"error";}
				   else 
					{ div();}
			break;
		}
		cout<<"\nresult is ="<<c;
	}
 };
int main()
{
	calc a1;
        char ch;
        Z:
        a1.get();
	a1.cal();
	cout<<"\npress y to continue\n";
	cin>>ch;
	if (ch=='y'||ch=='Y')
		{
		goto Z;
                }		
	 	return 0;
}
	
