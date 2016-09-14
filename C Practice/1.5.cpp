#include <iostream>

using namespace std;

class Line
{
public:
		double length;
		void setLength(double len);
		doubel getLength;
};

double Line::getLength(void)
{
	return length;
}

void Line::setLength(double len)
{
	length=len;
}

int main(int argc, char *argv[]) {
	Line line;

	line.setLength(6.0);

	cout << "Length of line :" << line.length << endl;

	return 0;
}