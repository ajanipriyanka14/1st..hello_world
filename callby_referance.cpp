#include<iostream.h>
#include<conio.h>
void swapnumber(int&x,int&y)
{
	int temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a,b;
	clrscr();
	cout<<"enter two number" ;
	cin>>a>>b;
	cout<<"befor swap a="<<a<<"b="<<b<<endl;
	swapnumber(a,b);
	cout<<"after swap a="<<a<<"b="<<b;
	getch();
	return 0;
}
