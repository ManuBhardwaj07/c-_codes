#include<iomanip>
#include<cmath>
using namespace std;
class Point
{
    int x,y;
    friend void Distance(Point P1,Point P2);
    public :
            Point(int a,int b)
            {
                x=a;
                y=b;
            }

            void displayPoint()
            {
                cout<<"The coorinate is ("<<x<<","<<y<<")"<<endl;
            
            }
};
void Distance(Point P1,Point P2)
{
    int difference_x=pow((P2.x-P1.x),2);
    int difference_y=pow((P2.y-P1.y),2);
    int difference_xy=sqrt(difference_x+difference_y);
    cout<<"The Distance b/w two point is "<<difference_xy<<endl;
}
int main()
{
    Point a1(5,8);
    Point a2(6,2);
    Distance(a1,a2);

    Point b1(5,7);
    Point b2(2,2);
    Distance(b1,b2);

    Point c1(6,4);
    Point c2(6,5);
    Distance(c1,c2);
    return 0;
}