#include<iostream>
#include<fstream>
using namespace std;
int count(string n,char ch)
{
fstream file;
file.open(n.c_str(),ios::in);
if(!file)
{
cout<<"Error reading file";
}
int counter=-1;
char data [80];
cout<<"contents of files are:";
while(file)
{
file.getline(data,80);
cout<<data<<endl;
if(data[0]!=ch)
counter++;
}
return counter;
}
int main()
{
string name;
cout<<"Enter the file name of file to read";
cin>>name;
char ch;
cout<<"Enter character to check";
cin>>ch;
int c=count(name,ch);
cout<<"Number of lines not starting with"<<ch<<"are"<<c<<endl;
return 0;
}

