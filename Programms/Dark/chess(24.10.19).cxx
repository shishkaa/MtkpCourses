#include <iostream>
using namespace std;
void func(){
	int x, y, xx, yy;
	cin>>x>> y>> xx>> yy;
	if(((xx==x) || (xx==x+3) || (xx==x-3) || (xx==x+1) || (xx==x-1) && (yy==y) || (yy==y+3) || (yy==y-3) || (yy==y+1) || (yy==y-1))){
	cout<<"ход возможен";
	}else{
		cout<<"ход невозможен";
		}
}
int main()
{
cout<<"Введите начальные и конечные координаты положения коня"<<endl;
func();	
}