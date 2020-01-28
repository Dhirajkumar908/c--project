#include <iostream>
#include <climits>

using namespace std;

 int main()
 {
    cout<<"sizeof information"<<endl;
    cout<<"==========================="<<endl;
    
    cout<<"chat : "<<sizeof(char)<<" bytes"<<endl;
    cout<<"int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"unsigned int : "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"short : "<<sizeof(short)<<" bytes"<<endl;
    cout<<"long : "<<sizeof(long)<<" bytes"<<endl;
    cout<<"long long : "<<sizeof(long long)<<" bytes"<<endl;
    
    cout<<"==================================================\n";
    
    cout<<"Maximum values \n "<<endl;  
    cout<<"char: "<<CHAR_MAX<<endl;
      cout<<"int : "<<INT_MAX<<endl;
        cout<<"short : "<<SHRT_MAX<<endl;
          cout<<"long : "<<LONG_MAX<<endl;
            cout<<"Long long : "<<LLONG_MAX<<endl;
              
    
    
 
 
 	return 0;
 }
