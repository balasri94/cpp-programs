#include<iostream>
using namespace std;
class st
{
public:
int x;
static int y;
};
int st::y;
int main(){
st a;
a.x=200;
a.y=800;
cout<<"x-"<<a.x<<" "<<"y-"<<a.y<<endl;
}

