#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
float n1=99999,n2=555,n3=212.1746;
string tt,cc;
char dd;
cout<<setfill('k')<<setw(6)<<n1<<" ";
cout<<setw(4)<<n2<<endl;
cout<<setprecision(3)<<n3<<" "<<fixed<<setprecision(3)<<n3<<endl;
cout<<"write a character:"<<endl;
cin>>noskipws>>dd;
//cout<<"one more:"<<endl;
cout<<"character is: ";
cout.put(dd);


return(0);
}