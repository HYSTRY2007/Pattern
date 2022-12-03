#include <iostream>

using namespace std;

int main()
{
  for(int i=1;i<6;i++)
  {
    if(i<2)
    cout<<"*"<<endl;
    else if(i<3)
    cout <<"**"<<endl;
    else if(i<4)
    cout <<"***"<<endl;
    else if(i<5)
    cout <<"****"<<endl;
    else if (i<6)
    cout <<"*****"<<endl;
    }return 0;
}