#include<iostream>
using namespace std;
class op
{
	string s1;
public:
	void getd()
	{
		getline(cin,s1);
	}
	void operator / (op o2)
	{
		string s3=o2.s1;
		int count =0,c=0;
		//if s3 is a substring in s1,find no of occurance
		int l1=s1.size();
		int l2=s3.size();
		//cout<<l1<<l2<<endl;
		int i=0,j=0;
			while(i<=l1)
			{
				j=0;
				//cout<<"s1["<<i<<"]="<<s1[i]<<endl;
				//cout<<"s3["<<j<<"]="<<s3[j]<<endl;
				while(s1[i]==s3[j])
				{
					c++;
					j++;
					i++;
					//cout<<"c++ occured";
				}
				if(c==l2)
				{
	//				cout<<"count++ "<<" i="<<i;
					count++;
					c=0;
				}
				else i++;
			}
			cout<<"no of times occured ="<<count;
		
	}
	void putd()
	{
		cout<<s1;
	}
};
main()
{
	op o1,o2;
	o1.getd();
	o2.getd();
	o1/o2;
	//o1.putd();
}
