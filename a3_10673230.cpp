#include <iostream>
using namespace std;
	int main()
	{
	cout<< "Enter Student's score " << endl;
		int s;
		cin>>s;
	
		if(s>=0,s<=44)
	        {cout << "this student had an F"<<endl;
					}        
					else if (s>=45,s<=49){
						cout << "this student had an E"<<endl;
					}
						else if (s>=50,s<=54){
						cout << "this student had an D"<<endl;
					}
						else if (s>=55,s<=59){
						cout << "this student had an D+"<<endl;
					}
						else if (s>=60,s<=64){
						cout << "this student had an C"<<endl;
					}
						else if (s>=65,s<=69){
						cout << "this student had an C+"<<endl;
					}
				    	else if (s>=70,s<=74){
						cout << "this student had an B"<<endl;
					}
					                    	else if (s>=75,s<=79){
						cout << "this student had an B+"<<endl;
					}
			
				else if (s>=80,s<=100){
						cout << "this student had an A"<<endl;
					}
			
   return 0;		
	}
