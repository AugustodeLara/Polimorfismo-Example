#include<iostream>
using namespace std;

class base
{
public:
	virtual int soma(int x, int y)
	{
		return(x + y);
	}
};

class derivada:public base
{
public:
	virtual int soma(int x, int y)
	{
		cout << "Na derivada 1 a soma e: " << x + y << endl;
		return(x + y);
	}
};


class derivada2 :public base
{
public:
	virtual int soma(int x, int y)
	{
		cout << "Na derivada 2 a soma e: "<< x + y << endl;
		return(x + y);
	}
};

int main()
{
	base *d = new derivada;
	d->soma(10, 2);

	d = new derivada2;
	d->soma(5, 2);

	system("pause");
	return 0;
}
