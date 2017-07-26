/*
Searching a number
Show Topic Tags     
Given an array of N elements and a integer K , return the position of first occurence of K in given array.  Position of first element is considered as 1.
Output -1 if the number is not found in an array.

Input:

The first line contains 'T' denoting the number of testcases. Then follows description of testcases.
Each case begins with a two space separated integer N and K denoting the size of array and the value of K respectively. The next line contains the N space separated integers denoting the elements of array.


Output:

For each test case, print the index of first occurrence of given number K.
Print -1 if the number is not found in array.


Constraints:

1<=T<=50
1<=N<=1000
1<=K<=100000
1<=A[i]<=100000


Example:

Input :
2 
5 16
9 7 2 16 4
7 98
1 22 57 47 34 18 66

Output : 
4
-1
*/
#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int linear_search( int *arr, int n, int k );

int main()
{
    int *arr = NULL;
    int n=0, k=0, t=0, v=0;
    vector<int> vecRes;
    
    cin >> t;
    for(int i=0 ; i<t ; i++ )
    {
        cin >> n >> k;
        arr = new int[n];
        
        for( int j=0 ; j<n ; j++ )
        {
            cin >> arr[j];
        }
        int r = linear_search( arr, n, k );
        if( r != -1 ) 
            r++;
        vecRes.push_back(r);
        
        delete arr;
        arr = NULL;
    }
    
    for( int k=0 ; k<vecRes.size() ; k++ )
        cout << vecRes[k] << " ";
    
}

int linear_search( int *arr, int n, int k )
{

    int ret = -1;
    for( int i=0 ; i<n ; i++ )
    {
        if( arr[i] == k )    
        {
            ret = i;
            break;
        }
    }
    return ret;
}