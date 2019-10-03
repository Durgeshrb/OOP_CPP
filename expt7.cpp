#include<iostream>
using namespace std;

class user
{	public :
	int age,income;
	string city;
	char fourw;

	
	void get_age();
	void get_income();
	void get_city();
	void get_fourw();
};

void user::get_age()
{	
	try
	{
		cout<<"enter age: ";
		cin>>age;
		if (age > 17 && age < 56)
		{
			cout<<"\nage is"<<age;
		}
		else
		{
			throw age;			
		}
	}

	catch (int i)
	{
		cout<<"\nexception caught: age should be between 18-55\n";
	}
}

void user::get_income()
{	
	try
	{
		cout<<"enter income: ";
		cin>>income;
		if (income > 50000 && income < 100000)
		{
			cout<<"\nincome is"<<income;
		}
		else
		{
			throw income;			
		}
	}

	catch (int j)
	{
		cout<<"\nexception caught: income should be between 50,000-100000\n";
	}
}

void user::get_city()
{	
	try
	{
		cout<<"city: ";
		cin>>city;
		if (city=="pune" || city=="mumbai" || city=="bangluru" || city=="chennai")
		{
			cout<<"\ncity is "<<city;
		}
		else
		{
			throw city;	
		}
	}

	catch (string k)
	{
		cout<<"\nexception caught: city is not mathing\n";
	}
}

void user::get_fourw()
{	
	try
	{
		cout<<"\nif u have fourwheeler type y else type n: ";
		cin>>fourw;
		if (fourw=='y' || fourw=='Y')
		{
			cout<<"\nOK\n"<<age;
		}
		else
		{
			throw fourw;			
		}
	}

	catch (char l)
	{
		cout<<"\nexception caught: Do not have a four wheeler\n";
	}
}

int main()
{
	user a;
	a.get_age();
	a.get_income();
	a.get_city();
	a.get_fourw();
	return 0;
}
