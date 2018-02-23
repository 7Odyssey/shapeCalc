#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Box
{
private:
int boxWidth, boxHeight, boxLength;
//boxVolume, boxArea;


public:
    Box()
    {
        boxWidth = 0;
        boxHeight = 0;
        boxLength = 0;
     cout << "Made a box!" << endl;
    }
    
void setWidth(int varWidth)
{
    boxWidth = varWidth;
}
void setHeight(int varHeight)
{
    boxHeight = varHeight;
}
void setLength(int varLength)
{
    boxLength = varLength;
}

int calcVolume()
{
  return  boxWidth * boxHeight * boxLength;
  
}
 
int calcArea(){
    return 2 * (boxWidth * boxHeight) + 2 * (boxLength * boxHeight) + 2 * (boxHeight * boxWidth);
}
};

class Sphere
{
private: 
    int sphWidth;
    //RADIUS

public:
    Sphere()
    {
        sphWidth = 0;
     
    }
    void setWidth(int varWidth)
    {
    sphWidth = varWidth;
    }
    int calcVolume()
    {
        return 4/3 * (3.14) * ((.5 * sphWidth) * (.5 * sphWidth) * (.5 * sphWidth));
        //FORMULA INCORRECT MUST CHECK
    }
    int calcArea()
    {
        return 4 * (3.14 * ((.5 * sphWidth) * (.5 * sphWidth) * (.5 * sphWidth)));
        //FORMULA INCORRECT MUST CHECK
    }
};

class Pyramid
{
private:
    int pyrWidth, pyrHeight, pyrLength;
public:
    Pyramid()
    {
        pyrWidth = 0;
        pyrHeight = 0;
        pyrLength = 0;
    }
void setWidth(int varWidth)
{
    pyrWidth = varWidth;
}
void setHeight(int varHeight)
{
    pyrHeight = varHeight;
}
void setLength(int varLength)
{
    pyrLength = varLength;
}
int calcVolume()
{
    return (pyrWidth * pyrHeight * pyrLength)/3;
}
int calcArea()
{
    return (pyrLength * pyrWidth + pyrLength) * sqrt(   ((pyrWidth/2)*(pyrWidth/2))+(pyrHeight * pyrHeight)    ) + (pyrWidth*sqrt(  ((pyrLength/2)*(pyrLength/2))+(pyrHeight*pyrHeight))  );
}

};

int main()
{
    int varWidth, varHeight, varLength = 0;
    int varVolume, varArea = 0;
    
    Box theBox = Box();
  
    cout << "Lets start with a box." << endl;
    cout <<"Please enter the width of a box: " << endl;
cin >> varWidth;

theBox.setWidth(varWidth);

    cout << "Please enter the height of a box: " << endl;
cin >> varHeight;
theBox.setHeight(varHeight);

    cout << "Please enter the length of a box: " << endl;
cin >> varLength;
theBox.setLength(varLength);

cout << "reached the end" << endl;

varVolume = theBox.calcVolume();
varArea = theBox.calcArea();
//varVolume = varWidth * varHeight * varLength;
//varArea = 2 * (varWidth * varHeight) + 2 * (varLength * varHeight) + 2 * (varHeight * varWidth);

cout << "The volume for your box: " << varVolume << endl;
cout << "The surface area for your box: " << varArea << endl; 

Sphere theSphere = Sphere();

cout << "Sphere"<< endl;
cout << "Please enter the diameter of the Sphere: " << endl;
cin >> varWidth;
theSphere.setWidth(varWidth);

varArea = theSphere.calcArea();
//FORMULA INCORRECT MUST CHECK
varVolume = theSphere.calcVolume();
//FORMULA INCORRECT MUST CHECK

cout << "The volume of your sphere is approximately: " << varVolume << endl;
cout << "The area of your sphere is: " << varArea << endl;

Pyramid thePyramid = Pyramid();
cout << "Pyramid" << endl;

cout << "Please enter the width of the Pyramid: " << endl;
cin >> varWidth;
thePyramid.setWidth(varWidth);

cout << "Please enter the height of the Pyramid: " << endl;
cin >> varHeight;
thePyramid.setHeight(varHeight);

cout << "Please enter the length of the Pyramid: " << endl;
cin >> varLength;
thePyramid.setLength(varLength);

varVolume = thePyramid.calcVolume();
varArea = thePyramid.calcArea();

cout << "The volume of your Pyramid is: " << varVolume << endl;
cout << "The area of your Pyramid is: " << varArea << endl;

}



