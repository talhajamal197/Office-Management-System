 #include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include <conio.h>
using namespace std;
void status()
{
	cout<<"\nCompany Name : *Infinity Private Limited*";
	cout<<"\nBranch:\n------- \n*Hasan Square\n*DHA Phase 8\n*Gulshane-e-Iqbal";
	cout<<"\n_________________________";
	cout<<"\nOwner Name :Talha Jamal";
	cout<<"\n_________________________";
	
}
class Company
{
	protected:
	    string nameOfCompany,Area,NoOfBranches,OwnerName;
	public:
		Company():nameOfCompany("**Infinity Private Limited**"),Area("\nShara-e-Faisal"),
		NoOfBranches("\n*Hasan Square\n*DHA Phase 8\nGulshane-e-Iqbal"),OwnerName("Talha Jamal")
		{

		}
		virtual void fun()=0; 
		friend  void status ();
};
class sales: virtual public Company
{
	protected:
		float keyboard,mouse,pad,ram,skin,gpu,controller,processor,harddrive,flashdrive,memorycard,camera,casing;
		public:
			
			sales()
			{
				keyboard=450.00;
				mouse=350.00;
				pad=120.00;
				ram=3000.00;
				skin=400.00;
				gpu=5500.00;
				controller=1100.00;
				processor=7000.00;
				harddrive=4000.00;
				flashdrive=700.00;
				memorycard=800.00;
				camera=5400.00;
				casing=3200.00;
			}
			 void fun()
	        {
	    	cout<<"fun";
	     	}
			
			void changeprice(){
				int ch;
				float newprice;
				cout<<"\nWhich item's price do you want to change?";
				cout<<"\n1:Keyboard\n2:Mouse\ncase 3:Pad\n4:Ram\n5:Skin\n6:Gpu\n7:Controller\n8:Processor\n9:Hard Drive\n10:Flashdrive\n11:Memory Card\n12:Camera\n12:Casing";
				cin>>ch;
				cout<<"\nEnter new price for the selected item";
				cin>>newprice;
				switch(ch)
				{
				case 1:
				keyboard=newprice;
				cout<<"\nPrice changed!";
				break;
				case 2:
				mouse=newprice;
				cout<<"\nPrice changed!";
				break;
				case 3:
				pad=newprice;
				cout<<"\nPrice changed!";
				break;
				case 4:
				ram=newprice;
				cout<<"\nPrice changed!";
				break;
				case 5:
				skin=newprice;
				cout<<"\nPrice changed!";
				break;
				case 6:
				gpu=newprice;
				cout<<"\nPrice changed!";
				break;
				case 7:
				controller=newprice;
				cout<<"\nPrice changed!";
				break;
				case 8:
				processor=newprice;
				cout<<"\nPrice changed!";
				break;
				case 9:
				harddrive=newprice;
				cout<<"\nPrice changed!";
				case 10:
				break;
				flashdrive=newprice;
				cout<<"\nPrice changed!";
				break;
				case 11:
				memorycard=newprice;
				cout<<"\nPrice changed!";
				break;
				case 12:
				camera=newprice;
				cout<<"\nPrice changed!";
				break;
				case 13:
				casing=newprice;
				cout<<"\nPrice changed!";
				default:
					cout<<"\nWrong Input ";
				}
			}
				
				float buy()
				{
					int ch;
					float quantity=0,result=0,bill=0;
					do{
					
					cout<<"\nEnter item's number that you want to buy: ";
					cout<<"\n1:Keyboard\n2:Mouse\n3:Pad\n4:Ram\n5:Skin\n6:Gpu\n7:Controller\n8:Processor\n9:Hard Drive\n10:Flashdrive\n11:Memory Card\n12:Camera\n13:Casing\n0:EXIT!";
					cin>>ch;
					
					if(ch!=0)
					{
					cout<<"\nEnter quantity: ";
					cin>>quantity;
					}
					
					switch(ch)
				{
				case 1:
				result=keyboard*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 2:
				result=mouse*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 3:
				result=pad*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 4:
				result=ram*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 5:
				result=skin*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 6:
				result=gpu*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 7:
				result=controller*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 8:
				result=processor*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 9:
				result=harddrive*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				case 10:
				break;
				result=flashdrive*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 11:
				result=memorycard*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 12:
				result=camera*quantity;
				bill=bill+result;
				cout<<"\nAdded into Cart!";
				break;
				case 13:
				result=casing*quantity;
				cout<<"\nAdded into Cart!";
				bill=bill+result;
				break;
				case 14:
				cout<<"\n\nTotal BILL : "<<bill;
				break;
				case 0:
				cout<<"\n\nTotal BILL : "<<bill;
				break;
				default:
					cout<<"\nWrong Input ";
				}
				}while(ch!=0);
				cout<<"\n\nTotal BILL : "<<bill;
				return bill;	
				}
				
				void showprice()
				{
					cout<<"\n1:Keyboard= "<<keyboard<<"\n2:Mouse= "<<mouse<<"\n3:Pad= "<<pad<<"\n4:Ram= "<<ram<<"\n5:Skin= "<<skin<<"\n6:Gpu= "<<gpu<<"\n7:Controller= "<<controller<<"\n8:Processor= "<<processor<<"\n9:Hard Drive= "<<harddrive<<"\n10:Flashdrive= "<<flashdrive<<"\n11:Memory Card= "<<memorycard<<"\n12:Camera= "<<camera<<"\n12:Casing= "<<casing;
				}
			
		
};
class Queries:virtual public Company
{
	protected:
		static int count;
		char queries[100];
	public:
		Queries()
		{
			count=0;
		}
		 void fun()
	    {
	    	cout<<"fun";
		}
		void getquery()
		{
		       getch();	  
			   cout<<"\nWrite Qurie related any aspect of company:";
			
				cin.getline(queries,99);
			//	system("cls");
				
				
		}
		void registerQuery()
		{
			
			    
	
				getquery();
				
				
				fstream f;
				f.open("FAQ.txt",ios::app|ios::binary);
			    f.write((char*)this,sizeof(*this));
			    cout<<"\nQuery Posted!";
				f.close();
			
		}
		
		void displayQueries(int )//All read
		{
			fstream f;
			f.open("FAQ.txt",ios::in|ios::binary);
			if(!f)
			    cout<<"\nFile Not Found  ";
			else
			{
				
				f.read((char*)this,sizeof(*this));
				while(!f.eof())
				{
					++count;
				    displayQuery();
				    f.read((char*)this,sizeof(*this));
				    
				}
				f.close();
			}
		}
		int displayQuery()
		{   cout<<"\n_______________________________________________";
			cout<<"\n"<<count<<"->"<<queries;
			cout<<"\n_______________________________________________";
			
		}
		~Queries()
		{
			
		}
	
};
int Queries::count=0;
class accounts:virtual public Company
{
	private:
		double salaryExp,interestExp,depriciationExp,utilityExp,rentExp,advertizingExp;
	    double revenue,netIncome;
		int year; 
	public:
		accounts()
		{
			salaryExp=0;
			interestExp=0;
			depriciationExp=0;
			utilityExp=0;
			rentExp=0;
			advertizingExp=0;
			revenue=0;
			netIncome=0;
			year=0;
		}
		 void fun()
	    {
	    	cout<<"fun";
		}
		accounts(double sal , double intE, double dep,double util,double rent,double adv,double rev,int y)
		{
			salaryExp=sal;
			interestExp=intE;
			depriciationExp=dep;
			utilityExp=util;
			rentExp=rent;
			advertizingExp=adv;
			revenue=rev;
			netIncome=Income(salaryExp,interestExp,depriciationExp,utilityExp,rentExp,advertizingExp,revenue);
			year=y;
		}
		void getData()
		{
			system("cls");
			cout<<"\nEnter Year:";
	        cin>>year;
	        cout<<"\nEnter Salary Expanse:";
         	cin>>salaryExp;
	        cout<<"\nEnter Interest Expanse:";
        	cin>>interestExp;
        	cout<<"\nEnter Depriciation Expanse:";
        	cin>>depriciationExp;
        	cout<<"\nEnter Utility Expanse:";
        	cin>>utilityExp;
        	cout<<"\nEnter Rent Expanse:";
        	cin>>rentExp;
         	cout<<"\nEnter Advertising Expanse:";
        	cin>>advertizingExp;
        	cout<<"\nEnter Revenue :";
	        cin>>revenue;
	        netIncome=Income(salaryExp,interestExp,depriciationExp,utilityExp,rentExp,advertizingExp,revenue);
		}
		template<class T>
        T Income(T sal,T intE,T dep,T util,T rent,T adv,T rev)
        {
            int i=rev-(sal+intE+dep+util+ rent+ adv);
            return i;
        }
        void BalanceSheet()
        {
        	cout<<"\n_____________________________________";
        	cout<<"\n***Balance Sheet of the year :"<<year;
            cout<<"\n*************************************";
            cout<<"\n*Company Revenue And Earnings :"<<revenue;
            cout<<"\n\nExpanses:";
			cout<<"\n_________";
			cout<<"\n\nSalary Expanse                :"<<salaryExp;
            cout<<"\nInterest Expanse              :"<<interestExp;
		    cout<<"\nDepreciation Expanse          :"<<depriciationExp;
		    cout<<"\nUtility Expanse               :"<<utilityExp;
		    cout<<"\nRent Expanse                  :"<<rentExp;
		    cout<<"\nAdvertising Expanse           :"<<advertizingExp;
		    
		    cout<<"\n_____________________________________";
			cout<<"\n***Net Income of Company   :"<<netIncome;
			cout<<"\n_____________________________________";
		}
		void registerRecord()
		{
			getData();
			fstream f;
			f.open("AccountsRecord.txt",ios::app|ios::binary);
			f.write((char*)this,sizeof(*this));
			f.close();
		}
		void viewRecord()
		{
			fstream f;
			f.open("AccountsRecord.txt",ios::in|ios::binary);
			if(!f)
			    cout<<"\nFile Not Found  ";
			else
			{
				f.read((char*)this,sizeof(*this));
				while(!f.eof())
				{
				    BalanceSheet();
				    f.read((char*)this,sizeof(*this));
				    
				}
				f.close();
			}
			
		}
		accounts operator +(accounts obj)
		{
		    netIncome=netIncome+obj.netIncome;
		    return obj;
		}
		friend istream&operator>>( istream&os, accounts &e );
		

		~accounts()
		{
		}
};
istream&operator>>( istream&os, accounts &e )
{
	cout<<"\nEnter Year:";
	os>>e.year;
	cout<<"\nEnter Salary Expanse:";
	os>>e.salaryExp;
	cout<<"\nEnter Interest Expanse:";
	os>>e.interestExp;
	cout<<"\nEnter Depriciation Expanse:";
	os>>e.depriciationExp;
	cout<<"\nEnter Utility Expanse:";
	os>>e.utilityExp;
	cout<<"\nEnter Rent Expanse:";
	os>>e.rentExp;
	cout<<"\nEnter Advertising Expanse:";
	os>>e.advertizingExp;
	cout<<"\nEnter Revenue :";
	os>>e.revenue;
	
	
	
}
class salaryManager
{
	protected:
		int extrahrs;
		int sal;
	public:
		salaryManager()
		{
			extrahrs=0;
			sal=0;
		}
		salaryManager(int grade,int extrahrs)
		{
			if(grade<3)
			{
				sal =10000+bonusCal(extrahrs);
				
			}
			else if(grade >=3&&grade<7)
			{
				sal =15000+bonusCal(extrahrs);
			}
			else if(grade >=7 &&grade <14)
			{
				sal=20000+bonusCal(extrahrs);
			}
			else if(grade >=14 &&grade <16)
			{
				sal=40000+bonusCal(extrahrs);
			}
			
			else if(grade >=16 &&grade <20)
			{
				sal=100000+bonusCal(extrahrs);
			}
		}
		float bonusCal(int hrs)
		{
			return hrs*200.98;
		}/////////////////return fun banao
		float getSal(int grade,int extrahrs)
	    {
	    	if(grade<3)
			{
				return sal =10000+bonusCal(extrahrs);
				
			}
			else if(grade >=3&&grade<7)
			{
				return sal =15000+bonusCal(extrahrs);
			}
			else if(grade >=7 &&grade <14)
			{
				return	sal=20000+bonusCal(extrahrs);
			}
			else if(grade >=14 &&grade <16)
			{
				return	sal=40000+bonusCal(extrahrs);
			}
			
			else if(grade >=16 &&grade <20)
			{
				return	sal=100000+bonusCal(extrahrs);
			}
		}
	    
};
class employee:public salaryManager,virtual public Company
{
	protected:
		static int ID;
		char name[101];
		char contact[13];/// hasan yaha polymorphism ghusao
		char nic[20];
		int grade,t;
	
	
	public:
		employee()
		{
			ID=0;
		}
		
	    void fun()
	    {
	    	cout<<"fun";
		}
		void getdata()
		{
			   ++ID;
			   fflush(stdin);
		
			   cout<<"\nEnter the Name :";
				cin.getline(name,19,'\n');
				fflush(stdin);
		
				//cin.ignore();
				
				cout<<"\nEnter the contact :";
					cin.getline(contact,12,'\n');
					fflush(stdin);
		
					//cin.ignore();
				cout<<"\nEnter the Nic :";   ///isko karo edit
					cin.getline(nic,19,'\n');
					fflush(stdin);
		
				cout<<"\nEnter the Designation Grade :";
				cin>>grade;
				fflush(stdin);
		}
		void addEmployee()
		{
			
			    
	
				getdata();
				
				
				fstream f;
				f.open("Employee.txt",ios::app|ios::binary);
			    f.write((char*)this,sizeof(*this));
				f.close();
			
		}
		
		void displayAllData(int d)//All read
		{   cout<<"WWWW";
			fstream f;
			f.open("Employee.txt",ios::in|ios::binary);
			if(!f)
			    cout<<"\nFile Not Found  ";
			else
			{
				f.read((char*)this,sizeof(*this));
				while(!f.eof())
				{
				    display();
				    f.read((char*)this,sizeof(*this));
				    
				}
				f.close();
			}
		}
		int display()
		{
			cout<<"\n______________________________________________________________";
			cout<<"\nEmployee ID                 :K-"<<ID+1<<ID+3;
			cout<<"\nName Of Employee            :"<<name;
	    	
			cout<<"\nNic No.                     : "<<nic;
			
			cout<<"\nContact No                  :"<<contact;
		
			cout<<"\nEnter the Designation Grade :"<<grade;
			cout<<"\nExtra Hours :";
			cin>>extrahrs;
			cout<<"\n______________________________________________________________";
			cout<<"\nSalary + Bonus = "<<getSal(grade,extrahrs);
		}
		void searchData()
		{
			char namesearch[101];
			getch();
			cout<<"\nEnter the Name of Empoylee you want to search:";
			cin.getline(namesearch,19,'\n');
			cin.getline(namesearch,19,'\n');
			ifstream f;
			f.open("Employee.txt",ios::in|ios::binary);
			if(!f)
			    cout<<"\nFile not found !";
			else
			{
				f.read((char*)this,sizeof(*this));
				while(!f.eof())
				{
					if (!strcmp(namesearch,name))
					    display();
					f.read((char*)this,sizeof(*this));
				}
				f.close();
			}
		}
		void fireEmployee()
		{
			char namedelete[101];
			getch();
			cout<<"\nEnter the Name of Empoylee you want to fire from company:";
			
		    cin.getline(namedelete,19,'\n');
		    cin.getline(namedelete,19,'\n');
		    fflush(stdin);
			ifstream fi;
			ofstream fo;
			fi.open("Employee.txt",ios::in|ios::binary);
			if(!fi)
			   cout<<"\nFile not found !";
			else
			{
				fo.open("temp.txt",ios::out|ios::binary);
				fi.read((char*)this,sizeof(*this));
				while(!fi.eof())
				{
					if(strcmp(namedelete,name))
					   fo.write((char*)this,sizeof(*this));
					fi.read((char*)this,sizeof(*this));
				}
				fi.close();
				fo.close();
				remove("Employee.txt");
				rename("temp.txt","Employee.txt");
			}
		}
		
		~employee()
		{
		}
	
};
int employee::ID=0;
class LOGIN:public employee,public accounts ,public Queries,public sales
{
	private:
		int passwordEmp,passwordAdmin,passwordRetailer;
		string username;
	public:
		LOGIN()
		{
			passwordEmp=1234;
			passwordAdmin=4567;
			passwordRetailer=789;
			}
			 void fun()
	    {
	    	cout<<"fun";
		}
		friend  void status ();

		void loginWindow()
		{   
		    char l=219;
        	cout<<"\n\n\n\n\n\t\t\t\t      LOADING";
        	cout<<"\n\t\t\t    ";
        	for(int i=0;i<29;i++)
        	{
	         	for(int j=0;j<18e6;j++)
          		{
			
         		}
         		cout<<l;
         	}
 		    int c;
		    system("cls");
		    int choice;
		    cout<<"\n______________________________________________________________";
			cout<<"\n***********Welcome To Infinity Private Limited*********** ";
			cout<<"\n______________________________________________________________";
			
			cout<<"\n\n\n\n\n *Press 1 for login as Adminn ";
			cout<<"\n\n\n*Press 2 for login as Employee ";
			cout<<"\n\n\n*Press 3 for login as retailer ";
			cout<<"\n\n\n*Press 4 for Annonymous mode ";
			cout<<"\n";
			cin>>choice;
			fflush(stdin);
			
				try
				{
					if(choice>4||choice<1)
					{
						throw choice;
					}
				}
				catch(int choice)
				{
					cout<<"Wrong Input";
				}
			if(choice ==1)       ///////////////////////////////Admin
			{
				cout<<"\n______________________________________________________________";
			    cout<<"\n***********Welcome To Admin Mode*********** ";
			    cout<<"\n______________________________________________________________";
				system("cls");
				employee e;
				accounts a;
				Queries q;
					
				int pass;
				cout<<"\nEnter Username:";
				cin>>username;
				fflush(stdin);
				cout<<"\nEnter password :";
				cin>>pass;
			    if(pass==passwordAdmin)
				{
					int choice1;
					
				   while(choice1!=10)	
				  {
		//			
		
					fflush(stdin);
					getch();
					system("cls");
				
					cout<<"\n______________________________________________________________";
			        cout<<"\n***********Welcome To Admin Mode*********** ";
			        cout<<"\n______________________________________________________________";
					cout<<"\n\n*press 1 for add employee";
					cout<<"\n\n*press 2 for search employee";
					cout<<"\n\n*press 3 for Fire employee";
					cout<<"\n\n*press 4 for Display All DATA employee";
					cout<<"\n\n*press 5 for register Income Statement";
					cout<<"\n\n*press 6 for check the complete data of Income since start";
					cout<<"\n\n*press 7 for Checking the Queries ";
				
					cout<<"\n\n*press 10 for Exit :";
					cin>>choice1;
					try
			    	{
				    	if(choice1>10||choice1<1)
					    {
						    throw choice;
					    }
			    	}
				    catch(int choice)
				    {
					    cout<<"Wrong Input";
			    	}
			
					if(choice1==1)
					{
						system("cls");
						e.addEmployee();
					}
					else if(choice1==2)
					{
						system("cls");
						e.searchData();
					}
					else if(choice1==3)
					{
						getch();
					///	system("cls");
						e.fireEmployee();
					}
					else if(choice1==4)
					{
					//	system("cls");
						cout<<"*****************EMPLOYEE*****************";
						e.displayAllData(9);
					}
					else if(choice1==5)
					{
					///	system("cls");
						a.registerRecord();
					}
					
					else if(choice1==6)
					{///system("cls");
						a.viewRecord();
					}
					else if(choice1==7)
					{
						system("cls");
					     q.displayQueries(9);
					}
			      
				  }
					
				}
				else
				cout<<"\nWrong Password!!!!!";
			}/////////////////////////////////////////////////////admin
			if(choice ==2)       ///////////////////////////////Employee
			{
				system("cls");
				cout<<"\n______________________________________________________________";
			    cout<<"\n***********Welcome To Employee Mode*********** ";
			    cout<<"\n______________________________________________________________";
				
				employee e;
				accounts a;
				Queries q;
					
				int pass;
				cout<<"\nEnter Username:";
				cin>>username;
				cout<<"\nEnter the Password:";
			    //fflush(stdin)
				cin>>pass;
			    
				if(pass==passwordEmp)
				{
					int choice1;
					
				   while(choice1!=10)	
				  {
		//			
		
					fflush(stdin);
		            getch();
					system("cls");
				    cout<<"\n______________________________________________________________";
			        cout<<"\n***********Welcome To Employee Mode*********** ";
			        cout<<"\n______________________________________________________________";					
					cout<<"\n\n*press 1 for view Your Data";
					cout<<"\n\n*press 2 for view your salary";
					cout<<"\n\n*press 3 for post Queriee ,FAQ or complain regarding company aspects";
					cout<<"\n\n*press 4 for checking queries posted";
				
				
					cout<<"\n\n*press 10 for Exit :";
					cin>>choice1;
					try
			    	{
				    	if(choice1>10||choice1<1)
					    {
						    throw choice;
					    }
			    	}
				    catch(int choice)
				    {
					    cout<<"Wrong Input";
			    	}
					if(choice1==1)
					{
						e.searchData();
					}
					else if(choice1==2)
					{
						int g,hrs;
						
						cout<<"Enter your Grade";
						cin>>g;
						cout<<"Enter your extra hrs if any or else 0";
						cin>>hrs;
						e.getSal(g,hrs);
					}
					else if(choice1==3)
					{
						q.registerQuery();
					}
					else if(choice1==4)
					{
						q.displayQueries(9);
					}
				
			      
				  }
					
				} 
				else
				cout<<"\nWrong Password!!!!!";
			}if(choice ==3)       ///////////////////////////////Retailer
			{
				system("cls");
				cout<<"\n______________________________________________________________";
			    cout<<"\n***********Welcome To Retailer Mode*********** ";
			    cout<<"\n______________________________________________________________";
				sales s;
				Queries q;
					
				int pass;
				cout<<"\nEnter the Password for Retailer:";
			    //fflush(stdin)
				cin>>pass;
			    
				if(pass==passwordRetailer)
				{
					int choice1;
					
				   while(choice1!=10)	
				  {
		//			
		
					fflush(stdin);
		            getch();
					system("cls");
					cout<<"\n______________________________________________________________";
			        cout<<"\n***********Welcome To Retailer Mode*********** ";
			        cout<<"\n______________________________________________________________";
					cout<<"\n\n*press 1 change price";
					cout<<"\n\n*press 2 to buy";
					cout<<"\n\n*press 3 to check price";
					cout<<"\n\n*press 4 for post Queriee ,FAQ or complain regarding company aspects";
					cout<<"\n\n*press 5 for checking queries posted";
				
					cout<<"\n\n*press 10 for Exit :";
					cin>>choice1;
					if(choice1==1)
					{
						s.changeprice();
					}
					else if(choice1==2)
					{
						s.buy();
					}
					else if(choice1==3)
					{
						s.showprice();
					}
					else if(choice1==4)
					{
						q.getquery();
						q.registerQuery();
					}	
					else if(choice1==5)
					{
						q.displayQueries(3);
					}
				
			      
				  }
					
				} 
				else
				cout<<"\nWrong Password!!!!!";
			}
			if(choice==4)
			{
				
				int choice1;
				system("cls");
				cout<<"\n______________________________________________________________";
			    cout<<"\n***********Welcome To anonymous Mode*********** ";
			    cout<<"\n______________________________________________________________";
			    cout<<"\npress 1 for Company Prospectus ";
			    cin>>choice1;
			    if(choice1==1)
				{
					status();
				}   
			}
			   
		}
		
		
};
int main()
{
    
	LOGIN l;
	l.loginWindow();
	
}
