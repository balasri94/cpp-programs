#include<iostream>
using namespace std;
class insta{
int num;
char name[20];
static int c;
public:

insta(){
cout<<"enter details"<<endl;
cin>>num>>name;
c++;
}

static int num_count(){
return c;}
};
int insta::c=0;
int main(){
insta a,b,c;
cout<<insta::num_count()<<endl;
cout<<a.num_count()<<endl;
}


