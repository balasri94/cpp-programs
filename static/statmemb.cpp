#include<iostream>
using namespace std;
class w
{
int x;
static int y;
w(){//**************************constructor in private section**************
cout<<"default cons"<<endl;
x=100,y=200;
}
public:
static void create_obj(){
w obj;//********************single ton object**(vlc,taskmanager)*********
obj.getdata();
cout<<y<<endl;
cout<<obj.x<<endl;
}
void getdata(){
cout<<"x-"<<x<<" "<<"y-"<<y<<endl;
}
};
int w::y;

int main(){
w::create_obj();
}



