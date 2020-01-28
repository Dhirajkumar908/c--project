//Arrays
#include<iostream>
using namespace std;
int main(){
	char vowels []{'a','e','i','o','u'};
	cout<<"the vowel is : "<<vowels<<endl; 
	 cout<<"\nThe first vowel is : "<<vowels[0]<<endl;
	 cout<<"\n The last vowel is : "<<vowels[4]<<endl;
	
    double hi_temp[]{90.1, 89.8,77.5,81.6};
    cout<<"\n THe fist high temperature is : "<<hi_temp[0]<<endl;
    hi_temp[0]=100.7;
    cout<<"The first high temperature is now "<<hi_temp [0]<<endl;
    
    cout<<"========================================================";
    
    int test_scores[5]{100,900};
    cout<<"\n first score at index 0: "<<test_scores[0]<<endl;
      cout<<"\n second score at index 1: "<<test_scores[1]<<endl;
        cout<<"\n third score at index 2: "<<test_scores[2]<<endl;
          cout<<"\n fourth score at index 3: "<<test_scores[3]<<endl;
            cout<<"\n fifth score at index 4: "<<test_scores[4]<<endl;
            
 cout<<"========================================================";
 
    cout<<"\n Enter 5 test scores: "<<endl;
    cin>>test_scores[0];
    cin>>test_scores[1];
    cin>>test_scores[2];
    cin>>test_scores[3];
    cin>>test_scores[4];
    
    cout<<"\n The updated arrauy is \n"<<endl;
    cout<<"Fist score at index 0: "<<test_scores[0]<<endl;
    cout<<"second score at index 1: "<<test_scores[1]<<endl;
    cout<<"third score at index 2: "<<test_scores[2]<<endl;
    cout<<"forth score at index 3: "<<test_scores[3]<<endl;
    cout<<"fifth  score at index 4: "<<test_scores[4]<<endl;
    
    cout<<"\n Notice what the value of the array name is : "<<test_scores<<endl;
    cout<<endl;
    
 	 
	 
	 return 0;
}
