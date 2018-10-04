//first include the libray
#include <iostream>
using namespace std;
//just a salary of Rs.600
int fixed(int a){
	int sal=600;
return sal;
}
//7 rs salary + 10% commision
int comm(int a){
	float sal= (7*40)+((a*225)*0.1);
return sal;
}
//zero salary +20 % commision
int zero(int a){
	int sal=(a*20)+((a*225)*0.2);
return sal;
}
// finding the greater salary
int great(int a, int b, int c){
	if(a>b and a>c){
		cout<<"The fixed salary of Rs.600"<<endl;
	}
	if(b>a and b>c){
		cout<<"The salary with Rs.7 per hour plus 10 percent commission"<<endl;
	}
	if(c>a and c>b){
		cout<<"The salary with 20 percent of commission plus the Rs.20 per shoe"<<endl;
	}
	if(a==c and a>b){
		cout<<"Either the fixed salary of Rs.600 or the salary with Rs.7 per hour plus 10 percent commission"<<endl;
	}
	if(b==c and b>a){
		cout<<"Either the salary with Rs.7 per hour plus 10 percent commission or the salary with 20 percent of commission plus the Rs.20 per shoe"<<endl;
	}
	if(a==b and a>c){
		cout<<"Either the fixed salary of Rs.600 or The salary with Rs.7 per hour plus 10 percent commission"<<endl;
	}
	if(a==b and a==c){
		cout<<"Any ofthe three options would work"<<endl;
	}
}
//write the main function
int main(){
	int a,fix,zer;
	float com,gre;	
	cout<<"Give the number of shoes to be bought per week"<<endl;
	cin>>a;
	fix=fixed(a);
	com=comm(a);
	zer=zero(a);
	gre=great(fix,com,zer);
return 0;
}
