#include<iostream>
using namespace std;
class complex
{
float real,imag;
public:
 float x;
float y;
	complex()
{
x=real;
y=imag;
}
	complex operator+(complex);
	complex operator*(complex);	
void display();
friend istream & operator >>(istream &y,complex &p);
friend ostream & operator <<(ostream &q,complex &z);
};
complex complex::operator+(complex c)
{
	complex temp;
	temp.x=x+c.x;
	temp.y=y+c.y;
	return(temp);
}

complex complex::operator*(complex c)
{
	complex temp;
	temp.x=(x*c.x)-(y*c.y);
	temp.y=(x*c.y)+(y*c.x);
	return(temp);
}

void complex::display()
{
cout<<x<<"+i"<<y<<"\n";
}

istream &operator >>(istream &y,complex &p)
{
cout<<"\nenter real and imaginary values ";
y>>p.x;
y>>p.y;
return y;
}

ostream &operator <<(ostream &q,complex &z)
{
q<<z.x<<"+("<<z.y<<")i";
return q;
}

/*int main()
{

complex c1,c2,c3,c4;
c1=complex(2,3);
c2=complex(4,2);
c3=c1+c2;
c4=c1*c2;
cout<<" c1="; c1.display();
cout<<" c2="; c2.display();
cout<<" Addition [c3]="; c3.display();
cout<<" Multiplication [c4]="; c4.display();
}*/
int main()
{
complex c1,c2,c3,c4;							
char ch='y';
int o;

while(ch=='y')
{
cout<<"\n***********************MENU*******************";
cout<<"\n1.Add complex nos.\n2.Multiply complex nos.\nEnter your choice";
cin>>o;
switch(o)
{
case 1: cout<<"****************ADDITION*****************";
cin>>c1;
cin>>c2;
c3=c1+c2;
cout<<" Addition [c3]="; c3.display();
break;

case 2: cout<<"***************MULTIPLICATION*************";
cin>>c1;
cin>>c2;
c4=c1*c2;
cout<<" Multiplication [c4]="; c4.display();
break;

default:
cout<<"enter a valid choice";
}
cout<<"\nDo you want to continue(y/n)???";
cin>>ch;
}
return 0;
}
          
       
