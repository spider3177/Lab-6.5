//first include the libray
#include <iostream>
using namespace std;
//write the main function
int main(){
	long sq=0,sn,k=0;
	for(long i=0;k<=7;i++){
		sq=i*i;
		sn=0;
		for (int j=0;sn<=sq;j++){
			sn=sn+j;
			if(sn==sq){
				k++;
				cout<<sq<<endl;
				break;
			}
		}
	}		
return 0;
}
