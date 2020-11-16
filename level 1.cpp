#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

using namespace std; 
void level1()
{
	cout<<"\n \n \t   LEVEL : 1 \n \t ************* \n";
	srand((unsigned) time(0));
	int x, y, r, u, count = 0, i = 0;
	while(i<=4)
	{
		x = 10 + (rand() % 89);
		y = 10 + (rand() % 89);
		r = x + y;
		cout << "\t" << x << " + " << y << " = ";
		cin >> u;
		if(u == r)
		{
			count++;
			x = 0;
			y = 0;
		}
		i++;
	}
	cout<<"\n \n \t Score : "<<count;
}
int main()
{
	level1();
	getch();
	return 0;
}
