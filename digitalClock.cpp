#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<windows.h>

using namespace std;

int main(){
	
	int hr,min,sec;
	cout<<"Enter the current time:\n"<<endl;
	
	cout<<"Enter the Hour:"<<endl;
	cin>>hr;
	if (hr>=24){
		cout<<"Invalid hour"<<endl;
		cout<<"Enter a valid hour:"<<endl;
		cin>>hr;
    }
    
    cout<<"Enter the Minitue:"<<endl;
	cin>>min;
	if(min>=60){
		cout<<"Invalid minitue"<<endl;
		cout<<"Enter a valid minitue:"<<endl;
		cin>>min;
	}
	
	cout<<"Enter the Second:"<<endl;
	cin>>sec;
	if(sec>=60){
		cout<<"Invalid second"<<endl;
		cout<<"Enter a valid second:"<<endl;
		cin>>sec;
	}
	
	
	while (1){ 
        system("cls"); 
        for (hr; hr < 24; hr++) { 
            for (min; min < 60; min++) { 
                for (sec; sec < 60; sec++) { 
                    system("cls"); 
                    cout << "\n\n\n\t\t\tCurrent Time:" << hr << ":" << min << ":" << sec; 
                    Sleep(1000); 
                } 
                sec = 0; 
            } 
            min = 0; 
        } 
    }
}

