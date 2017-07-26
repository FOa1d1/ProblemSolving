#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int arr[] = {40,35,22,11,5};
    int val = 11, ret = -1;
    
    for( int i=0 ; i<sizeof(arr)/sizeof(arr[0]) ; i++ )
    {
        if( arr[i] == val )    
        {
            ret = i;
            break;
        }
    }
    
    cout << "Index of val[" << val << "] is "  << ret + 1 << endl;
}