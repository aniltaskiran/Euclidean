#include <iostream>
using namespace std;

int inverse_gcd(int y,int x);




int main(){
cout<<endl<<endl << "Anil Taskiran "<<endl
<<"Numerical Methods"<<endl<<endl<<endl;



cout << "This program finds the "<<
"multiplicative inverse of a modulo b"<<endl;
while(1){
cout << "please enter two number: ";
int a,b;
cin >> a >> b;

if(a > b){
int	temp = b;
	b = a;
	a = temp;
}
int x = inverse_gcd(a,b);
if(x== -1213456){
	cout << "there is no inverse of "<<a<<endl;
}
else if(x== -1245455){
	cout << "error"<<endl;
}else{
cout<<"Modular Multiplicative Inverse: " << x <<endl;
}
}
}

int inverse_gcd(int y, int x){
	int t = 0, newt = 1;
	int r = x, newr = y;
	int temp;
	int quotient;
	while(newr!=0){
		quotient = r / newr;
		temp = newt;
		newt = t - quotient*newt;
		t = temp;

		temp = newr;
		newr = r - quotient*newr;
		r = temp;
	}

	if(r>1){ return -1213456; }
	if(t<0){
		t = t+x;
		return t;
		}
		if(t>0) return t;
		else return -1245455;

}
