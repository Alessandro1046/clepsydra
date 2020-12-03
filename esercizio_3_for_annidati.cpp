#include <iostream>

using namespace std;

int main()
{
 int i,n,j,k;
 for(i=0;i<=6;i+=2){
	 for(n=i/2;n<i;n++)
	 cout<<" ";
for(j=i;j<7;j++)
cout<<"*";

cout<<endl;
 }

 for(i=6;i>=0;i-=2){
	 for(n=i/2;n<i;n++)
	 cout<<" ";
for(j=i;j<7;j++)
cout<<"*";

cout<<endl;



 }

    return 0;
}
