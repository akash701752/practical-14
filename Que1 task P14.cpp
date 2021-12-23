/*  Practical 14
    Que 1 : WAP which illustrate complie and dynamic binding 
    
    Task  : Create a base class pointer which holds address of child class
*/ 

#include <iostream>

using namespace std;
class Base
{
    public :
        virtual int add(int a,int b)  // virtual Function it will ignored at the complie time  so p->add(4,6) will run at run time
        {
            return (a+b) ;
        }
        int multi(int a,int b)
        {
            return (a*b) ;
        }
};
class Child : public Base
{
    public :
        int add(int a,int b) // Override  Method
        {
            return (a+b+1) ;
        }
};
int main()
{
    cout<<"\t\t Akash Yadav 200111076 A "<<endl ;
    Child c ;
   
    Base *p ;    // Pointer of Base Class
    p = &c  ;  // Pointer have address of Child class object 
  
    cout<<"p->add(5,10)   : "<< p->add(5,10)<<endl ; // Dynamic binding  because of virual function this will not call the base function add()
  
    cout<<"p->multi(5,6)  : "<< p->multi(5,6)<<endl;// Compile time Binding
   
    return 0;
}


