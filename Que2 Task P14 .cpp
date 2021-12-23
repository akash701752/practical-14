/*  Practical 14
    Que 1 : WAP which illustrate complie and dynamic binding 
    
    Task  : Create a base class pointer which holds address of child class
*/ 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Base
{
    public :
       Base()
       {
           cout<<"This is Base Class Constructor "<<endl ;
       }
       virtual ~Base()
       {
           cout<<"This is Base Class Destructor "<<endl ;
       }
};
class Child : public Base
{
    public :
        Child()
        {
            cout<<"This is Child Class Constructor "<<endl ;
        }
        ~Child()
        {
            cout<<"This is Child Class Destructor "<<endl ;
        }
};
int main()
{
    cout<<"\t\t Akash Yadav 200111076 A "<<endl ;
    Child c ;
   
    Base *p ;    // Pointer of Base Class
    p = &c  ;  // Pointer have address of Child class object 
    
    delete p; // This is Undefined Behaviour to overcome this problem use virtual Destructor in base class
    return 0;
}
/*
    Execution Flow of Constructor and Destructor :
        Base  Class Constructor 
        Child Class Constructor 
        Child Class Destructor 
        Base  Class Destructor
    If we use delete p in which p points to child class object then it is a undefined Behaviour so overcome this problem
    use virtual Destructor .
*/

