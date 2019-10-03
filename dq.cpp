#include<iostream>
#include<deque>


using namespace std;

int main()
{
	
	deque<int>dq;
	deque<int> :: iterator itr;
	int choice;
	int item;
	while(1)
	{
		cout<<"Please enter choice from below:";
		cout<<"\n1.Insert elememnt from front\n2.Insert ELement from back\n3.delete element from front\n4.delete element from back\n5.dislplay front element\n6.size of deque\n7.Display all ellements\n::";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				cout<<"\nenter value:";
				cin>>item;
				dq.push_front(item);
				break;
																	
			}
			case 2:
			{
				cout<<"\nenter value:";
				cin>>item;
				dq.push_back(item);
				break;
			}
			case 3:
			{
				
				dq.pop_front();
				break;
			}
			case 4:
			{
				
				dq.pop_back();
				break;
			} 
			case 5:
			{
				cout<<"\nfront element of deque is :"<<dq.front();
				break; 
			}
			case 6:
			{
				cout<<"SIze of Deque is :"<<dq.size();
				break;			
			}
			case 7:
			{
				if (dq.empty())
				{
					cout<<"...Deque is empty...";
				}
				else
				{
					for (itr=dq.begin();itr!=dq.end();itr++)
					{
						cout<<*itr;
						cout<<"\n";
					}
				}
			}
		}
	char x;
	cout<<"\nDo you want to continue(y/n):";
	cin>>x;
	if (x=='n' || x=='N')
	{
		break;
	}
	
	
	}
	return 0;
	
	
}
