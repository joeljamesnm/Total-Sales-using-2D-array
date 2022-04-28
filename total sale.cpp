#include <iostream>
using namespace std;

int main()
{
	double sale[3][2] = {{1200.33,2350.75},{3677.80,2456.05},{750.67,1345.99}};
	double total;
	
	cout<<"              Paperback Sales ($)         |          Hardcover Sales($)"<<endl;
	cout<<"Store 1             "<<sale[0][0]<<"\t\t\t\t"<<sale[0][1]<<endl;
	cout<<"Store 2             "<<sale[1][0]<<"\t\t\t\t"<<sale[1][1]<<endl;
	cout<<"Store 3             "<<sale[2][0]<<"\t\t\t\t"<<sale[2][1]<<endl;
	
	total = sale[0][0] + sale[0][1] + sale[1][0] + sale[1][1] + sale[2][0] + sale[2][1];
	
	cout<<endl<<"Total Sales: $"<<total;
}
