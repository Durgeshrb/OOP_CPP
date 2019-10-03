#include<iostream>
#include<string.h>
using namespace std;

class info
{
        public:
        char name[50];
        int i;
        long tel_no,tel_no1;
        static int cnt;
        void accept();
        void display();
        static int count(); 
};


void info::accept()
{
        cout<<"Enter the Name\n";
        cin>>name;
        cout<<"Enter Telephone Number\n";
        cin>>tel_no;
}

void info::display()
{
        cout<<"\nname:"<<this->name;
        cout<<"\ntelephone number:"<<this->tel_no;
}

int info ::cnt=0;
int info ::count()
{
        cnt=cnt+1;
        return(cnt);
}

int main()
{
        int ch,i,n,ch1,flag=0;
        long tel_no,tel_no1;
        info o[50];
        char name[12];
        
do
        {
                cout<<"\nmenu\n";
                cout<<"1.Accept\n2.Display\n3.Search name\n4.Search phone\n5.Update\n6.Exit";
                cout<<"\nEnter your choice\n";
                cin>>ch;
                
                switch(ch)
                {
                        case 1:
                        cout<<"\nNew record \n enter 1 for new record\n";
                        cin>>ch1;
                        o[n].accept();
                        n=info :: count();
                        break;
                        
                        case 2:
                        for(i=0;i<n;i++)
                        {
                                o[i].display();
                        }
                        break;
                        
                        case 3:
                        cout<<"\nEnter name to be Searched\n";
                        cin>>name;
                        for(i=0;i<n;i++)
                        {
                         if(strcmp(name,o[i].name)==0)
                                {
                                flag=1;
                                o[i].display();
                                break;
                                }
                        }
                        if(flag==0)
                        {
                                cout<<"\nSorry....record not found\n";
                                break;
                        }
                        
                        case 4:
                        cout<<"Enter Tel_no to be searched";
                        cin>>tel_no;
                        for(i=0;i<n;i++)
                        {
                                if(tel_no,o[i].tel_no)
                                {
                                        flag==1;
                                        o[i].display();
                                        break;
                                }
                        }
                        
                       if(flag==0)
                       {
                               cout<<"\nsorry";
                               
                       }
                        break;
                       case 5:
                       cout<<"\nEnter name\n";
                       cin>>name;
                       cout<<"\nEntet number to be update\n";
                       cin>>tel_no1;
                       for(i=0;i<n;i++)
                       {
                                if(strcmp(name,o[i].name)==0)
                                {
                                o[i].tel_no=tel_no1;
                                }
                       }break;
                            
                }
        }while(ch1!=6);
        return 0;
}
