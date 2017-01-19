#include <iostream>
using namespace std;
int chartoint(char* str)
{
    int num=0;
    int sign=1;
    if (*str=='-')
    {
        sign=-1;
        str++;
    }
    
    while(*str!='\0')
    {
        num=num*10+ *str-'0';
        str++;

    }
    return sign*num;
}

int main()
{
    char pivot[]= "-12345";
    int z=chartoint(pivot);
    cout<<"z="<<z<<endl;
    return 0;
}