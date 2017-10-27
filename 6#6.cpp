#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char str[10];
	cout << "Input about 10 characters of string\n";
    cin >> str;
    char* p=str;
    int n=strlen(str);
    int i,j;
    for (i=0;i<n;i++)
    {for (j=n-i-1;j<n;j++)
    cout<<*(p+j);
    cout<<"\n";}
	return 0;
}
