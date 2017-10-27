#include <iostream>
using namespace std;

int main() {
	char str[5]="prem";
	int i;
	cout<<"The string printed using normal index methods is ";
	for(i=0;i<4;i++)
	cout<<str[i];
	char* ptr=str;
	cout<<"\nThe string printed using pointer method is ";
	for(i=0;i<4;i++)
	{cout<<*ptr;
	ptr++;}
	return 0;
}
