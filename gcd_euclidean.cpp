#include <iostream>
using namespace std;

int gcd(int y,int x);

int main(){

cout<<endl<<endl << "Anil Taskiran "<<endl
<<"Numerical Methods "<<endl<<endl<<endl;




cout << "This program finds the"<<
" Greatest Commen Divisor of the "<<
"given two numbers"<<endl<<
" c = gcd(a,b) "<<endl;

while(1){
cout << "please enter two number: ";
int a,b;
cin >> a >> b;

if(a > b){
int	temp = b;
	b = a;
	a = temp;
}

cout << endl << gcd(a,b) <<endl;
}

}

int gcd(int y, int x){


if(x == 0) return y;

else return gcd(x, y%x); 

}
