#include <iostream>
using namespace std;

void xgcd(int y,int x);
int main(){

cout<<endl<<endl<<"Anil Taskiran "<<endl
<<"Numerical Methods"<<endl<<endl<<endl;



cout<<"This program finds the coefficients"<<
" x and y where a.x + b.y = c"<<endl;

cout <<"a and b are the given parameters and c=gcd(a,b)"<<endl<<endl;

while(1){
cout << "please enter two number: ";
int a,b;
cin >> a >> b;

if(a > b){
int	temp = b;
	b = a;
	a = temp;
}
xgcd(a,b);
}

}

void xgcd(int a, int b){
int temp;
	int s = 0,s_old = 1;
	int t = 1,t_old = 0;
	int r = b, r_old = a;

	while(r!=0){
		int	quotient = r_old /r;
		temp = r;
		r = r_old - quotient*r;
		r_old = temp;
	
		temp = s;
		s = s_old - quotient*s;
		s_old = temp;
	
		temp = t;
		t = t_old - quotient*t;
		t_old=temp;
	}

//s_old ve t_old coeff. y.a+x.b=gcd(a,b)
	//gcd is old_r
	cout<<"gcd is "<<r_old<<endl;
cout <<a<<".(x) + "<<b<<".(y) = "<<r_old<<endl;
cout << "x = "<<s_old<<endl<<"y = " << t_old<<endl;
cout <<a<<".("<<s_old<<") + "<<b<<".("<<t_old<<") = "<<r_old<<endl;



}




