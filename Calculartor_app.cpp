#include<iostream>
using namespace std;

main()
{
	cout<<"\t\t**********CALCULATOR APP**********\n\n";
	char op;
	float n1,n2;
		
	cout<<"\tEnter the first number :";
	cin>>n1;
	
	cout<<"\tEnter the operator :";
	cin>>op;
	
	cout<<"\tEnter the second number :";
	cin>>n2;
	
	switch(op)
	{
		case '+':
			cout<<"\tResult :: "<<n1+n2;
			break;
			
		case '-':
			cout<<"\tResult :: "<<n1-n2;
			break;
		
		case '*':
			cout<<"\tResult :: "<<n1*n2;
			break;
			
		case '/':
			cout<<"\tResult :: "<<n1/n2;
			break;
			
		default :
			cout<<"\tInvalid input is given";
			break;
	}
	
	
}
