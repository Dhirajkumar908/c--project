
//allenge No 2


/*
dhiraj's Carpet cleaning servuce 
 Charges  : 
 $25 per small room
 $35 per large room
sales tax rate is 6%
Estimates are valid for 30 days
 
 Prompt the user for the number of small and large rooms they would like cleaned 
 and provide an estimate such as:


Estimate for carpet cleaning service 
Number of small rooms : 3
Number of large rooms : 1
 Price per small rooms : $ 25
 price per large rooms : $ 35 
 cost : $110 
 Tax : $6.6
==========================================================================================

Total estimate : $ 116.6
This estimate is valid for 30 days  
*/























#include<iostream>
using namespace std;
int main(){
	
	int num_small_room{0};
	int num_large_room{0};
	
	
	cout<<"Enter the number of small rooms: ";
	cin>>num_small_room;
	cout<<"Enter the number of large rooms: ";
	cin>>num_large_room;
	cout<<"=================================================="<<endl;
	
	cout<<"Estimate for carpet cleaning service "<<endl;
	cout<<"Number of small rooms: "<<num_small_room<<endl;
	cout<<"Number of large rooms: "<<num_large_room<<endl;
	cout<<"price per small room: $25 "<<endl;
	cout<<"price per large room: $35 "<<endl;
	cout<<"Sales tax rate is : 6%"<<endl;
	cout<< "Estimates are valide for  30 days"<<endl;
	cout<<"=========================================================="<<endl;
	
	cout<<"Cost is : $"<<(25*num_small_room)+(35*num_large_room)<<endl;
	cout<<"Tax  : $"<<((25*num_small_room+35*num_large_room)*6)/100<<endl;
	cout<<"================================================================"<<endl;
	
	
	cout<<"**TOTALE ESTIMATE (CARPET CLEANING PRICE )**\n"<<endl;
	cout<<"      The total estimate is : $"<<((25*num_small_room+35*num_large_room)*6)/100+
	(25*num_small_room)+(35*num_large_room)<<endl;
	cout<<"      This estimate is valide for only 30 days\n\n"<< endl;
		return 0;
	}
