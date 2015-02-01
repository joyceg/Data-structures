//PROGRAM TO CHECK BALANCED PARENTHESIS
#include<iostream>
using namespace std;

int main()
{
    //int a,b;
   // a=b=0;
    int i;
    string str;
    int closing,opening;
    opening=closing=0;
    cout<<"Enter any STATEMENT:";
    getline(cin,str);
    for(i=0;str[i]!='\0';i++)
    {
    if(str[i]=='(')
        {opening++;
        }
        else if(str[i]==')')
        {closing++;}

    if(closing>opening)
    {cout<<"unbalanced";return 0;
    }

    }
    if(opening==closing)
    cout<<"balanced";


    return 0;

}
