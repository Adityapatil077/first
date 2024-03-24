/*Q2. WAP to perform constructor overloading 
class name as  CharArr
CharArr(char[]): convert lower case string to upper case 
CharArr(char[], int count): input number value from keyboard and search in array 
*/
#include<iostream>
#include<string.h>
using namespace std;
class CharArr
{
    int count;
    char *ch,*p;
    public : 
    CharArr(char ch[])
    {
        this->ch = ch;
    }
    CharArr(char ch[],int count)
    {
        this->count = count;
        this->p = ch;
    }
    void lowerToUpper()
    {
        strupr(ch);
        cout<<"\nString is : "<<ch;
    }
    int getvalue()
    {
        for(int i=0;i<6;i++)
        {
            if(count==p[i])
                return 1;
        }
        return 0;
    }
    
};

int main()
{
    char st[90];
    cout<<"\nENter a string : ";
    gets(st);
    char value;
    CharArr a1(st);
    a1.lowerToUpper();
    cout<<"\nEnter Number Value : ";
    cin>>value;
    CharArr a2(st,value);
    if(a2.getvalue())
        cout<<"\nValue is Found";
    else
        cout<<"\nValue is not Found";

}