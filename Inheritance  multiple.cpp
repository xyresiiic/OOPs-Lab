#include <iostream>
using namespace std;


//<==================================================================Inheritance=================================================================================>


class mother{
	public:
		
			public:
		void jwellery()
		{
			cout<<"mothers jwellery"<<endl;
		}
		
		
	mother()
	{
		cout<<"mothers class comstructror"<<endl;
	}
};


class father{
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


class child:public mother,public father{ 
	
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
  s1.jwellery();
  s1.car();
  s1.bike();
  s1.phone();
  s1.laptop();
  
  
  	
}
