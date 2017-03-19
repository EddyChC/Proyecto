#include <iostream>
#include <windows.h>
#include<math.h>
using namespace std;

int main(){
	float a,b,c;
	
	cout<<"Digite el cateto a:";cin>>a;
	cout<<"Digite el cateto b:";cin>>b;
	
	a =sqrt((pow(2,a)+pow(2,b)));
	cout.precision(2);
	
	cout<<"\nLa hipotenusa del triangulo rectangulo es:"<<a;
	
	return 0;
}
