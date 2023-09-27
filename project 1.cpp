#include<iostream>
#include<fstream>
#include<string>
#include<windows.h> // To access windows library

using namespace std;

class shopping{
   int pricecode;
   float price,discount ;
   string productname;

   public:
       void loading();
       void menu();
       void administrator();
       void buyer();
       void add();
       void edit();
       void rem();
       void lst();
       void receipt();





};

  /* shopping::menu() This is the function name.
                    It appears to be a member function of a class named shopping.
                    The :: operator is used to specify that menu()
                    is a member of the shopping class.*/
  void shopping :: menu()
{
     m:
    int choice;
     string email,password;

         cout<<"\n\n\n\n\n";
  cout<<"\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
  cout<<"\n\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
  cout<<"\n\t\t      =                  WELCOME                  =";
  cout<<"\n\t\t      =                    TO                     =";
  cout<<"\n\t\t      =                  SHOPPING                 =";
  cout<<"\n\t\t      =                 MANAGEMENT                =";
  cout<<"\n\t\t      =                   SYSTEM                  =";
  cout<<"\n\t\t      =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=";
  cout<<"\n\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n";
  cout<<endl<<endl;

       cout<<"\t\t\t\t|      1)Administrator   |"<<endl;
       cout<<"\t\t\t\t|                        |"<<endl;
       cout<<"\t\t\t\t|      2) Buyer          |"<<endl;
       cout<<"\t\t\t\t|                        |"<<endl;
       cout<<"\t\t\t\t|      3)Exit            |"<<endl<<endl<<endl;
       cout<<"\t\t\t\t Please select:";
       cin>>choice;
        cout<<endl;
       switch(choice){
              case(1):
                  {
                      cout<<"\t\t\t\t______Please Login_______________"<<endl<<endl;
                      cout<<"\t\t\t\t      User ID :";
                      cin>>email;
                      cout<<endl;
                      cout<<"\t\t\t\t      Enter password:";
                      cin>>password;
                      cout<<endl;
                      if(email=="admin"  && password=="123"){

                        administrator();

                      }else{

                         cout<<"\t\t\t\t  Invalid Email ID or Password.  "<<endl;
                      }
                      break;
                   }
              case(2):
                {
                  buyer();

                }
              case(3):
                {

                    exit(0); /*In C++, exit(0) is a function call that is used to terminate a program.
                              Specifically, it is used to indicate a successful or normal termination of the program.*/

                }
              default:
                {
                    cout<<"Please select from the given options. ";
                }
            }
            goto m;
        }

 void shopping:: administrator(){
     Administrator_menu:
      int choice;
       cout<<"\n\n\t\t\t\t       Administrator menu  \n\n";
       cout<<"\t\t\t\t|______1)Add the product_______|"<<endl;
       cout<<"\t\t\t\t|                              |"<<endl;
       cout<<"\t\t\t\t|______2)Modify the product____|"<<endl;
       cout<<"\t\t\t\t|                              |"<<endl;
       cout<<"\t\t\t\t|______3)Delete the product____|"<<endl;
       cout<<"\t\t\t\t|                              |"<<endl;
       cout<<"\t\t\t\t|______4)Back to main menu_____|"<<endl;
       cout<<endl<<endl;
       cout<<"\t\t\t\t  Please enter your choice:";
       cin>>choice;

         switch(choice){
              case 1:
                {
                      add();
                      break;

                  }
              case 2:
                {
                    edit();
                    break;

                }
              case 3:
                {
                    rem();
                    break;
                }
              case 4:
                {
                    menu();
                    break;
                }
              default:
                {
                    cout<<"Invalid choice!!";
                }




                  }

         goto Administrator_menu;

         }
