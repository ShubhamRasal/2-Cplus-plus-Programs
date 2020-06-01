#include<iostream>
#include<conio.h>
using namespace std;                            //global namespace std


template <class M1 , class M2>                  //template syntax

class multitemp
{
   private :
             M1 a;                             // variable of class M1
             M2 b;                             // variable of class M2
   public  :
             multitemp(M1 x,M2 y);             // parametarised constructor
             void display()       ;            // fuction prototype
};

template <class M1 , class M2>                  //template class declaration
multitemp <M1,M2>:: multitemp(M1 x, M2 y)      //contructor definition
{
          a = x;
          b = y;
}

template <class M1 , class M2>                  // template class declaration
void multitemp<M1,M2> :: display()             //display function definition
{
     cout << "(" <<a <<"," << b <<")" <<endl;
}

int main()
{
    multitemp<int,char>k1(3,'s');             // first variable is int and second is character
    k1.display();
    
    multitemp<char,int>k2('A',5);             //first parameter is character and second is int
    k2.display();
    
    multitemp<int,float>k3(10,3.2f);          //first parameter is int and second is float
    k3.display();
    
    multitemp<float,int>k4(5.5f,1);           //first parameter is float and second is int
    k4.display();
    
    multitemp<int,float>k5(7,5.7);            //first parameter is int and second is float
    k5.display();
    
    multitemp<float,int>k6(9.9,5);            //first parameter is float and second is int
    k6.display();
    
    multitemp<float,double>k16(7.1f,5.7);     //first parameter is float and second is double
    k16.display();
    
    multitemp<double,float>k7(8.7,3.4f);      //first parameter is double and second is float
    k7.display();
    
    multitemp<int,int>k8(7,5);                //first parameter is int and second is int
    k8.display();
    
    getch();
    return 0;
}