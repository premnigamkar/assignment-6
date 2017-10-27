#include <iostream>
using namespace std;

int main() {
	int a; char b; bool c;float d;double x; long y;int *e=&a;char *f=&b;bool *g=&c;float *h=&d;double *p=&x;long *q=&y;
	cout<<"The size of int is "<<sizeof(a)<<".";
	cout<<"\nThe size of char is "<<sizeof(b)<<".";
	cout<<"\nThe size of bool is "<<sizeof(c)<<".";
            cout<<"\nThe size of float is "<<sizeof(d)<<".";
            cout<<"\nThe size of double is "<<sizeof(x)<<".";
            cout<<"\nThe size of long is "<<sizeof(y)<<".";
            cout<<"\nThe size of pointer of int is "<<sizeof(e)<<".";
            cout<<"\nThe size of pointer of char is "<<sizeof(f)<<".";
            cout<<"\nThe size of pointer of bool is "<<sizeof(g)<<".";
            cout<<"\nThe size of pointer of float is "<<sizeof(h)<<".";
            cout<<"\nThe size of pointer of double is "<<sizeof(p)<<".";
             cout<<"\nThe size of pointer of long is "<<sizeof(q)<<".";
	return 0;
}
