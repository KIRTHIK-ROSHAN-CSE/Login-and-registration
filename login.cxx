#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;


void login();
void registration();
void forgot();


int main()
{
	int c;
	cout<<"\t\t\t____________________________________________________\n\n\n";
	cout<<"\t\t\t_____________welcoe to the login page________________\n\n\n";
	cout<<"\t\t\t_____________________menu_________________________\n\n\n";
	cout<<endl;
	cout<<"\t|  press 1 to login                                |"<<endl;
	cout<<"\t|  press 2to register                            |"<<endl;
	cout<<"\t|  press 3 if you forgot your password|"<<endl;
	cout<<"\t|  press 4 to exit                                   |"<<endl;
	cout<<"\n\t\t\t   please enter your choice:";
	cin>>c;
	cout<<endl;


  switch(c){
  	case 1:
  	       login();
  	       break;
  	 case 2:
  	         registration();
  	         break;
       case 3:
  	         forgot();
  	         break;
  	   case 4:
  	         cout<<"\t\t\t  thank you!   \n\n";
  	         break;
  	     default:
                    system("cls");
                    cout<<"\t\t\t  please select from the otions given above  \n"<<endl;
                    main();
                    }
                    }
       void login(){
       	int count;
       	string userid,password,id,pass;
       	system("cls");
       	cout<<"\t\t\t  please enter the usernsme and password :"<<endl;
       	cout<<"\t\t\t  username";
       	cin>>password;
       	   
       	  ifstream input("records.txt");
       	       
       	           while(input>>id>>pass){
       	          if(id==userid &&  pass==password)
       	          {
       	            count=1;
       	           system("cls");
       	           }
       	           }
       	        input.close();
       	     if(count==1){
       	     	cout<<"userid<<\n your login is successful\n  thamks for logging in ";
       	     	main();
       	     }
       	     else{
       	     	cout<<"\n  login error \n  pleasecheck your username and password\n";
       	     	main();
       	     }
       }
         
         void registration(){
         	string ruserid,rpassword,rid,rpass;
         	system("cls");
         	cout<<"\t\t\t  enter the usernsme";
         	cin>>ruserid;
         	cout<<"\t\t\  enter the password";
         	cin>>rpassword;
         	
         	
         	
        ofstream f1("records.txt,ios::app");
        f1<<ruserid<<rpassword<<endl;
        system("cls");
        cout<<"\n\t\t\   registration is successful\n";
        main();
         }
         void  forgot(){
         	int option;
         	string suserid;
         	system("cls");
         	cout<<"\t\t\t\  you forgot the password?  no worries\n";
         	cout<<"press 1 to search your id by username"<<endl;
         	cout<<"press2 to go back to the main menu"<<endl;
         	cout<<"\t\t\t\t  enter your choice    \n";
         	cin>>option;
         	switch(option){
     		case 1:       	{
             int count=0;
             
             string suserid,sid,spass;
             cout<<"\n\t\t\tenter the suername which you remembere";
             cin>>suserid;
             
             
             
             ifstream  f2("ecords.txt");
             while(f2>>sid>>spass){
             	if(sid==suserid){
             		count=1;
             	}
             }
             f2.close();
             if(count==1){
             	cout<<"\n\n  your accoount isfound\n";
             	cout<<"\n\n  your password is:"<<spass;
             	main();
             }
             else{
             		cout<<"\n\t sorry! your accoount is not found\n";
             		main();
             	}
             
             break;
     		}
     		case 2:{
     			main();
     		}
     		default:
     		cout<<"\t\t\t wrong choice! please try again";
         forgot();
         }
         }
         