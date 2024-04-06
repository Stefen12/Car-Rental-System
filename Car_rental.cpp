#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip> 
//Brought To You by code-projects.org
// included required library files
using namespace std;
class customer // customer class
{
	private:
	public:
	string customername;
    string carmodel;
    string carnumber;
    char data;
    // variables defined in this class in public mode.
};
class rent : public customer // inhereted class from customer class
{
	public:
	int days=0,rentalfee=0; // additional int vatiables defined
	void data()
	{
		int login();
	login();
	cout << "\t\t\t\tPlease Enter your Name: "; //taking data from the user
    cin >> customername;
    cout<<endl;
    do
    {
        cout <<"\t\t\t\tPlease Select a Car"<<endl; //giving user a choice to select among three different models
        cout<<"\t\t\t\tEnter 'A' for Tesla 20011."<<endl;
        cout<<"\t\t\t\tEnter 'B' for Hyundai 2015."<<endl;
        cout<<"\t\t\t\tEnter 'C' for Ford 2017."<<endl;
        cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
 cout<<"--------------------------------------------------------------------------"<<endl;
 if(carmodel=="A")
 {
 	system("CLS");
 
		cout<<"You have choosed Tesla model 2011"<<endl;
		 ifstream inA("A.txt"); //displaying details of model A
         char str[200];
         while(inA) {
         inA.getline(str, 200);  
         if(inA) cout << str << endl;
}
sleep(2);
  }
  if(carmodel=="B")
  {
  	system("CLS");
  
		cout<<"You have choosed Hyundai model 2015"<<endl;
		 ifstream inB("B.txt"); //displaying details of model B
         char str[200];
         while(inB) {
         inB.getline(str, 200);  
         if(inB) cout << str << endl;
         
     }
     sleep(2);
 }

