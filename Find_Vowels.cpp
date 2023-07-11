#include<iostream>
using namespace std;
int findVowels(char* str);
int counter(char *str, int count, int count1);
int main()
{
	char *p = new char[200];
	cout<<"Enter string\n";
	cin.ignore();
	cin.getline(p, 200);
	
	cout<<"Number of Vowels: "<<findVowels(p);
	
return 0;
}

int findVowels(char* str)
{
	int count=0, count1=0;
	
return counter(str, count, count1);
}

int counter(char *str, int count, int count1)
{
	if (*(str + count) == '\0')
		return count1;
	
	if (*(str + count) == '\n')
		return count1;
	
	if (*(str + count) == 'a' || *(str + count) == 'e' || *(str + count) == 'i' || *(str + count) == 'o' || *(str + count) == 'u')
		count1++;
	
return counter(str, ++count, count1);
}
		
		
		

