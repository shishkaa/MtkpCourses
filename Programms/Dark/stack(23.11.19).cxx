#include <iostream>
using namespace std;
class Stack
{
  private:
	int len = 0;
	int *arr = new int[len + 2048];

  public:
	Stack()
	{
		this->len = 0;
	}
	~Stack()
	{
		delete[] arr;
	}
	void pop()
	{
		if (len == 0)
		{
			cout << "no";
		}
		else
		{
			len -= 1;
		}
	}
	void push(int value)
	{
		arr[len] = value;
		len += 1;
	}
	int top()
	{
		return arr[len - 1];
	}
	void out()
	{
		for (int i = 0; i < len; i++)
		{
			cout << arr[i] << endl;
		}
	}
	void clear(){
		len=0;
	}
};
int main()
{
	Stack stack;
	stack.push(10);
	stack.push(11);
	stack.push(12);
	stack.pop();
	stack.push(13);
	stack.push(14);
	stack.top();
	stack.out();
	stack.clear();
	
}