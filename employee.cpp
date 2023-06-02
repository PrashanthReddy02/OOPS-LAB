#include<iostream>
using namespace std;
class employee
{
	int num;
	char name[20];
	float basic,da,it,net,gross;
	public:
	void data();
	float salary();
	void display();
};
void employee::data(int n)
{
	cout<<"emplyee "<<n<<"details are :";
	cout<<"enter the employee number: ";
	cin>>num;
	cout<<"enter the employee name: ";
	cin>>name;
	cout<<"enter the basic salary: ";
	cin>>basic;
	
}#include<iostream>
using namespace std;
class employee
{
	int num;
	char name[20];
	float basic,da,it,net,gross;
	public:
	void data();
	float salary();
	void display();
};
void employee::data(int n)
{
	cout<<"emplyee "<<n<<"details are :";
	cout<<"enter the employee number: ";
	cin>>num;
	cout<<"enter the employee name: ";
	cin>>name;
	cout<<"enter the basic salary: ";
	cin>>basic;
	
}
float employee::salary()
{
	da=(52/100)*basic;
	gross=da+basic;
	it=(30/100)*gross;
	net=(da+basic)-it;
	return net;
}
void employee::display(int n)
{
	cout<<"employee "<<n<<"details are ";
	cout<<"\nEmployee number :"<<n;
	cout<<"\nemployee name:"<<name;
	cout<<"\nnet salary : "<<net;
}
int main()
{
	int n,m;
	employee e[30];
	cout<<"ente the number o employee:";
	cin>>m;
	for(n=0;n<m;n++)
	{
		e[n].data(n+1);
	}
	for(n=0;n<m;n++)
	{
		e[n].salary();
	}
	for(n=0;n<m;n++)
	{
		e[n].display(n+1);
	}
	return 0;
}


		 	
		 	
float employee::salary()
{
	da=(52/100)*basic;
	gross=da+basic;
	it=(30/100)*gross;
	net=(da+basic)-it;
	return net;
}
void employee::display(int n)
{
	cout<<"employee "<<n<<"details are ";
	cout<<"\nEmployee number :"<<n;
	cout<<"\nemployee name:"<<name;
	cout<<"\nnet salary : "<<net;
}
int main()
{
	int n,m;
	employee e[30];
	cout<<"ente the number o employee:";
	cin>>m;
	for(n=0;n<m;n++)
	{
		e[n].data(n+1);
	}
	for(n=0;n<m;n++)
	{
		e[n].salary();
	}
	for(n=0;n<m;n++)
	{
		e[n].display(n+1);
	}
	return 0;
}
