#include <iostream>
using namespace std;
//Store Inventory System (2D array indexing, nested for loops, matrix row/column operations)
//A retail store tracks sales for 4 products across 3 branches.
int main(){
int x=0,y=0;
float tops;
int sales[4][3];
//saving the sales data for product:branche index
for (x=0;x<4;x++)
{
cout<<"ENTER THE SALES OF THE PRODUCT "<<x+1<<"\n";
for (y=0;y<3;y++)
{
cout << " In branche "<<y+1<<endl;
cin >> sales[x][y];
}
}
//calculate the total sales made by branche 2
int tsb2=0 ;
for (x=0;x<4;x++){
tsb2 += sales[x][1];
}
cout <<"Total sales made by branche 2 is : "<< tsb2<<endl;
//calculate the top sales product
float a=-1,b=0,cur_tot=0,top_pro;
for (x=0;x<4;x++)
{
for (y=0;y<3;y++)
{
b+=sales[x][y];
}
cur_tot = b;
b=0;
if(cur_tot>a){
a=cur_tot;
top_pro=x+1;
}
}
cout<<"the top sales product is : " << top_pro<< " with number of sales : "<< a;
}
