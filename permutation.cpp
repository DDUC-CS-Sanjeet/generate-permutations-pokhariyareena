#include<iostream>
#include<string>
using namespace std;
void permute(char a[],int first,int last)
{
	if(first==last)
	{
		cout<<a<<endl;
	}
	else
	{
		for(int i=first;i<=last;i++)
		{
			swap(a[first],a[i]);
			permute(a,first+1,last);
			swap(a[first],a[i]);
		}	
	}
}
int main()
{
	int num;cout<<"Enter number of characters"<<endl;
	cin>>num;
	char str[num+1];
	for(int i=0,k=97;i<num;i++,k++)
	{
		str[i]=k;
	}
	str[num]='\0';
	cout<<num<<endl;
	permute(str,0,num-1);
}
