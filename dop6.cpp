#include<iostream>
#include<fstream>
using namespace std;


int main()
{
	string line,a;
	//cout<<"enter the text to insert in file";
	
	ofstream myfile("ex.txt");
	//cin>>a;
	if (myfile.is_open())
	{
		//myfile<<a;
		myfile<<"this is a line\n";
		myfile<<"this is another line";
		myfile.close();
	}
	else
	cout<<"unable to open file";
	
	ifstream myfile1("ex.txt");
	if(myfile1.is_open())
	{
		while(getline(myfile1,line))
		{
			cout<<line<<"\n";
		}
		myfile1.close();	
	}

	return 0;
}
