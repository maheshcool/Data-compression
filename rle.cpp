#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main()
{
	string s, ans;
	cout<<"Enter the data: ";
	cin>>s;
	
	char t=s[0];
	int count=0;
	vector<char> v;
	vector<int> v1;
	v.push_back(t);
	for(int i=0; i<s.size(); i++)
	{
		if(t == s[i])
		{
			count++;
		}
		else
		{
			if(count>2)
			{
				v.pop_back();
				v.push_back(' ');
				v.push_back('*');
				v1.push_back(count);
				v.push_back(t);
				v.push_back(s[i]);
			}
			else if(count==2)
			{
				v.push_back(t);
			}
			
			else
			{
				v.push_back(s[i]);
			}
			t=s[i];
			count=1;
		}
		
		
	}
	if(count==2)
	{
		//v.push_back(t);
		v.push_back(t);
	}
	else if(count>2)
	{
		v1.push_back(count);
		v.pop_back();
		v.push_back(' ');
		v.push_back('*');
		v.push_back(t);
	}
	
	int j=0;
	for(int i=0; i<v.size(); i++)
	{
		if(i>=1 && v[i-1]=='*')
		{
			cout<<v1[j];
			j++;
		}
		cout<<v[i];
	}
	
	return 0;
}