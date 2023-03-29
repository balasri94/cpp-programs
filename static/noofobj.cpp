//no of obj created find through static data member 
#include<iostream>
using namespace std;
class sd{
public:
static int c;
sd(){
c++;
}
~sd(){
c--;
}
void get(){
cout<<"count-"<<c<<endl;
}
};
int sd::c=0;

int main(){
sd a,b,c;
{
sd d,e;
d.get();
}
a.get();
}

