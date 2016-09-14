#include <iostream>

using namespace std;

class Box
{
public:
    double length;
    double breadth;
    double height;
    /*	double getVolume(void){
    		return length*breadth*height;
    	}*/

    double getVolume(void);
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);
};

double Box::getVolume(void)
{
    return length * height * breadth;
}

double Box::setLength(double len)
{
    length = len;
}

double Box::setBreadth(double bre)
{
    breadth = bre;
}

double Box::setHeight(double hei)
{
    height = hei;
}

int main(int argc, char *argv[])
{
    /*  Box Box1;
      Box Box2;
      double volume = 0.0;
      Box1.height = 5.0;
      Box1.length = 6.0;
      Box1.breadth = 7.0;

      Box2.height = 10.0;
      Box2.length = 12.0;
      Box2.breadth = 13.0;

      volume = Box1.height * Box1.length * Box1.breadth;
      cout << "Box1's volume: " << volume << endl;

      volume = Box2.height * Box2.length * Box2.breadth;
      cout << "Box2's volume: " << volume << endl;
    */
    Box Box1 ;
    Box Box2;
    double volume;

    Box1.setLength(6.0);
    Box1.setHeight(5.0);
    Box1.setBreadth(7.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    volume=Box1.getVolume();
    cout << "Box1's volume is :" << volume << endl;

    volume = Box2.getVolume();
    cout << "Box2's volume is :" << volume << endl;
    
    return 0;
}