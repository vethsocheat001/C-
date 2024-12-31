#include<iostream>
using namespace std;
int main(){
  
int a,b;
cout<<"enter a : ";cin>>a;
cout<<"enter b : ";cin>>b;
int c = a & b ;
int d = a | b ;
cout <<"Inster bitwise and :"<<c<<endl;
cout <<"Inster bitwise and :"<<d<<endl;
  int e,f;
  cout<<"enter c :";cin>>e;
  cout<<"enter d :";cin>>f;
  int g = e ^ f ;
  int h = ~e ;
  cout<<"Inster bitwise xor :"<<g<<endl;
  cout<<"Inster bitwise not :"<<h<<endl;
 int a,b;
  cout<<"enter a :";cin>>a;
   cout<<"enter b :";cin>>b;
    int c = a >> b ;
     int d = a >> b ;
      cout <<"Inster bitwise and :"<<c<<endl;
       cout <<"Inster bitwise and :"<<d<<endl;
//////////////////////////////////////////
 int a = 3; // 0 + 2 + 1 or 0011 in binary
 int b = 6; // 4 + 2 + 0 or 0110 in binary
 int c = a | b;
 int d = a & b;
 int e = a ^ b;
 int f = (~a & b) | (a & ~b);
 int g = ~a & 0x0f;

    return 0 ;
}