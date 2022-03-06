#include <iostream>
#include <fstream>
#include <string.h>
#include <Windows.h>

using namespace std;

void login();
void registration();


int main()

{
    int c;
    cout<<"Main Menu"<<endl;
    cout<<"Press 1 to Login"<<endl;
    cout<<"Press 2 to Register"<<endl;
    cout<<"Press 3 to Exit"<<endl;

    cout<<":";
    cin>>c;
    cout<<endl;

    switch (c)
    {
        case 1:
            login();
            break;

        case 2:
            registration();
            break;

        case 3:
            break;

        default:
        system("cls");
        cout<<"it seems you've selected a number that wasn't in the list, please reslect another number!"<<endl;
    }


}

    void login()
    {
        int count;
        string userid, password, id, pass;
        system("cls");
        cout<<"Please enter the username then password : "<<endl;
        cout<<"Username : ";
        cin>>userid;
        cout<<"Password : ";
        cin>>pass;

        ifstream input("records.txt");

        while (input>>id>>pass)
        {
            if (id==userid && pass==password)
            {
                count=1;
                system("cls");
            }

        }
        input.close();

        if (count == 1)
        {
            cout<<userid<<"you've logged in successfully";
            system("cls");
            main();
        }
        else{
            cout<<"Invalid credentials, please try again.";
            main();
        }
    }


    void registration()
    {
        string ruserID,rpassword,rid,rpass;
        system("cls");
        cout<<"Enter your desired username : ";
        cin>>ruserID;
        cout<<"Enter your desired password : ";
        cin>>rpassword;

        ofstream f1("records.txt", ios::app);
        f1<<ruserID<<' '<<rpassword<<endl;
        cout<<"Your registration was successful";
        system("cls");
        main();

    } 