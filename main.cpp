#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int x1,y1,x2,y2,c1,c2;
    cout<<"Enter the coefficients for the two linear equations"<<endl;
    cin>>x1>>y1>>c1>>x2>>y2>>c2;

    //cout<<"The inputed equations are:\n"<<x1<<"x "<<y1<<"y\n"

    int a=y2*x1,b=y1*x2,c=c1*x2,d=c2*x1;
    if((c-d==0)&&(a-b==0)){cout<<"Infinite solutions"<<endl; return 0;}
    if(a-b==0){cout<<"No solutions"<<endl; return 0;}
    int y=(c-d)/(b-a);
    int x=(c1-y1*y)/x1;
    cout<<"Solution of the above two equations is:\nx = "<<x<<" y = "<<y<<endl;


    return 0;
}
