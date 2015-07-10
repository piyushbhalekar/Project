#include <iostream>
#include <list>
using namespace std;

int main()
{
int number,i=0;
list<int> ptr;
//ptr=new list<int>[10];

cout<<"enter the number:\n";
cin>>number;
if(number==0)
{
number=number+65;
cout<<char(number);
}
else
{
while(number!=0)
{
ptr.push_front(number%26);
number=number/26;
i++;
}
int s;
while(i!=0)
{
s=ptr.front();
if(i!=1)
{
//s=ptr.front();
s--;
//cout<<s;
s=s+65;
cout<<char(s);
}
else
{
//s=ptr.front();
s=s+65;
cout<<char(s);
}
ptr.pop_front();
i--;
}
}
return 0;
}


