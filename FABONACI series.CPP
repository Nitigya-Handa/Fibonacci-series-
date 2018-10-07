#include<iostream>

int main()
{

 int a,s,d,f;
 a=0; s=1; d=1;
 cout<<"Enter the Number =";
 cin>>f;
 cout<<a;
 while(s<=f)
 {
  d=s;
  cout<<"  "<<s;
  s=d+a;
  a=d;
 }
return 0;
}
