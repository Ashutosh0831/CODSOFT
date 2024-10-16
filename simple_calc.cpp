//Program for the simple calculator which perform addition, subtraction , multiplication , division of two operand.

#include<iostream>
using namespace std;
class calc{
	public:
		void sum(float a,float b){
			cout<<"Sum="<<a+b<<endl;
		}
		void sub(float x,float y){
			cout<<"Subtract="<<x-y;
		}
		void prod(float m,float n){
			cout<<"Procuct="<<m*n<<endl;
		}
		void divs(float k,float l){
			cout<<"Division="<<k/l<<endl;
		}
};

int main(){
	calc C;
	float a,b;
	char ch;
	cout<<"                      Hello Welcome to the simple calculator."<<endl;
	cout<<"Enter the operands a and b:: ";
	cin>>a;
	cin>>ch;
	cin>>b;
	switch(ch){
		case '+':
			C.sum(a,b);
			break;
		case '-':
			C.sub(a,b);
			break;
		case '*':
			C.prod(a,b);
			break;
		case '/':
			C.divs(a,b);
			break;
		default:
			cout<<"Invalid Input"<<endl;
	}
	
	return 0;
}
