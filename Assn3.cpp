/*Q1. WAP to perform constructor overloading for array  create class name as 
TestArr with two constructor 
TestArr(int a[]): arrange all elements in ascending oder
TestArr(int a[],int key): search element in array
*/

#include<iostream>
using namespace std;

class TestArr
{
    int *a,key;

    public :
        TestArr(int a[])
        {
            this->a = a;
        }
        TestArr(int a[],int key)
        {
            this->a = a;
            this->key = key;
        }
        void sortArray()
        {
            for(int i=0;i<5;i++)
            {
                for(int j=i+1;j<5;j++)
                {
                    if(a[i]>a[j])
                    {
                        int temp = a[i];
                        a[i]=a[j];
                        a[j] = temp;
                    }
                        
                }
            }
            cout<<"\nSorted Array is :";
            for(int i=0;i<5;i++)
            {
                cout<<"\t"<<a[i];
            }
        }
        int Cheakkey()
        {
            for(int i=0;i<5;i++)
            {
                if(key==a[i])
                {
                    return 1;
                }       
            }    
            return 0;
        }
};

int main()
{
    int a[5]={1,5,6,4,3},key;
    cout<<"\nEnter a search key : ";
    cin>>key;
    TestArr a1(a);
    TestArr a2(a,key);
    a1.sortArray();
    if(a2.Cheakkey())
        cout<<"\nKey is found";
    else
        cout<<"\nKey is not found";
    
return 0;
}