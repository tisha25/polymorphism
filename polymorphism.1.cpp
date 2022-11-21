#include<iostream>

using namespace std;

class w{
	public :
		int a ;
		int b;
		int c;
		int d;
		void calculate (int w, int x){
			d = w / x;
		}
		void calculate(int w,int x,int y){
			c = w - x- y;
			
		}
		void calculate(int w,int x,int y,int z){
			b= w*x*y*z;
		}
		void calculate(int w,int x,int y,int z,int o){
			a = w + x + y + z + o;
		}
};

class x : public w{
	public :
		void calculate(){
	
			cout<<"Divison Of Two Number Is :- "<<d<<endl;
			cout<<"Subtraction Of Three Number Is :- "<<c<<endl;
			cout<<"Multiplication Of Four Number Is :- "<<b<<endl;
			cout<<"Addition Of Five Number Is :- "<<a<<endl;
			
			
		}
};
int main(){
	int a,b,c,d;
	cout<<"Enter Value Of w:- ";
	cin>>a;
	cout<<"Enter Value Of x :- ";
	cin>>b;
	cout<<"Enter Value Of y:- ";
	cin>>c;
	cout<<"Enter Value Of z:- ";
	cin>>d;
	cout<<"Enter Value Of o :- ";
	cin>>e;
	cout<<endl<<endl;
	x obj;
	obj.w::calculate(w,x);
	obj.w::calculate(w,x,y);
	obj.w::calculate(w,x,y,z);
	obj.w::calculate(w,x,y,z,o);
	obj.calculate();
}
