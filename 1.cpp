//first include the libray
#include <iostream>
using namespace std;
int main(){
	cout<<"The prices of fruits are as follows:-\n Apple- INR 1.00\n Mango- INR 3.00\n Banana- INR 0.50\nYou can buy 100 fruits in INR 100.00 in following ways:-"<<endl; 
	cout<<"Apple|Mango|Banana"<<endl;
	int a,b,c,e;
	float x,y,z,d;
	x= 1.00;
	y= 3.00;
	z= 0.50;
	for(a=0;a<100;a++){
		for(b=0;b<100;b++){
			for(c=0;c<200;c++){
				d=(a*x)+(b*y)+(c*z);
				e=a+b+c;
				if(d==100.00 and e==100){
					cout<<a<<"     "<<b<<"     "<<c<<endl;
				}			
			}
		}
	}
return 0;
}
