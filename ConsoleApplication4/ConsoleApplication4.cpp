
#include "pch.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool start =false;
// clg codes from program 29 all will be done by using the same example 
// well i tried using vector for push and pop operations but i was unable if anyone does it please then upload the code to my repo. @Binit specially u bro 
// well i was unable hoping u can do.
/*
class real_node
{
public:
	real_node *prev;
	real_node *next;
	real_node()
	{
		prev = NULL;
		next = NULL;
	}
	void del()
	{
		real_node *tmp;
		if (start)
		{
			tmp = Start;
			Start = tmp->next;
			delete(tmp);
		}
		else
		{
			cout << "The list is empty" << endl;
		}
	}
};
template <class T >
class node: public real_node
{
	public:
		T t;
		node(T ty)
		{
			t = ty;
		}
		void insert(T ty)
		{
			
				node *fresh_node = new class node;
				t->ty;
				prev->NULL;
				next->NULL;
				if (start==false)
				{
					Start=fresh_node;
					Start->next = NULL;
					start = true;

				}
				else
				{
					Start->prev = fresh_node;
					fresh_node->next = Start;
					Start = fresh_node;
				}
		}
	/*	void del()
		{
			node *tmp;
				if (start)
				{
					tmp = Start;
					Start = tmp->next;
					delete(tmp);
				}
				else
				{
					cout << "The list is empty" << endl;
				}
		}
	
		void show()
		{
			node *tmp;

			for (tmp = Start; tmp->next != NULL; tmp = tmp->next)
			{
				cout << tmp->t;
			}
			
		}
		
};
real_node *Start=NULL;

*/

// well only doubly linked list is not done will do tonight man this is awesome c++ never felt so good

class I_am_Exception : public exception {
public:
	const char * what() const throw()
	{
		return "Zero se divide mat karo how can someone be so menatly disabled \n";//Though i am testing again and again myself
	}
};

template <class T>
class Tester_boi
{
public:
	T a;
	T b;
	Tester_boi()
	{
		cout << "The constructor is call MoFo"<<endl;
	}
	Tester_boi(T a, T b)
	{
		this->a = a;
		this->b = b;
		cout << "Paramaterized constructor is called" << endl;
	}
	void Max()
	{
		T c = (a > b) ? a : b;
		cout << "The Greatest is " << c << endl;
	}
	~Tester_boi()
	{
		cout << "Destructor Called"<<endl;
	}

};

template <class T>
T Square(T n1)
{
	return (n1*n1);

}
class jojo
{
	string name;
	int age;
	string sex;
	float height;
public:
	void reader()
	{
		cout << "Enter the name of the person ";
		cin >> name;
		cout << "Enter the age of the person";
		cin >> age;
		cout << "Enter the gender of the person";
		cin >> sex;
		cout << "Enter the height of the person";
		cin >> height;

	}
	void hamon()
	{
		cout << "The name is " << name << endl;
		cout << " The age is " << age << endl;
		cout << "The gendder is " << sex << endl;
		cout << "The height is " << height << endl;
	}
};
class hotel
{
	string name;
	float amount;
public:
	void get()
	{
		cout << "Enter the name ";
		cin >> name;
		cout << "Enter the amount paid";
		cin >> amount;
	}
	void put()
	{
		cout << "The name is " << name << endl;
		cout << "The amount paid " << amount << endl;
	}
};

int main()
{
	
	
	/*ofstream writer("xD.txt");
	if (writer.is_open())
	{
		writer << "Man something is writen here lolololol. Well i am listening to dj snake while writing this " << endl;
		cout << "The file writing experince was successful boi " << endl;

	}
	else
	{
		cout << "Kuch bhi nahi likha bro xD" << endl;
	}
	writer.close();
	cout << "Now reading the file " << endl;
	
/*
	ifstream reader("xD.txt");
	char str[100];
	
	int ctr=0;
	if (reader.is_open())
	{
		while (!reader.eof())
		{	
			reader.getline(str, 100);
			cout << str;
		}
	}
	else
	{
		cout<< "Unable to open the file " << endl;
	}
	reader.close();
	cin.get();
	
	// Proram 30 is below and 29 is above vice a versa for the  next codes so pls dont confuse 
	cout << "Now reading the file word by word" << endl;
	ifstream reader("xD.txt");
	char str[20];

	int ctr = 0;
	if (reader.is_open())
	{
		while (!reader.eof())
		{
			reader >> str;;
			cout << str << " ";
		}
	}
	else
	{
		cout << "Unable to open the file " << endl;
	}
	reader.close();
	cin.get();

	//Program 31 is bel. and 30 is above 

	cout << "Now reading the file and display the no words and spaces "<< endl;
	ifstream reader("xD.txt");
	 char str[100];
	int tot=0;
	int ctr = 0;
	if (reader.is_open())
	{
		while (!reader.eof())
		{
			reader.getline(str, 100);
		}
		for (int i = 0; i < 100; i++)
		{
			if (strcmp(str," ")==0)
			{
				ctr++;
			}
		}
		tot = strlen(str);
		cout << "The no of the total spaces in the string is " << ctr<<endl;
		cout << "The total no of the wordds in the string is " << tot - ctr << endl;
	}
	else
	{
		cout << "Unable to open the file " << endl;
	}
	reader.close();
	cin.get();
	//Program 32 is below and 31 is above 
	/*cout << "Now reading the file and going to remove the spaces and endl etc " << endl;
	ifstream reader("xD.txt");
	ofstream writer("xD2,txt");
	char str[100];
	int tot=0;
	int ctr = 0;
	if (reader.is_open())
	{
		while (!reader.eof())
		{
			reader >> str;
			cout << str;     //well in this mode there will only characters be read so there is no need to waste time for thinking a good way to find the spaces 
			writer << str;	 //and then editing the string so that the other string contain the characters without spaces
			
		}
	
		cout << "The file has been writen no worries here " << endl;
	}
	else
	{
		cout << "Unable to open the file " << endl;
	}
	reader.close();
	writer.close();
	cin.get();
	
	//Program 33 is bel. and 32 is abo. 
/*	jojo j1;
	j1.reader();
	ofstream Jojo_writer("Jojo.txt",ios::beg);


	Jojo_writer.write((char*)&j1, sizeof(j1));
	
	Jojo_writer.close();
	jojo j2;
	ifstream Jojo_reader("Jojo.txt", ios::beg);

	Jojo_reader.read((char*)&j2, sizeof(j2));
	j2.hamon();
	
	//Program 34 is bel. and 33 is above 
/*
	hotel h1, h2;
	h1.get();
	h2.get();

	ofstream hotel_writer("Hotel.txt", ios::beg);
	
	hotel_writer.write((char*)&h1, sizeof(h1));
	hotel_writer.write((char*)&h2, sizeof(h2));

	hotel_writer.close();
	ifstream hotel_reader("Hotel.txt", ios::in);
	int size=0;
	
	hotel h5;
	while (!hotel_reader.eof())
	{
		hotel_reader.read((char*)&h5, sizeof(h5));
		size++;
	}
	cout << size-1;
	
//Program 35 is bel. and 34 is abo

/*ofstream writer1("lol1.txt");
if (writer1.is_open())
{
	writer1 << "hell " << endl;
	cout << "The file writing experince was successful boi " << endl;

}
else
{
	cout << "Kuch bhi nahi likha bro xD" << endl;
}
writer1.close();
ofstream writer2("lol2.txt");
if (writer2.is_open())
{
	writer2 << " Yeah" << endl;
	cout << "The file writing experince was successful boi " << endl;

}
else
{
	cout << "Kuch bhi nahi likha bro xD" << endl;
}
writer2.close();

cout << "Now merging the files " << endl;


	ifstream reader1("lol1.txt");
	ifstream reader2("lol2.txt");	
	ofstream writert("lol_mer.txt");
	
	char str[20];
	//int ctr=0;
	while (!reader1.eof())
	{
		reader1 >> str;
	//	writer << str;
	}
	writert << str;
	while (!reader2.eof())
	{
		reader2 >> str;
	//	writer << str;
	}
	writert << str;
	reader1.close();
	reader2.close();
	cin.get();
	writert.close();

	
	
	// Program 37 is bel. and 35 is above well i did 37 first it was easy 

/*	int n;
	cout << "Enter a integer to get its square";
	cin >> n;
	cout << endl << "Its square is " << Square(n);

	float f;
	cout << endl<<"Enter the float to get its square";
	cin >> f;
	cout << endl << "Its Square is" << Square(f);

	long double d ;
	cout << endl<<"Enter the double to get its square";
	cin >> d;
	cout << endl << "Its Square is" << Square(d);

	

// Program 36 is bel and 37 is above 
		//well this is not working man will b thinking on it again 
	node <int> mynode(10);
	node<float>	mynode1(20); 
*/
	
// Program 38 is below
/*
Tester_boi<int> int_no(20, 234);
Tester_boi<double> double_no(3.12, 41.523213);
Tester_boi<char> char_cha('a', 'A');
Tester_boi<string> string_char("Anshuman", "Ankur");
int_no.Max();
double_no.Max();
char_cha.Max();
string_char.Max();
	*/

	// Program 39 is bel. and 38 is above 
	/*
	try 
		{
		int arr[12];
		int x;
		cout << "Enter the range of the expression ";
		cin >> x;
		if (x < 12)
			{
				throw "This is out of bonds a**hole";
			}
		}
		catch (const char* e)
		{
			cout << e <<endl;
		}
		*/
	
	//Program 40 is bel. and 39 is above 

		try
		{
			int x, y;
			cout << "Enter the two numbers : \n";
			cin >> x >> y;
			if (y == 0)
			{
				I_am_Exception z;
				throw z;
			}
			else
			{
				cout << "x / y = " << x / y << endl;
			}
		}
		catch (exception& e)
		{
			cout << e.what();
		}

}

