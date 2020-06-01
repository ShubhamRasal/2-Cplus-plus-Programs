// eg. of user defined exceptions
// create an object of type queue and throw qfull and 
// qempty exceptions as and when reqd
#include <iostream.h>
#define SIZE 5

class queue
{
	private :
		int data[SIZE];
		int front, rear;

	public :
		// exception classes are defined as
		// nested classes
		class qfull
		{
		};

		class qempty
		{
		};

		// default constructor
		queue()
		{
			front = rear = -1;
		}
	
		void addq(int no)
		{
			// validation
			if (rear == SIZE-1)
				throw qfull();

			rear++;
			data[rear] = no;
			// check whether it is 1st element
			if (front == -1)
				front = 0;

			cout << "Element " << no << " inserted successfully" << endl;
		}

		int delq()
		{
			if (front == -1 || front > rear)
				throw qempty();

			return data[front++];
		}
};

void main()
{
	queue q;
	// add nos 10-50 in queue
	int no = 10;
	for (int i=1;i<=10;i++)
	{
		try
		{
			q.addq(no);
			no = no + 10;
		}
		catch (queue::qfull)
		{
			cout << "Queue is full" << endl;
			break;
		}
	 }
	// delete all el's from queue
	for (i=1;i<=10;i++)
	{
		try
		{
			cout << "Element deleted is " << q.delq() << endl;
		}
		catch (queue::qempty)
		{
			cout << "Queue is empty" << endl;
     			break;
		}
	}
}











		



