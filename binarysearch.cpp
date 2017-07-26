/*
Who Will Win?
Show Topic Tags     
Gautam and Subhash are two brothers. They are similar to each other in all respects except one. 
They have different ways of searching. When Gautam has to search for an item from a lot, 
he goes through all the items one by one and stops when he finds the item. 
However Subhash has an entirely different and interesting way of searching. 
However the search works only for items which are sorted. He goes to the middle of the lot, 
if he finds the desired item, he stops, if not, he checks whether the middle item is smaller or larger than the required item. If larger, he repeats the same process for the first half of the lot, otherwise second half. One day, the two brothers sit in a contest in which they have to find a name out of a sorted dictionary. Whoever finds out the name first will win the contest. The audience is very eager to know who will win and hence they want you to predict.

Input:

The first line of input takes the number of test cases, T.

The next T lines take the total number of names N, followed by M the position of the name to be searched, as well as the amount of time taken for each observation by Gautam G and Subhash S.

Output:

Print 1 in case Gautam will win, 2 in case Subhash will win, 0 in case of a draw in a separate line.

Constraints:

1<=T<=100

1<=N<=1000

1<=M<=N

1<=G<=100

1<=S<=100

Example:

Input:

3
10 8 10 25
10 8 10 30
10 8 10 12

Output:

2
2
2
*/

#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    cout << l << " " << r << " " << x << endl;
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        // If the element is present at the middle itself
        if (arr[mid] == x)  return mid;
 
        // If element is smaller than mid, then it can only be present
        // in left subarray
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
 
        // Else the element can only be present in right subarray
        return binarySearch(arr, mid+1, r, x);
   }
 
   // We reach here when element is not present in array
   return -1;
}

//my implement - not considering end condition...
int binary_search( int *arr, int size, int mid, int k )
{
   
    if( mid + 1 == size )
        return -1;
        
    if( arr[mid] == k )
        return mid + 1;
        
    if( arr[mid] > k )
    {
        if( mid == 0 ) return -1;
        return binary_search(arr, size, mid/2, k);
    }   
    if( arr[mid] < k )
    {
        return binary_search(arr, size, (mid + size)/2, k);
    }
        
    return -1;
}

int main()
{
    int arr[10] = { 1, 3, 55, 77, 89, 99, 100, 120, 333, 667 };
    
    //int res = binary_search(arr, 10, 10/2, 999 );
    int res = binarySearch( arr, 0, 9, 999);
    cout << res;
    
    return 0;
}