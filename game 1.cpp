#include <iostream>
#include <time.h>

using namespace std;

int main (){
	cout<<"Toog ta togloomond tavtai moril"<<endl;
	cout<<"Ta 0-100 hoorondoh neg toog taag yostoi"<<endl;
	
	srand(time(NULL));
	
	int randomnum=rand()%10;
		
    int count=0;
        
	while(randomnum){
		int n;
		cout<<"Tanii taamaglal:";
	    cin>>n;
	    count++;
	    if(randomnum>n){
			cout<<"tanii oruulsan too heterhii baga bna"<<endl;
		}else if(randomnum<n){
			cout<<"Tanii oruulsan too heterhii ih bna"<<endl;
		}else {
			cout<<"Tand bayr hurgii ta "<<count<<" oroldlogoor taalaa"<<endl;
			break;
		}
	}
	
		
return 0;
}
