#include<iostream>
using namespace std;
bool isLengtheven(string word);
main()
{
	string word;
	cout<<"Enter a string: ";
	cin>>word;
cout<<isLengtheven(word);
	
}
bool isLengtheven(string word)
{
	int count=0;
	for(int i=0;word[i]!='\0';i++)
	{
		count++;
	}
	if(count%2==0)
	{
		return 1;
	}
	if(count%2!=0)
	{
		return 0;
	}
}
//Task2
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string containsSeven(int numbers[], int size);
main()
{
	int numbers[100],size;
	int c=1;
	cout<<"Enter the size of Array: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		
		cout<<"Enter Element "<<c<<": ";
		cin>>numbers[i];
		c++;
	}
	cout<<containsSeven(numbers,size);
}
string containsSeven(int numbers[], int size)
{
	int count=0,c;
	string ans,ans1,str;
	
	for(int i=0;i<size;i++)
	{
		
			
		str=to_string(numbers[i]);
				
		for(int c=0;str[c]!='\0';c++)
	{
		if(str[c]=='7')
		{
			count++;
		}
			}
		
		
	}
	if(count>0)
		
		{
		
		ans="Boom!";
	    return ans;
	}
	else
	{
		ans1="there is no 7 in the Array";
		return ans1;
	}
	
	
}
//Task3
#include<iostream>
using namespace std;
bool areAllElementsIdentical(string arr[], int size);
main()
{
	string arr[100];
	int size,c=0;
	cout<<"Enter the size of Array: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter element "<<++c<<": ";
		cin>>arr[i];
		
}
cout<<areAllElementsIdentical(arr,size);
}
bool areAllElementsIdentical(string arr[], int size)
{int count=0;
	for(int i=1;i<size;i++)
	{
	
	if(arr[0]==arr[i])
	{
		count++;
	}
}
if(count==size-1)
{
	return 1;
}
else
{
	return 0;
}
	
}
//Task4
#include<iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);
main()
{
	int arr[100],size,n;
	int c=1;
	cout<<"Enter the size of Array: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		
		cout<<"Enter Element "<<c<<": ";
		cin>>arr[i];
		c++;
	}
	cout<<"Enter the number of times even-odd transformation needs to be done: ";
	cin>>n;
	evenOddTransform(arr,size,n);
}
void evenOddTransform(int arr[], int size, int n)
{
		int i;
	cout<<"[";

for(int c=0;c<n;c++)
{
	

	for(int i=0;i<size;i++)
	{
	if(arr[i]%2==0)
	{
		arr[i]=arr[i]-2;
		}	
		if(arr[i]%2!=0)
		{
			arr[i]=arr[i]+2;
		}
		if(c==n-1&&i==size-1)
	{
		cout<<arr[i];
	}
		if(c==n-1&&i!=size-1)
	{
		cout<<arr[i]<<", ";
	}
		
	}
	
	
	
}
cout<<"]";
}
//Task5
#include<iostream>
using namespace std;
int common(string str1,string str2);
main()
{
	string str1,str2;
	cout<<"Enter the first string: ";
	cin>>str1;
	cout<<"Enter the second string: ";
	cin>>str2;
	cout<<"Number of common characters: "<<common(str1,str2);
}
int common(string str1,string str2)
{
	int count=0;
	for(int i=0;str1[i]!='\0';i++)
	{
	
		for(int c=0;str2[c]!='\0';c++)
		{
			if(str1[i]==str2[c])
			{
				count++;
				str2[c] = '#';
				break;
				
			}
		}
	}
	return count;
}
//Task6
#include<iostream>
using namespace std;
int coloringTime(string cols[], int size);
main()
{
	int size;
	string cols[100];
	int c=1;
	cout<<"Enter the size of Array: ";
	cin>>size;
	for(int i=0;i<size;i++)
	{
		
		cout<<"Enter Element "<<c<<": ";
		cin>>cols[i];
		c++;
	}
	cout<<"Time to color: "<<coloringTime(cols,size)<<" seconds";
}
int coloringTime(string cols[], int size)
{int count=0,total;
	for(int i=0;i<size;i++)
	{
		count++;
	}
	total=count*2;
	count=count-1;
	total=count*1+total;
	return total;
}
//Task7
#include<iostream>
using namespace std;
void convertPINToDance(string pin);
main()
{
	 string pin;
	 int k=0;
	 cout<<"Enter your PIN (4 digits): ";
	 
	 cin>>pin;
	 for(int c=0;pin[c]!='\0';c++)
	 {
	 	
	 k++;	
	 }
	
	 	
	if(k!=4)
	{
	cout<<"Invalid Input";
	return 0;	
	}
	for (int b=0;pin[b]!='\0';b++)
	 {
    
        if (pin[b]!='0'&& pin[b]!='1'&&pin[b]!='2'&&pin[b]!='3'&&pin[b]!='4'&&pin[b]!='5'&&pin[b]!='6'&&pin[b]!='7'&&pin[b]!='8'&&pin[b]!='9')
{
	cout<<"Invalid Input ";
	return 0;
}
    }

	 
	convertPINToDance(pin);
	 
	 
}
void convertPINToDance(string pin)
{
	for(int c=0;pin[c]!='\0';c++)
	{
		char pin_char =pin[c];
    int pin_int = pin_char - '0';
    int result=pin_int+c;
    
    
		
		if(result==0||result==10)
		{
			cout<<"Shimmy";
		}
		if(result==1||result==11)
		{
			cout<<"Shake";
		}
		if(result==2||result==12)
		{
			cout<<"Pirouette";
		}
		if(result==3||result==13)
		{
			cout<<"Slide";
		}
		if(result==4||result==14)
		{
			cout<<"Box Step";
		}
		if(result==5||result==15)
		{
			cout<<"Headspin";
		}
		if(result==6||result==16)
		{
			cout<<"Dosado";
		}
		if(result==7||result==17)
		{
			cout<<"Pop";
		}
		if(result==8||result==18)
		{
			cout<<"Lock";
		}
		if(result==9)
		{
			cout<<"Arabesque";
		}
		if(c!=3)
		cout<<", ";
		
	}
}
//Task8
#include<iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
main()
{
	string str1,str2;
	cout<<"Enter the correct Phrase: ";
	getline(cin,str1);
	cout<<"Enter what you actually typed: ";
	getline(cin,str2);
	cout<<"Broken keys: "<<findBrokenKeys(str1,str2);
}
string findBrokenKeys(string correctPhrase, string actualTyped)
{string result;
	string result1;

	for(int i=0;correctPhrase[i]!='\0';i++)
	{
		int j=0;
	if(correctPhrase[i]!=actualTyped[i])
{			
		for(int k=0;result[k]!='\0';k++)
		{
				if(result[k]==correctPhrase[i])
				{
					j++;
					break;
				}
				}
				if(j==0)
			
				{
				result+=correctPhrase[i];
				}
			}	
	}
	return result;
}

//Task9
#include<iostream>
using namespace std;
void longest7SegmentWord(string arr[]);
main()
{
	string arr[100];
	int n;
	cout<<"Enter the number of words: ";
	cin>>n;
	cout<<"Enter the words, one by one: "<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Longest 7-segment word: ";
	longest7SegmentWord(arr);
}
void longest7SegmentWord(string arr[])
{string result;
	int i;
	int k;
	int count;
	int arr1[10];
	string str,word;
		int longest=7;
	for(int i=0;i<3;i++)
	{
	str=arr[i];
	
		int k=0;count=0;
		for(int c=0;str[c]!='\0';c++)
		{
			
			
			if(str[c]=='k'||str[c]=='m'||str[c]=='v'||str[c]=='w'||str[c]=='x')
			{
				k++;
				break;
				
				
			}count++;
		}
		
			
			if(longest==count)
			break;
			if(longest<count&&k==0)
			{
				longest=count;
				
				word=arr[i];
			}
		
	}
	
	cout<<word;
}
			
	
		
			
	
