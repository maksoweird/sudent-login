#include <iostream>
#include <string>
#include  <conio.h>
using namespace std;

int main ()
{
    string userName;
    string userPassword;
    string pass ="";
    int loginAttempt = 0;
    bool menu_counter = true;
    bool login_counter = true;
    char check;
    char ch;
    

while (menu_counter = true){


    while (loginAttempt < 5)
    {
        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password:";
        ch = _getch();
    while(ch != 13){
        pass.push_back(ch);
        cout << '*';
       ch = _getch();
}
        if (userName == "mak" && pass == "mak")
        {
            cout << "Welcome mak!\n";
            break;
        }
        else if (userName == "mac" && pass == "mac")
        {
            cout << "\nWelcome mac!\n";
            break;
        }
        else
        {
            cout << "Invalid login attempt. Please try again.\n" << '\n';
            loginAttempt++;
        }
    }
    if (loginAttempt == 5)
    {
            cout << "Too many login attempts! The program will now terminate.";
            return 0;
    } 
while (login_counter = true){

    cout << "Thank you for logging in.\n";\
    cout << "What do you want to do next? \n";
    cout << "1.View my GWA\n";
    cout << "2.Check my remaining balances\n";
    cout << "3.Quit\n";
    cout << "Please choice a number:";
    cin  >>check;
    
    if (check == '1'){
    	
    	cout <<"========================================="<<endl;
    	cout <<"Your general weighted grades is:\n";
    	cout <<"1.25\n";
    	cout <<"congrats"<<endl;
    	return 0;
    	
	}
	else if (check == '2')
	{
		cout <<"your remaining balances is: 4895\n";
		return 0;
	}
	else if (check == '3')
	{
		menu_counter = false;
	}
	else{
		cout<<"error"<<endl;
		login_counter = false;
		
}
   
}
	}
}
	
	


