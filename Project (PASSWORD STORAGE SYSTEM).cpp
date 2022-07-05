#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
class account{
	public:

		int a ;
		int arr[1000];
		int useradd  , id[1000];
		
		int arr_create_account[1000] , mobile_no , mob[1000] , uid , usid , passwd_store_new/*(this is for sign in)*/;
		 int no_of_users = useradd;
		 string org , passwd_store;
		string name , s2 , z;
		int s1   , ans , y;
		string cus;

	
			void SIGN_IN()
			{
				ifstream o1("user_details.txt");
				ifstream nino("ID.txt");
				ofstream n("passwords.txt");
				
				cout << "Enter Your Remostorix Account id:"<< endl;
				cin  >> usid;
				nino >> s1;
				
				if(usid == s1)
				{
					cout << "LOGIN SUCCESSFULL"<<endl;
					getline(o1,s2);
					getline(o1,z);
					cout << "Name : " << s2<<endl;
					cout << "Mobile No: "<< z<<endl;
					cout << "Enter the Organization Name of which you want to save password----";
					cin >> org;
					cout << "Enter Password ----";
					cin >> passwd_store;
					n << org << ": "<< passwd_store;
					cout << endl;
					cout << "Press 10 to go to the Home Page --"<<endl;
					cin >>  y;
					if(y==10)
					{
						DISPLAY_1();
					}
					
					
					
					
				}
				else{
					cout << "Incorrect ID"<< endl;
				}
				
				
				
				
				
			}
		
		
		// this section is for creating account
		
			
			void SIGN_UP()
			{
				ofstream o2;
				ofstream o3("ID.txt");
				o2.open("user_details.txt");
				
				
				//useradd = 1 ;
				//cout << "There are Total" <<no_of_users<< "users"<< endl; 
				cout << "HELLO , THIS IS SIGN UP PAGE"<< endl;
				cout << "Enter You Full Name --";
				cin >> name ;
				cout << "Enter your Mobile No. = ";
				cin >> mobile_no;
				//cout << "Enter The NO of User you are -";
				//cin >> useradd;
				cout << "Enter Unique ID - " ;
				cin >> uid;
				o2 << name <<endl;
				o2 << mobile_no<<endl;
				o3 << uid;
				
				cout << "Your Account is created Successfully"<<endl;
				cout << "Now press 10 for continue with Remostorix - - ";
				cin >> y;
				if(y==10)
				{
					DISPLAY_1();	
				}
				/*while(i<no_of_users)
				{
					i=0;
					cin >> id[i] ;
					 
				}*/
				
			
				
				 
			}
		
			void LAYOUT()
			{
				cout << "Hello you are in REMOSTORIX"<< endl;
			
			}
			void DISPLAY_1()
			{
				ifstream pass("passwords.txt");
				cout << "If you are already the user of Remostorix then choose among this ::"<< endl;
				cout << "If not then press 3"<<endl;
				cout << "1. STORE PASSWORD:" << endl;
				cout << "2. SHOW PASSWORD:" << endl;
				cout <<  "Your Answer";
				cin >> ans;
				if(ans==1)
				{
					SIGN_IN();
				}
				else if(ans==2)
				{
					
					getline(pass,cus);
					cout << "Your Password:"<<endl;
					cout << cus;
					
					
				}
				else if(ans==3)
				{
					SIGN_UP();
				}
			
			}
		
		
};

int main()
{
	account m1 ;
	m1.LAYOUT();
	m1.DISPLAY_1();
	
	return 0;
	
}