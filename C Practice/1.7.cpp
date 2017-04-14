#include < iostream > 
using namespace std; 

class Line {
public:
void setLength(double len); 
doubel getLength(void); 
Line(double len); 

private:
	double length; 
}; 

Line::Line(double len) {
cout << "Object is being created, lenght = " << len << endl; 
}

void Line::setLength(double len) {
length = len; 
}

double Line::getLength(void) {
return length; 
}