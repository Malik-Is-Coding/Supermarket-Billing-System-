#include<iostream>
#include<fstream>

using namespace std;

class shopping
{
	private:
		int pcode;
		float price;
		float dis;
		string pname;
		
		
	    public:
		    void menu();
		    void administrator();
		    void buyer();
	     	void add();
	       	void edit();
	    	void rem();
	     	void list();
	    	void receipt();
		
};


void shopping :: menu() 
{   
    int x;
	int choice;
	string email;
	string password;
	
	cout<< "\t\t\t\t\t___________________________\n";
	cout<< "\t\t\t\t\t                           \n";
	cout<< "\t\t\t\t\t    Supermarket main menu  \n";
	cout<< "\t\t\t\t\t                           \n";
	cout<< "\t\t\t\t\t___________________________\n";
    cout<< "\t\t\t\t\t";
    cout<< "\t\t\t\t\t 1) Administrator \n";
    cout<< "\t\t\t\t\t                           \n";
    cout<< "\t\t\t\t\t 2) Buyer \n";
    cout<< "\t\t\t\t\t                           \n";
    cout<< "\t\t\t\t\t 3) Exit \n";
    cout<< "\t\t\t\t\t     PLEASE SELECT !       \n";
    cin>>choice;
    
    switch(choice){
    	
    	case 1:
    		cout<<"\t\t\t Please login \n";
    		cout<<"\t\t\t Enter Email  \n";
    		cin>>email;
    		cout<<"\t\t\t Password     \n";
    		cin>>password;
    		
    		if(email= "fardinchy2015@gmail.com" && password= "fardinistheboss")
    		{
    			administrator();
			}
			else
			{
				cout<<"Invalid email/password";
			}
			break;
	}
	
	case 2:
		{
			buyer();
		}
	case 3:
		{
			exit(0);
		}
		default :
			{
				cout<< "Please select from the given options";
			}
    
    
	
	goto x;
}
  
  void shopping:: administrator()
   {
  	m;
  	int choice;
  	
  	cout<<"\n\n\n\t\t\t Administrator menu";
  	
  	
  	cout<<"\n\n\n\t\t\t 1) Add the product       ";
  	cout<<"\n\n\n\t\t\t|                         ";
  	cout<<"\n\n\n\t\t\t 2) Modify the product    ";
  	cout<<"\n\n\n\t\t\t|                         ";
  	cout<<"\n\n\n\t\t\t 3) Delete the product    ";
  	cout<<"\n\n\n\t\t\t|                         ";
  	cout<<"\n\n\n\t\t\t 4) Back to  the main menu";
  	
  	cout<<"\n\n\t please enter your choice       ";
  	cin>>choice;
  	
  	switch(choice)
	  {
  		case 1:
  			add();
  			break
  		case 2:
  			edit();
  			break;
  		case 3:
  			rem();
  			break;
  		case 4:
  			menu();
  			break;
  		default :
  			cout<<"Invalid choice";
	  }
  	
  	goto m; 
  	
  }
