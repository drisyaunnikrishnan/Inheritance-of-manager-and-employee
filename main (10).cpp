#include<iostream>
#include<conio.h>
using namespace std;
class person
{
    
protected:
    char name[20];
    char address[20];
    char phno[10];
public:
       void getperson()
          {
               cout << "\n enter the person's name :";
               cin >> name;
               cout << "\n enter the address : ";
               cin >> address;
               cout << "\n enter the phone number :";
               cin >> phno;
          }
};

class employee : public person
   {
      protected:
          int emp_no;
          
      public:
        void getemp()
            {
                 cout << "\n enter the employee number :";
                 cin >> emp_no;
            }
   };
   
class manager : public employee
   { 
     protected:
          char designation[20];
          char departname[20];
          float basic_salary;
     public:
         void read()
            {
                cout << "\n enter the designation :";
                cin >> designation;cout << "\n enter the departname :";
                cin >> departname;cout << "\n enter the basic_salary :";
                cin >> basic_salary;
            }
     void display()
         {
              cout << " \n ********DETAILS********\n ";
              cout << "\n person name :" << name; 
              cout << "\n address :" << address;
              cout << "\n employee number :" << emp_no;
              cout << "\n designation :" << designation;
              cout << "\n departname :" << departname;
              cout << "\n basic_salary :" << basic_salary;
        }
   };
int main()
    {
        int n;
        cout << "\n enter the number of managers: "; 
        cin >> n; 
        manager obj[10];
        
        for (int i = 0; i < n; i++)
            {
                obj[i].getperson();
                obj[i].getemp();
                obj[i].read();
            }
            
        for (int i = 0; i < n; i++)
            {
                obj[i].display();
            }

    }