/* 
   THE FOLLOWING PROGRAM WILL ILLUSTRATES :
	   THE USE OF PROTECTED INHERITANCE =>
		i.e. the class which gets protectedly inherited from the base class...
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

class Pro : protected Base
{
// 	protected inheritance means:
// 	m_nPublic becomes protected
// 	m_nPrivate stays private
// 	m_nProtected stays protected

// 	public and protected members from the base class come with protected access specifier 
//		and private members come with private access specifier only...

	public:
		Pro()
		{
			// The derived class always uses the immediate parent's class access specifications
			// Thus, Pro uses Base's access specifiers

			m_nPublic = 1; // Allowed: anybody can access public members

			//m_nPrivate = 2; // not Allowed: derived classes can't access private members in the base class!

			m_nProtected = 3; // Allowed: derived classes can access protected members of it's immediate parent...
		}
};

int main()
{
/*
	Outside access uses the access specifiers of the class being accessed.
	In this case, the access specifiers of cPro.  Because Pro has inherited protectedly from Base,
	public and protected members of base class becomes protected and private remains private.
*/

// ******** APPLY THE CONCEPT OF TYPE OF INHERITANCE FOR THE DERIVED CLASS... ********

	Pro cPro;					// object for "Pro" class is created...

	//cPro.m_nPublic = 1; 		// not Allowed: can not access protected members outside class

	//cPro.m_nPrivate = 2; 		// not Allowed: can not access private members from outside class
	
	//cPro.m_nProtected = 3; 	// not Allowed: can not access protected members from outside class


// ******* APPLY THE CONCEPT OF ACCESS SPECIFIER FROM THE "Base" CLASS... *********

	// However, we can still access Base members as normal through 'Base':

	Base cBase;					// object for "Base" class is created...

	cBase.m_nPublic = 1; 		// Allowed, m_nPublic is public...

	//cBase.m_nPrivate = 2; 	// not Allowed, m_nPrivate is private...

	//cBase.m_nProtected = 3; 	// not Allowed, m_nProtected is protected...

	return 0;
}
