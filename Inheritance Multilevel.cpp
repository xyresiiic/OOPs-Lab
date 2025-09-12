#include <iostream>
using namespace std;


//<==================================================================Inheritance=================================================================================>


class grandfather{
	public:
		
			public:
		void home()
		{
			cout<<"grand fathers home"<<endl;
		}
		void money()
		{
			cout<<"money "<<endl;
		}
	grandfather()
	{
		cout<<"grand fathers class comstructror"<<endl;
	}
};


class father:public grandfather{
	public:
		void car()
		{
			cout<<"Father car-> tata curve"<<endl;
		}
		void bike()
		{
			cout<<"Father bike-> Xtream"<<endl;
		}
	father()
	{
		cout<<"father class comstructror"<<endl;
	}
};


class child:public father{ 
	
	public:
	void phone()
		{
			cout<<"chids phone-> samsung s25 ultra"<<endl;
		}
		void laptop()
		{
			cout<<"child's laptop-> Victus"<<endl;
		}
	child()
	{
		cout<<"child class comstructror"<<endl;
	}
};


int main()
{
  child s1;
  s1.home();
  s1.money();
  s1.car();
  s1.bike();
  s1.phone();
  s1.laptop();
  
  
  	
}
