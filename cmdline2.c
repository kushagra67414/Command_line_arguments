#include<iostream>
#include<string.h>
using namespace std;
int main(int argc,char *argv[])
{

cout<<"you've entered"<<argc<<"arguments:"<<endl;
for(int i=0;i<argc;i++)
{
cout<<argv[i]<<endl;
}
cout<<endl;

cout<<"the arguments at odd position are :"<<endl;

for(int i=0;i<argc;i++)
{
if(i%2==0)
{
cout<<argv[i]<<endl;
}
}
cout<<endl;

cout<<"the arguments at even position are :"<<endl;
for(int i=0;i<argc;i++)
{
if(i%2!=0)
{
cout<<argv[i]<<endl;
}
}
cout<<endl;

cout<<"the arguments with reversal position are :"<<endl;

for(int i=argc-1;i>=0;i--)
{
 cout<<argv[i]<<endl;
}
cout<<endl;
for (int i=0;i<argc;i++)
{
int l=strlen(argv[i]);
char *bp,*ep,ch;
bp=argv[i];
ep=argv[i];
for(int j=0;j<l-1;j++)
{
ep++;
}
for(int j=0;j<l/2;j++)
{
ch=*ep;
*ep=*bp;
*bp=ch;
ep--;
bp++;
}
}
cout<<"the arguments with reversed orders are :"<<endl;
for(int i=0;i<argc;i++)
{

cout<<argv[i]<<endl;

}

return 0;

}
