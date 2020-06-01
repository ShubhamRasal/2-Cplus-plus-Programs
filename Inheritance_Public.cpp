/* 
   THE FOLLOWING PROGRAM WILL ILLUSTRATES :
	   THE USE OF PUBLIC INHERITANCE =>
		i.e. the class which gets publically inherited from the base class...
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

class Pub: public Base
{
// 	Public inheritance means:
// 	m_nPublic stays public
// 	m_nPrivate stays private
// 	m_nProtected stays protected

// 	ALL THE MEMBERS COME IN THE DERIVED CLASS WITH THE ACCESS SPECIFIER,
//		WHATEVER THEY HAVING IN THE BASE CLASS AT THE TIME OF DECLARATION...

	public:

		Pub()
		{
			// 	The derived class always uses the immediate parent's class access specifications
			// 	Thus, Pub uses Base's access specifiers...

			m_nPublic = 1;		// Allowed: anybody can access public members

			//m_nPrivate = 2;	// not Allowed : NOONE can access private members in the base class

			m_nProtected = 3;	// Allowed: derived classes can access protected members of immediate parent...
		}
};

int main()
{
/*
	Outside access uses the access specifiers of the class being accessed.
 	In this case, the access specifiers of cPub.  Because Pub has inherited publicly from Base,
	no access specifiers have been changed.
*/

// ******** APPLY THE CONCEPT OF TYPE OF INHERITANCE FOR THE DERIVED CLASS... ********

	Pub cPub;					//	object of Pub class is declared...

	cPub.m_nPublic = 1;			// Allowed: anybody can access public members

	//cPub.m_nPrivate = 2;		// not Allowed: can not access private members from outside class

	//cPub.m_nProtected = 3;	// not Allowed: can not access protected members from outside class


// ******* APPLY THE CONCEPT OF ACCESS SPECIFIER FROM THE "Base" CLASS... *********

	// However, we can still access Base members as normal through 'Base':

	Base cBase;					// object for "Base" class is created...

	cBase.m_nPublic = 1; 		// Allowed, m_nPublic is public...

	//cBase.m_nPrivate = 2; 	// not Allowed, m_nPrivate is private...

	//cBase.m_nProtected = 3; 	// not Allowed, m_nProtected is protected...

	return 0;
}
