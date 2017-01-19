//
//  main.cpp
//  Try
//
//  Created by Asmita on 2016/12/02.
//  Copyright © 2016年 Asmita. All rights reserved.
//



#include <iostream>
using namespace std;
int counter(int num)
{

    int cnt = 1;
    int temp =num/10;
    while(temp){
        temp /=10;
        ++cnt;
    }
    if(num <0) {
        temp =-num;
        ++cnt;
    }
    cout<<"cnt="<<cnt<<endl;
    return cnt;
}

char* num_to_str(int num,  char* str, int cnt) {
   
    if(num <0) {
        num =-num;
        str[0] ='-';
    }
    str[cnt] ='\0';
    while(num) {
        str[--cnt] ='0'+ num%10;
        num /=10;
    }
    return str;
    
}


int main( )
{
    int num=-12345;
    int cnt=counter(num);
    char* pivot=new char[cnt];
    char* result= num_to_str(num, pivot, cnt);
    cout<<result<<endl;
    delete pivot;

    return 0;
}


