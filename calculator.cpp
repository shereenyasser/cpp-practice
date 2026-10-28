#include<iostream>
using namespace std;
int main(){
	cout<<"welcome to calculator \n";
	int number1;
	int number2;
	cout<<"Dear User,Please Enter 2 numbers \n";
	cin>>number1;
	
	cin>>number2;
	int operation;
	mylabe:{
		
	    cout<<"Please Enter operation. (1 for +,2 for -,3 for *,4 for) / \n";
	    cin>>operation;
		
	}
	
	switch(operation){
		case 1:{
			cout<<number1<<"+"<<number2<<"="<<number1+number2;
			break;
		}
		case 2:{
			cout<<number1<<"-"<<number2<<"="<<number1-number2;
			
			break;
		}
		case 3:{
			cout<<number1<<"*"<<number2<<"="<<number1*number2;
			break;
		}
		case 4:{
			cout<<number1<<"/"<<number2<<"="<<number1/number2;
			break;
		}
		default:{
			goto mylabe;
			break;
		}
			
	}
	
	return 0;
}
