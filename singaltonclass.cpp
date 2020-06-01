#include<iostream>

using namespace std;

class demo
{
public :
	static demo obj();
    //cgdhdhgh
	static demo& getref()
	{
        
        
		return obj;
	}
//dfghfgh
private:
	demo()
	{
		cout<<"Inside constructor";
	}
};

demo demo::obj;
int main()
{
    demo &var = demo::getref();
    var.fun();
    // demo obj;
	
    demo obj2 = demo::getref();
    
    return 0;
}













