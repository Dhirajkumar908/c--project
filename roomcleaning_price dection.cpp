/*
dhiraj's carpet cleaning service charges $ 30 
sales tax rate is 6%
Estimates are valid for 30 days

Prompt the user for the number of rooms  they would like cleaned 
and provide an estimate such as :

Estimate for carpet cleaning survice:

number of rooms : 2 
Price per room : $ 30
Cost : $ 60
tax : $3.6

======================================================================================
Total estimate : $ 63.6
This estimate is valid for 30 days 

Psedocode : 

   Prompt the user to enter the number of rooms
   Disply  number of rooms 
   Display price per noom
   
   Display cost: (number of room * price per room 
   Display  tax : number of rooms *price per room *tax rate 
   Display total estimate : (numner of rooms * price per room)+ (number of rooms *price per room* tax rate)
   Display estimate expiration time
*/
#include<iostream>
using namespace std;
int main()
{
	cout <<"Hello,welcome to dhiraj's  Carpet Cleaning service"<<endl;
	cout <<"\n How many room would you like cleaned :  ";
	int num_room{0};
	cin>>num_room;
	
	const double price_per_room{30.0};
	const double sales_tax{0.06};
	const double estimate_espiry{30}; //days
	
	cout<<"\nEstimate for carpet cleaning servce"<<endl;
	cout<<"\nNumber of rooms :  "<<num_room<<endl;
	cout<<"Prince per rooms : $ "<<price_per_room<<endl;
	cout<<"Cost : $ "<<price_per_room*num_room<<endl;
	cout<<"Tax : $ "<<price_per_room*num_room*sales_tax<<endl;
	cout<<"============================================================="<<endl;
	cout<<"Total estimate: "<<(price_per_room*num_room)+(price_per_room*num_room*sales_tax)<<endl;
	cout<<"TOtal estimate is valid for "<<estimate_espiry<<"days"<<endl;

	
	
	cout <<endl;
	return 0;	
}








