#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main()
{
	stack<int>st;
	queue<int>que;
	int choice,t;
	int item;
	while(1)
	{
		cout<<"Please enter choice from below:";
		cout<<"\n1.Insert element\n2.Delete element\n3.Size\n4.First element\n5.Display elemrnt\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
				cout<<"\nenter value:";
				cin>>item;
				st.push(item);
				que.push(item);
				break;
																	
			}
			/*case 2:
			{
				item=st.top();
				st.pop();
				cout<<"\nElement "<<item<<" Deleted from satck";
				item=que.front();
				que.pop();
				cout<<"\nElement "<<item<<" Deleted from Queue";
				break;
			}*/
			case 3:
			{
				cout<<"\nSize of Stack:"<<st.size();
				
				cout<<"\nSize of Queue:"<<que.size();
				
				break;
			}
			case 4:
			{
				cout<<"\nTop Element Of Stacke:";
				cout<<st.top();
				cout<<"\nFront Element Of Queue:";
				cout<<que.front();

				break;
			} 
			case 5:
			{
				cout<<"\nElements in Stack are:";
				while(!st.empty())
				{
					cout<<st.top()<<"\t";
					st.pop();
				}
				cout<<"\nElements in Queue are:";
				while(!que.empty())
				{
					cout<<que.front()<<"\t";
					que.pop();
				}
				break;
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
