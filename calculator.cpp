#include<iostream>
using namespace std;

int main() 
{
    char a;
    int  b,c;

    cout<<"Enter an operator (+, -, *, /): ";
    cin>>a;
    cout<<"Enter first numbers: "<<endl;
    cin>>b;
    cout<<"Enter second numbers: "<<endl;
    cin>>c;
    
    switch (a)
     {
        case '+':
        cout << "addition is --> " << b + c;
        break;
    case '-':
        cout << "subtraction is --> " << b - c;
        break;
    case '*':
        cout << "multiplication is --> " << b * c;
        break;
    case '/':
    	if(c==0)
		{
    		cout<<"this is undefined as 2nd number is 0"<<endl;
		}
		else
        {
		cout << "division is --> " << b % c;
	}
        break;
    default:
        cout << "Invalid operator" << endl;
    }

    return 0;
}
