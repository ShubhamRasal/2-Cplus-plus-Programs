// eg-2 of user defined exception to handle qfull and qempty conditions
// use a single class to handle both the exceptions
#include <iostream.h>
#include <string.h>
#define SIZE 5

class queue
{
	private :
		int data[SIZE];
		int front, rear;
	public :
		class qfull_empty
		{
			private :
				char msg[50];
			public :
				qfull_empty(char *str)
				{
					strcpy(msg,str);
				}
				// a fn to retrieve the msg
				char *getMsg()
				{
					return msg;
				}
		};

		queue ()
		{
			front = rear = -1;
		}

		void addq(int no)
		{
			if (rear == SIZE-1)
				throw qfull_empty("Q is Full");

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
				throw qfull_empty("Q is Empty");

			return data[front++];
		}
};
		
void main()
{
	queue q;
	int i, no = 10;
	for (i=1;i<=10;i++)
	{
		try
		{
			q.addq(no);
			no += 10;
		}
		catch (queue::qfull_empty obje)
		{
			cout << obje.getMsg() << endl;
		}
	}
	for (i=1;i<=10;i++)
	{
		try
		{
			cout << "Element deleted is " << q.delq() << endl;
		}
		catch (queue::qfull_empty obje)
		{
			cout << obje.getMsg() << endl;
		}
	}
}	









