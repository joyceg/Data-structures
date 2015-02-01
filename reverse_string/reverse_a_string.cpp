#include<iostream>
using namespace std;
class stack
{
public:
        int rear,i;
        string str;
        stack()
        {
        rear=-1;

        }
        void push(char a)
        {

        str+=a;
        rear++;

        }
        void pop()
        {
        for(i=rear;i>=0;i--)
        cout<<str[i];

        }




};
int main()
{   stack s;
    string str;
    int i;
    cout<<"Enter any string:";
    getline(cin,str);
    for(i=0;str[i]!='\0';i++)
    {
    s.push(str[i]);
    }
    cout<<"The reverse of "<<str<<" is: ";
    s.pop();

    return 0;

}
