////without obj static possible
#include<iostream>
using namespace std;
class st
{
public:
int x;
static int y;//declaration
};
int st::y;//definition
int main(){
st a,b,c;
a.y=200;
b.y=400;
c.y=500;
st::y=600;// without obj possible
cout<<"y-"<<a.y<<endl;
cout<<"y-"<<b.y<<endl;
cout<<"y-"<<c.y<<endl;
cout<<"y-"<<st::y<<endl;
}

