/*
EXCEPTION IN BUILT IN TYPES

#include<iostream>
using namespace std;
 void fun(int n)
 {
 	try{
 		if(n==5)
 		     throw n;
 		cout<<" no exception";
	 }
	 catch(...)
	 {
	 	cout<<"exceptoion caught";
	 }
	 
 }
int main(){
   int n;
   cout<<" enter a number";
   cin>>n;
   fun(n);
}
*/
// EXCEPTION IN CLASS TYPE
#include<iostream>
using namespace std;
class exceptions{
	public:
	int what;
	string str;
	exceptions()
	{
		what =0;
		str='\0';
	}
	exceptions(string s,int i)
	{
		what = i;
		str = s;
	}
};
int main(){
	int i;
	cout<<"enter a non negative number ";
	cin>>i;
	try{
		if(i<0)
		    throw exceptions("n",i);
	}
	catch(exceptions e)
	{
		cout<<e.what;
		cout<<e.str;
	}
}









