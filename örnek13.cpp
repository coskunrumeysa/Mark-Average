//Rumeysa Coskun
//Bir siniftaki ogrencilerin bir dersten aldýklarý notlarin ortalamasini ekrana yazan program.
#include<iostream>
using namespace std;
int main()
{
int x=2;
int i=1;
int t;
int n;
double av;
for(i;i<=x;i++)
{
cout<<"Please enter the mark"<<endl;
cin>>n;
cout<<endl;
t=t+n;
}
cout<<endl;
cout<<"Average of the marks:"<<endl;
av=t/x;
cout<<av;
cout<<endl;
system("PAUSE");
return 0;
}
