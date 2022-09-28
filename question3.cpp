#include <iostream>
#include "noor.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
// Using classes Here


//Main Finction
void takeinput(){
	cout<<"Enter Length: ";
	cin>>c.length;
	cout<<"Enter breadth: ";
	cin>>c.breadth;
	
}
void calculateArea(){
	c.area=c.length*c.breadth;
	cout<<c.area;
	
}
void displayArea(){
	for(int i=0;i<c.length;i++){
		for(int i=0;i<c.breadth;i++){
			cout<<"*";
		}cout<<"\n";
	}
	
	
}
void displayInfo(){
	cout<<"\n\nYour Length: "<<c.length<<"\n";
	cout<<"Your Breadth: "<<c.breadth<<"\n";
	if(c.area>0){
		cout<<"Your Area: "<<c.area<<"\n\n";
	}
	
}

int main() {

	takeinput();
	calculateArea();
	displayInfo();
	displayArea();
}
