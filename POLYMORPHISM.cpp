#include <iostream>
#include <cmath>
using namespace std;
const float a=3.14;
class Shapes{
    float rad;
public:
    int area(int s){
      return s*s;
}
    int area(int len,int bred){
       return len*bred;
    }
    float area(float rad){
       return a*pow(rad,2);
    }
    };
        int main()
        {
         Shapes obj;
         cout<<"The Area of the Square is " <<obj.area(10)<<endl;
          cout<<"The Area of the Rectangle is " <<obj.area(5,2)<<endl;
          cout<<"The Area of the Circle is " <<obj.area(5.525f)<<endl;
    return 0;
        }



