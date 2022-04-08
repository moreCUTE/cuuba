#include<iostream>
using namespace std;


class FlyingKoopa {
private:
	int xpos;
	int ypos;
	char dir;
	char dir2;
public:
	FlyingKoopa(int x, int y);
	void fly();
	void print();
};


int main() {
	
	
	FlyingKoopa koop(400, 400);
	FlyingKoopa koop2(200, 400);
	FlyingKoopa koop3(500, 100);
	while (1) {
		koop.fly();
		koop.print();

		koop2.fly();
		koop2.print();

		koop3.fly();
		koop3.print();

		system("pause");
	}
	
}

FlyingKoopa::FlyingKoopa(int x, int y) {
	xpos = x;
	ypos = y;
	dir = 'l';
	dir2 = 'u';


}

void FlyingKoopa::fly()
{
	if (xpos <= 0)
		dir = 'r';
	if (xpos >= 800)
		dir = 'l';
	if (dir == 'r')
		xpos += 10;
	if (dir == 'l')
		xpos -= 10;

	if (ypos <= 0)
		dir2 = 'u';
	if (ypos >= 400)
		dir2 = 'd';
	if (dir2 == 'u')
		ypos += 10;
	if (dir2 == 'd')
		ypos -= 10;
	
}

void FlyingKoopa::print()
{
	cout << endl;
	cout << "I'm a FlyingKoopa and I am at " << xpos << ", " << ypos << " going " << dir << " and " << dir2 << endl;
	cout << endl;
}
