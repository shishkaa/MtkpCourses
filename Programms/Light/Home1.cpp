
#include <iostream>
#include <string>
#include <stack>
using namespace std;


class Students
{
	private:

		string name;
		string second_name;
		int age;
		int course;

	public:

		Students()
		{

			this->name = " ";
			this->second_name = " ";
			this->age = 0;
			this->course = 0;
		}

		Students(string name, string second_name, int age, int course)
		{

			this->name = name;
			this->second_name = second_name;
			this->age = age;
			this->course = course;
		}

		~Students()
		{

		}

		void set_name(string in_name) 
		{
			name = in_name;
		}

		void set_second_name(string in_second_name)
		{
			second_name = in_second_name;
		}

		void set_age(int in_age)
		{
			age = in_age;
		}

		void set_course(int in_course)
		{
			course = in_course;
		}

		string get_name()
		{
			return name;
		}

		string get_second_name()
		{
			return second_name;
		}

		int get_age()
		{
			return age;
		}

		int get_course()
		{
			return course;
		}
};

int main()
{
	string name = " ", second_name = " ";
	int age = 0, course = 0;
	Students student[15];

	for (int i = 0; i<15; i++)
	{
		cout << "Input name: ";
		cin >> name;
		student[i].set_name(name);
		cout << "Input second name: ";
		cin >> second_name;
		student[i].set_second_name(second_name);
		cout << "Input age: ";
		cin >> age;
		student[i].set_age(age);
		cout << "Input course: ";
		cin >> course;
		student[i].set_course(course);
	}
	
	for (int i = 0; i<15; i++)
	{
		if (student[i].get_age() >= 18 && student[i].get_course() == 2) 
		{
			cout << "Name: ";
			cout << student[i].get_name() << endl;
			cout << "Second name: ";
			cout << student[i].get_second_name() << endl;
		
		}
	}
	
}
