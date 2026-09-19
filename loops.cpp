#include <iostream>
using namespace std;
int main(){
float x=1,y=1,t1=0,t2=0;
cout << "enter a number and we calculate the running total and the absolute total."<<endl;
cout<< "if you want to end program enter 0"<<endl;
while(x!=0 && y!=0){
cout<<"give me a number:";
cin>>x;
cout<<"give me a number:";
cin >> y;
t1=x+y;
cout << "*THE RUNNIN TOTAL IS* \n"<<t1<<endl;
t2+=t1;
}
cout <<"**THE ABSOLUTE TOTAL IS** \n "<<t2<<" ."<<endl;
}