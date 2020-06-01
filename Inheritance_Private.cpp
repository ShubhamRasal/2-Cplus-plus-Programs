/* 
   THE FOLLOWING PROGRAM WILL ILLUSTRATES :
	   THE USE OF PRIVATE INHERITANCE =>
		i.e. the class which gets privately inherited from the base class...
*/

#include<iostream>

// base class declaration goes from here...

class Base
{
//	3 integers declared inside Base under the 3 access specifiers...
	public:
		int m_nPublic;

	private:
		int m_nPrivate;

	protected:
		int m_nProtected;
};

//	Pri class declaration... which is privately inherited from the Base class...
class Pri: private Base
{
// 	Private inheritance means:
//	m_nPublic becomes private
// 	m_nPrivate stays private
// 	m_nProtected becomes private

/*******************************************************************************************
 	All members from the base class come with private access specifier in the derived class
	  that means, you cannot access any of the base class member outside the derived class
	  	 if it is "privately inherited"...
********************************************************************************************/

	public:
		Pri()
		{
			// The derived class always uses the immediate parent's class access specifications
			// Thus, Pub uses Base's access specifiers

			m_nPublic = 1; // Allowed: anybody can access public members

			//m_nPrivate = 2; // not Allowed: derived classes can't access private members in the base class!

			m_nProtected = 3; // Allowed: derived classes can access protected members
		}
};

int main()
{
/*
	 Outside access for the members of class depends on their access specifiers.
	 Note that because Pri has inherited privately from Base,
	 all members of Base have become private when access through "Pri".
*/

// ******** APPLY THE CONCEPT OF TYPE OF INHERITANCE FOR THE DERIVED CLASS... ********

	Pri cPri;					// object for "Pri" class is created...

	//cPri.m_nPublic = 1; 		// not Allowed: m_nPublic is now a private member when accessed through Pri
	
	//cPri.m_nPrivate = 2; 		// not Allowed: can not access private members from outside class

	//cPri.m_nProtected = 3;	// not Allowed: m_nProtected is now a private member when accessed through Pri


// ******* APPLY THE CONCEPT OF ACCESS SPECIFIER FROM THE "Base" CLASS... *********

	// However, we can still access Base members as normal through 'Base' :
	Base cBase;

	cBase.m_nPublic = 1; 		// Allowed, m_nPublic is public...

	//cBase.m_nPrivate = 2; 	// not Allowed, m_nPrivate is private...

	//cBase.m_nProtected = 3; 	// not Allowed, m_nProtected is protected...

	return 0;
}
